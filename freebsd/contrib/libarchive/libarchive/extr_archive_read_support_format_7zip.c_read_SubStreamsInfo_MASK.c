
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int tmpDigests ;
struct archive_read {int dummy; } ;
struct _7z_substream_info {size_t unpack_streams; int* unpackSizes; unsigned char* digestsDefined; scalar_t__* digests; int * defineds; } ;
struct _7z_folder {int numUnpackStreams; int digest; scalar_t__ digest_defined; } ;
struct _7z_digests {size_t unpack_streams; int* unpackSizes; unsigned char* digestsDefined; scalar_t__* digests; int * defineds; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (size_t,int) ;
 int FUNC_1 (struct _7z_folder*) ;
 int FUNC_2 (struct _7z_substream_info*) ;
 unsigned char* FUNC_3 (struct archive_read*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct _7z_substream_info*,int ,int) ;
 scalar_t__ FUNC_5 (struct archive_read*,int*) ;
 scalar_t__ FUNC_6 (struct archive_read*,struct _7z_substream_info*,scalar_t__) ;

__attribute__((used)) static int
FUNC_7(struct archive_read *VAR_6, struct _7z_substream_info *VAR_7,
    struct _7z_folder *VAR_8, size_t VAR_9)
{
 const unsigned char *VAR_10;
 uint64_t *VAR_11;
 size_t VAR_12;
 int VAR_13;
 unsigned VAR_14;
 uint32_t VAR_15;

 FUNC_4(VAR_7, 0, sizeof(*VAR_7));

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
  VAR_8[VAR_14].numUnpackStreams = 1;

 if ((VAR_10 = FUNC_3(VAR_6, 1)) == ((void*)0))
  return (-1);
 VAR_13 = *VAR_10;

 if (VAR_13 == VAR_4) {
  VAR_12 = 0;
  for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
   if (FUNC_5(VAR_6, &(VAR_8[VAR_14].numUnpackStreams)) < 0)
    return (-1);
   if (VAR_1 < VAR_8[VAR_14].numUnpackStreams)
    return (-1);
   if (VAR_12 > VAR_0 - VAR_1) {
    return (-1);
   }
   VAR_12 += (size_t)VAR_8[VAR_14].numUnpackStreams;
  }
  if ((VAR_10 = FUNC_3(VAR_6, 1)) == ((void*)0))
   return (-1);
  VAR_13 = *VAR_10;
 } else
  VAR_12 = VAR_9;

 VAR_7->unpack_streams = VAR_12;
 if (VAR_12) {
  VAR_7->unpackSizes = FUNC_0(VAR_12,
      sizeof(*VAR_7->unpackSizes));
  VAR_7->digestsDefined = FUNC_0(VAR_12,
      sizeof(*VAR_7->digestsDefined));
  VAR_7->digests = FUNC_0(VAR_12,
      sizeof(*VAR_7->digests));
  if (VAR_7->unpackSizes == ((void*)0) || VAR_7->digestsDefined == ((void*)0) ||
      VAR_7->digests == ((void*)0))
   return (-1);
 }

 VAR_11 = VAR_7->unpackSizes;
 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  unsigned VAR_16;
  uint64_t VAR_17;

  if (VAR_8[VAR_14].numUnpackStreams == 0)
   continue;

  VAR_17 = 0;
  if (VAR_13 == VAR_5) {
   for (VAR_16 = 1; VAR_16 < VAR_8[VAR_14].numUnpackStreams; VAR_16++) {
    if (FUNC_5(VAR_6, VAR_11) < 0)
     return (-1);
    VAR_17 += *VAR_11++;
   }
  }
  *VAR_11++ = FUNC_1(&VAR_8[VAR_14]) - VAR_17;
 }

 if (VAR_13 == VAR_5) {
  if ((VAR_10 = FUNC_3(VAR_6, 1)) == ((void*)0))
   return (-1);
  VAR_13 = *VAR_10;
 }

 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  VAR_7->digestsDefined[VAR_14] = 0;
  VAR_7->digests[VAR_14] = 0;
 }

 VAR_15 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  if (VAR_8[VAR_14].numUnpackStreams != 1 || !VAR_8[VAR_14].digest_defined)
   VAR_15 += (uint32_t)VAR_8[VAR_14].numUnpackStreams;
 }

 if (VAR_13 == VAR_2) {
  struct _7z_digests VAR_18;
  unsigned char *VAR_19 = VAR_7->digestsDefined;
  uint32_t * VAR_20 = VAR_7->digests;
  int VAR_21 = 0;

  FUNC_4(&VAR_18, 0, sizeof(VAR_18));
  if (FUNC_6(VAR_6, &(VAR_18), VAR_15) < 0) {
   FUNC_2(&VAR_18);
   return (-1);
  }
  for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
   if (VAR_8[VAR_14].numUnpackStreams == 1 && VAR_8[VAR_14].digest_defined) {
    *VAR_19++ = 1;
    *VAR_20++ = VAR_8[VAR_14].digest;
   } else {
    unsigned VAR_22;

    for (VAR_22 = 0; VAR_22 < VAR_8[VAR_14].numUnpackStreams;
        VAR_22++, VAR_21++) {
     *VAR_19++ =
         VAR_18.defineds[VAR_21];
     *VAR_20++ =
         VAR_18.digests[VAR_21];
    }
   }
  }
  FUNC_2(&VAR_18);
  if ((VAR_10 = FUNC_3(VAR_6, 1)) == ((void*)0))
   return (-1);
  VAR_13 = *VAR_10;
 }




 if (VAR_13 != VAR_3)
  return (-1);
 return (0);
}
