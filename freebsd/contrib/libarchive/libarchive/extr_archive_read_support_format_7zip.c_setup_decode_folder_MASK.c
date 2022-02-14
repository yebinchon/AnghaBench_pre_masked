
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct archive_read {int archive; int entry; TYPE_2__* format; } ;
struct _7zip {unsigned char** sub_stream_buff; unsigned int pack_stream_remaining; unsigned int pack_stream_index; int folder_outbytes_remaining; int has_encrypted_entries; size_t main_stream_bytes_remaining; size_t pack_stream_bytes_unconsumed; int pack_stream_inbytes_remaining; size_t* sub_stream_size; size_t* sub_stream_bytes_remaining; int tmp_stream_buff_size; scalar_t__ uncompressed_buffer_bytes_remaining; scalar_t__ bcj2_outPos; scalar_t__ odd_bcj_size; scalar_t__ tmp_stream_bytes_remaining; scalar_t__ tmp_stream_bytes_avail; int * tmp_stream_buff; } ;
struct _7z_folder {unsigned int numCoders; int numInStreams; int numOutStreams; int* unPackSize; scalar_t__ packIndex; struct _7z_coder* coders; TYPE_1__* bindPairs; scalar_t__ numPackedStreams; } ;
struct _7z_coder {int codec; int member_1; int member_2; int * member_4; int member_3; int member_0; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {int inIndex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;




 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ,char*,...) ;
 scalar_t__ FUNC_3 (struct archive_read*,int ) ;
 void* FUNC_4 (struct _7z_folder*) ;
 int FUNC_5 (unsigned char*) ;
 scalar_t__ FUNC_6 (struct archive_read*,void const**,scalar_t__,int ) ;
 int FUNC_7 (struct archive_read*,struct _7zip*,struct _7z_coder const*,struct _7z_coder const*) ;
 void* FUNC_8 (size_t) ;
 int FUNC_9 (unsigned char*,void const*,scalar_t__) ;
 int FUNC_10 (struct archive_read*) ;
 int FUNC_11 (struct archive_read*) ;

__attribute__((used)) static int
FUNC_12(struct archive_read *VAR_6, struct _7z_folder *VAR_7,
    int VAR_8)
{
 struct _7zip *VAR_9 = (struct _7zip *)VAR_6->format->data;
 const struct _7z_coder *VAR_10, *VAR_11;
 const char *VAR_12 = (VAR_8)?"archive header":"file content";
 unsigned VAR_13;
 int VAR_14, VAR_15 = 0;




 for (VAR_13 = 0; VAR_13 < 3; VAR_13++) {
  FUNC_5(VAR_9->sub_stream_buff[VAR_13]);
  VAR_9->sub_stream_buff[VAR_13] = ((void*)0);
 }




 VAR_9->pack_stream_remaining = (unsigned)VAR_7->numPackedStreams;
 VAR_9->pack_stream_index = (unsigned)VAR_7->packIndex;
 VAR_9->folder_outbytes_remaining = FUNC_4(VAR_7);
 VAR_9->uncompressed_buffer_bytes_remaining = 0;




 for (VAR_13 = 0; VAR_13 < VAR_7->numCoders; VAR_13++) {
  switch(VAR_7->coders[VAR_13].codec) {
   case 130:
   case 129:
   case 131: {


    VAR_9->has_encrypted_entries = 1;
    if (VAR_6->entry) {
     FUNC_0(VAR_6->entry, 1);
     FUNC_1(VAR_6->entry, 1);
    }
    FUNC_2(&(VAR_6->archive),
     VAR_0,
     "The %s is encrypted, "
     "but currently not supported", VAR_12);
    return (VAR_1);
   }
   case 128: {
    VAR_15++;
    break;
   }
  }
 }



 if (VAR_9->has_encrypted_entries == VAR_3) {
  VAR_9->has_encrypted_entries = 0;
 }

 if ((VAR_7->numCoders > 2 && !VAR_15) || VAR_15 > 1) {
  FUNC_2(&(VAR_6->archive),
      VAR_0,
      "The %s is encoded with many filters, "
      "but currently not supported", VAR_12);
  return (VAR_1);
 }
 VAR_10 = &(VAR_7->coders[0]);
 if (VAR_7->numCoders == 2)
  VAR_11 = &(VAR_7->coders[1]);
 else
  VAR_11 = ((void*)0);

 if (VAR_15) {





  const struct _7z_coder *VAR_16 = VAR_7->coders;
  static const struct _7z_coder VAR_17 = {0, 1, 1, 0, ((void*)0)};
  const struct _7z_coder *VAR_18[3] =
   {&VAR_17, &VAR_17, &VAR_17};
  const void *VAR_19;
  ssize_t VAR_20;
  unsigned char *VAR_21[3] = {((void*)0), ((void*)0), ((void*)0)};
  uint64_t VAR_22[3] ={-1, -1, -1};
  size_t VAR_23[3] = {0, 0, 0};
  int VAR_24[3] = {0, 1, 2};

  if (VAR_7->numCoders == 4 && VAR_16[3].codec == 128 &&
      VAR_7->numInStreams == 7 && VAR_7->numOutStreams == 4 &&
      VAR_9->pack_stream_remaining == 4) {

   if (VAR_7->bindPairs[0].inIndex == 5) {

    VAR_24[0] = 1; VAR_24[1] = 2; VAR_24[2] = 0;
    VAR_18[1] = &(VAR_16[1]);
    VAR_18[2] = &(VAR_16[0]);
    VAR_22[1] = VAR_7->unPackSize[1];
    VAR_22[2] = VAR_7->unPackSize[0];
    VAR_10 = &(VAR_16[2]);
   } else {
    if (VAR_16[0].codec == VAR_5 &&
        VAR_16[1].codec == VAR_5)
     VAR_10 = &(VAR_7->coders[2]);
    else if (VAR_16[0].codec == VAR_5 &&
        VAR_16[2].codec == VAR_5)
     VAR_10 = &(VAR_7->coders[1]);
    else if (VAR_16[1].codec == VAR_5 &&
        VAR_16[2].codec == VAR_5)
     VAR_10 = &(VAR_7->coders[0]);
    else {
     FUNC_2(&(VAR_6->archive),
         VAR_0,
         "Unsupported form of "
         "BCJ2 streams");
     return (VAR_1);
    }
   }
   VAR_11 = &(VAR_16[3]);
   VAR_9->main_stream_bytes_remaining =
    (size_t)VAR_7->unPackSize[2];
  } else if (VAR_11 != ((void*)0) && VAR_11->codec == 128 &&
      VAR_9->pack_stream_remaining == 4 &&
      VAR_7->numInStreams == 5 && VAR_7->numOutStreams == 2) {

   VAR_9->main_stream_bytes_remaining =
    (size_t)VAR_7->unPackSize[0];
  } else {

   FUNC_2(&(VAR_6->archive),
       VAR_0,
       "Unsupported form of BCJ2 streams");
   return (VAR_1);
  }


  if ((VAR_14 = FUNC_11(VAR_6)) < 0)
   return (VAR_14);
  VAR_9->pack_stream_bytes_unconsumed =
      (size_t)VAR_9->pack_stream_inbytes_remaining;
  FUNC_10(VAR_6);


  for (VAR_13 = 0; VAR_13 < 3; VAR_13++) {
   const struct _7z_coder *VAR_25 = VAR_18[VAR_13];

   if ((VAR_14 = FUNC_11(VAR_6)) < 0) {
    FUNC_5(VAR_21[0]); FUNC_5(VAR_21[1]); FUNC_5(VAR_21[2]);
    return (VAR_14);
   }

   if (VAR_22[VAR_13] == (uint64_t)-1)
    VAR_9->folder_outbytes_remaining =
        VAR_9->pack_stream_inbytes_remaining;
   else
    VAR_9->folder_outbytes_remaining = VAR_22[VAR_13];

   VAR_14 = FUNC_7(VAR_6, VAR_9, VAR_25, ((void*)0));
   if (VAR_14 != VAR_2) {
    FUNC_5(VAR_21[0]); FUNC_5(VAR_21[1]); FUNC_5(VAR_21[2]);
    return (VAR_1);
   }



   VAR_21[VAR_13] = FUNC_8((size_t)VAR_9->folder_outbytes_remaining);
   if (VAR_21[VAR_13] == ((void*)0)) {
    FUNC_5(VAR_21[0]); FUNC_5(VAR_21[1]); FUNC_5(VAR_21[2]);
    FUNC_2(&VAR_6->archive, VAR_4,
        "No memory for 7-Zip decompression");
    return (VAR_1);
   }


   while (VAR_9->pack_stream_inbytes_remaining > 0) {
    VAR_14 = (int)FUNC_3(VAR_6, 0);
    if (VAR_14 < 0) {
     FUNC_5(VAR_21[0]); FUNC_5(VAR_21[1]); FUNC_5(VAR_21[2]);
     return (VAR_14);
    }
    VAR_20 = FUNC_6(VAR_6, &VAR_19,
        VAR_9->uncompressed_buffer_bytes_remaining,
        0);
    if (VAR_20 < 0) {
     FUNC_5(VAR_21[0]); FUNC_5(VAR_21[1]); FUNC_5(VAR_21[2]);
     return ((int)VAR_20);
    }
    FUNC_9(VAR_21[VAR_13]+VAR_23[VAR_13], VAR_19, VAR_20);
    VAR_23[VAR_13] += VAR_20;
    if (VAR_9->pack_stream_bytes_unconsumed)
     FUNC_10(VAR_6);
   }
  }


  for (VAR_13 = 0; VAR_13 < 3; VAR_13++) {
   VAR_9->sub_stream_buff[VAR_13] = VAR_21[VAR_24[VAR_13]];
   VAR_9->sub_stream_size[VAR_13] = VAR_23[VAR_24[VAR_13]];
   VAR_9->sub_stream_bytes_remaining[VAR_13] = VAR_23[VAR_24[VAR_13]];
  }


  if (VAR_9->tmp_stream_buff == ((void*)0)) {
   VAR_9->tmp_stream_buff_size = 32 * 1024;
   VAR_9->tmp_stream_buff =
       FUNC_8(VAR_9->tmp_stream_buff_size);
   if (VAR_9->tmp_stream_buff == ((void*)0)) {
    FUNC_2(&VAR_6->archive, VAR_4,
        "No memory for 7-Zip decompression");
    return (VAR_1);
   }
  }
  VAR_9->tmp_stream_bytes_avail = 0;
  VAR_9->tmp_stream_bytes_remaining = 0;
  VAR_9->odd_bcj_size = 0;
  VAR_9->bcj2_outPos = 0;





  VAR_9->pack_stream_remaining = 1;
  VAR_9->pack_stream_index = (unsigned)VAR_7->packIndex;
  VAR_9->folder_outbytes_remaining =
      FUNC_4(VAR_7);
  VAR_9->uncompressed_buffer_bytes_remaining = 0;
 }




 VAR_14 = FUNC_7(VAR_6, VAR_9, VAR_10, VAR_11);
 if (VAR_14 != VAR_2)
  return (VAR_1);
 return (VAR_2);
}
