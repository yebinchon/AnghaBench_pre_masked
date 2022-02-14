
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct archive_read {TYPE_1__* format; } ;
struct _7zip {int header_bytes_remaining; } ;
struct _7z_folder {int numCoders; int numBindPairs; int numPackedStreams; unsigned int* packedStreams; int numInStreams; int numOutStreams; TYPE_3__* bindPairs; TYPE_2__* coders; } ;
struct TYPE_6__ {int inIndex; int outIndex; } ;
struct TYPE_5__ {int numInStreams; int numOutStreams; int propertiesSize; int * properties; int codec; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 void* FUNC_0 (size_t,int) ;
 int FUNC_1 (unsigned char const*,size_t) ;
 unsigned char* FUNC_2 (struct archive_read*,size_t) ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (int *,unsigned char const*,size_t) ;
 int FUNC_5 (struct _7z_folder*,int ,int) ;
 scalar_t__ FUNC_6 (struct archive_read*,int*) ;

__attribute__((used)) static int
FUNC_7(struct archive_read *VAR_1, struct _7z_folder *VAR_2)
{
 struct _7zip *VAR_3 = (struct _7zip *)VAR_1->format->data;
 const unsigned char *VAR_4;
 uint64_t VAR_5 = 0;
 uint64_t VAR_6 = 0;
 unsigned VAR_7;

 FUNC_5(VAR_2, 0, sizeof(*VAR_2));




 if (FUNC_6(VAR_1, &(VAR_2->numCoders)) < 0)
  return (-1);
 if (VAR_2->numCoders > 4)

  return (-1);

 VAR_2->coders = FUNC_0((size_t)VAR_2->numCoders, sizeof(*VAR_2->coders));
 if (VAR_2->coders == ((void*)0))
  return (-1);
 for (VAR_7 = 0; VAR_7< VAR_2->numCoders; VAR_7++) {
  size_t VAR_8;
  int VAR_9, VAR_10;

  if ((VAR_4 = FUNC_2(VAR_1, 1)) == ((void*)0))
   return (-1);
  VAR_8 = *VAR_4 & 0xf;
  VAR_9 = (*VAR_4 & 0x10)?0:1;
  VAR_10 = *VAR_4 & 0x20;
  if (*VAR_4 & 0x80)
   return (-1);




  if ((VAR_4 = FUNC_2(VAR_1, VAR_8)) == ((void*)0))
   return (-1);

  VAR_2->coders[VAR_7].codec = FUNC_1(VAR_4, VAR_8);

  if (VAR_9) {
   VAR_2->coders[VAR_7].numInStreams = 1;
   VAR_2->coders[VAR_7].numOutStreams = 1;
  } else {
   if (FUNC_6(
       VAR_1, &(VAR_2->coders[VAR_7].numInStreams)) < 0)
    return (-1);
   if (VAR_0 < VAR_2->coders[VAR_7].numInStreams)
    return (-1);
   if (FUNC_6(
       VAR_1, &(VAR_2->coders[VAR_7].numOutStreams)) < 0)
    return (-1);
   if (VAR_0 < VAR_2->coders[VAR_7].numOutStreams)
    return (-1);
  }

  if (VAR_10) {
   if (FUNC_6(
       VAR_1, &(VAR_2->coders[VAR_7].propertiesSize)) < 0)
    return (-1);
   if ((VAR_4 = FUNC_2(
       VAR_1, (size_t)VAR_2->coders[VAR_7].propertiesSize)) == ((void*)0))
    return (-1);
   VAR_2->coders[VAR_7].properties =
       FUNC_3((size_t)VAR_2->coders[VAR_7].propertiesSize);
   if (VAR_2->coders[VAR_7].properties == ((void*)0))
    return (-1);
   FUNC_4(VAR_2->coders[VAR_7].properties, VAR_4,
       (size_t)VAR_2->coders[VAR_7].propertiesSize);
  }

  VAR_5 += VAR_2->coders[VAR_7].numInStreams;
  VAR_6 += VAR_2->coders[VAR_7].numOutStreams;
 }

 if (VAR_6 == 0 ||
     VAR_5 < VAR_6-1)
  return (-1);

 VAR_2->numBindPairs = VAR_6 - 1;
 if (VAR_3->header_bytes_remaining < VAR_2->numBindPairs)
   return (-1);
 if (VAR_2->numBindPairs > 0) {
  VAR_2->bindPairs =
   FUNC_0((size_t)VAR_2->numBindPairs, sizeof(*VAR_2->bindPairs));
  if (VAR_2->bindPairs == ((void*)0))
   return (-1);
 } else
  VAR_2->bindPairs = ((void*)0);
 for (VAR_7 = 0; VAR_7 < VAR_2->numBindPairs; VAR_7++) {
  if (FUNC_6(VAR_1, &(VAR_2->bindPairs[VAR_7].inIndex)) < 0)
   return (-1);
  if (VAR_0 < VAR_2->bindPairs[VAR_7].inIndex)
   return (-1);
  if (FUNC_6(VAR_1, &(VAR_2->bindPairs[VAR_7].outIndex)) < 0)
   return (-1);
  if (VAR_0 < VAR_2->bindPairs[VAR_7].outIndex)
   return (-1);
 }

 VAR_2->numPackedStreams = VAR_5 - VAR_2->numBindPairs;
 VAR_2->packedStreams =
     FUNC_0((size_t)VAR_2->numPackedStreams, sizeof(*VAR_2->packedStreams));
 if (VAR_2->packedStreams == ((void*)0))
  return (-1);
 if (VAR_2->numPackedStreams == 1) {
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
   unsigned VAR_11;
   for (VAR_11 = 0; VAR_11 < VAR_2->numBindPairs; VAR_11++) {
    if (VAR_2->bindPairs[VAR_11].inIndex == VAR_7)
     break;
   }
   if (VAR_11 == VAR_2->numBindPairs)
    break;
  }
  if (VAR_7 == VAR_5)
   return (-1);
  VAR_2->packedStreams[0] = VAR_7;
 } else {
  for (VAR_7 = 0; VAR_7 < VAR_2->numPackedStreams; VAR_7++) {
   if (FUNC_6(VAR_1, &(VAR_2->packedStreams[VAR_7])) < 0)
    return (-1);
   if (VAR_0 < VAR_2->packedStreams[VAR_7])
    return (-1);
  }
 }
 VAR_2->numInStreams = VAR_5;
 VAR_2->numOutStreams = VAR_6;

 return (0);
}
