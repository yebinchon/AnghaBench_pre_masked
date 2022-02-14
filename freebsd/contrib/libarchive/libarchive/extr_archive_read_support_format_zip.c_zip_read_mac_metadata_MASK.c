
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uInt ;
struct zip_entry {int compression; int uncompressed_size; int compressed_size; scalar_t__ local_header_offset; } ;
struct TYPE_4__ {size_t total_in; unsigned char* next_out; size_t total_out; void* avail_out; void* avail_in; int * next_in; } ;
struct zip {scalar_t__ decompress_init; TYPE_2__ stream; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
struct archive_entry {int dummy; } ;
typedef size_t ssize_t ;
typedef int intmax_t ;
typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ data; } ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 unsigned char* FUNC_0 (struct archive_read*,int,size_t*) ;
 int FUNC_1 (struct archive_read*,size_t) ;
 int FUNC_2 (struct archive_read*,scalar_t__,int ) ;
 int FUNC_3 (struct archive_entry*,unsigned char*,size_t) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 unsigned char* FUNC_9 (size_t) ;
 int FUNC_10 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_11 (struct archive_read*,struct zip*) ;
 size_t FUNC_12 (struct archive_read*,int ) ;

__attribute__((used)) static int
FUNC_13(struct archive_read *VAR_7, struct archive_entry *VAR_8,
    struct zip_entry *VAR_9)
{
 struct zip *VAR_10 = (struct zip *)VAR_7->format->data;
 unsigned char *VAR_11, *VAR_12;
 int64_t VAR_13 = FUNC_4(&VAR_7->archive, 0);
 size_t VAR_14, VAR_15;
 ssize_t VAR_16;
 int VAR_17 = VAR_3, VAR_18;

 switch(VAR_9->compression) {
 case 0:
  if (VAR_9->uncompressed_size != VAR_9->compressed_size) {
   FUNC_5(&VAR_7->archive,
       VAR_0,
       "Malformed OS X metadata entry: "
       "inconsistent size");
   return (VAR_2);
  }



  break;
 default:

  FUNC_5(&VAR_7->archive, VAR_0,
      "Unsupported ZIP compression method (%s)",
      FUNC_6(VAR_9->compression));


  return (VAR_4);
 }

 if (VAR_9->uncompressed_size > (4 * 1024 * 1024)) {
  FUNC_5(&VAR_7->archive, VAR_0,
      "Mac metadata is too large: %jd > 4M bytes",
      (intmax_t)VAR_9->uncompressed_size);
  return (VAR_4);
 }
 if (VAR_9->compressed_size > (4 * 1024 * 1024)) {
  FUNC_5(&VAR_7->archive, VAR_0,
      "Mac metadata is too large: %jd > 4M bytes",
      (intmax_t)VAR_9->compressed_size);
  return (VAR_4);
 }

 VAR_11 = FUNC_9((size_t)VAR_9->uncompressed_size);
 if (VAR_11 == ((void*)0)) {
  FUNC_5(&VAR_7->archive, VAR_5,
      "Can't allocate memory for Mac metadata");
  return (VAR_2);
 }

 if (VAR_13 < VAR_9->local_header_offset)
  FUNC_1(VAR_7, VAR_9->local_header_offset - VAR_13);
 else if (VAR_13 != VAR_9->local_header_offset) {
  FUNC_2(VAR_7, VAR_9->local_header_offset, VAR_6);
 }

 VAR_16 = FUNC_12(VAR_7, 0);
 FUNC_1(VAR_7, VAR_16);

 VAR_14 = (size_t)VAR_9->compressed_size;
 VAR_15 = (size_t)VAR_9->uncompressed_size;
 VAR_12 = VAR_11;
 VAR_18 = 0;
 while (!VAR_18 && VAR_14) {
  const unsigned char *VAR_19;
  ssize_t VAR_20;
  size_t VAR_21;

  VAR_19 = FUNC_0(VAR_7, 1, &VAR_20);
  if (VAR_19 == ((void*)0)) {
   FUNC_5(&VAR_7->archive,
       VAR_0,
       "Truncated ZIP file header");
   VAR_17 = VAR_4;
   goto exit_mac_metadata;
  }
  if ((size_t)VAR_20 > VAR_14)
   VAR_20 = VAR_14;
  switch(VAR_9->compression) {
  case 0:
   if ((size_t)VAR_20 > VAR_15)
    VAR_20 = VAR_15;
   FUNC_10(VAR_12, VAR_19, VAR_20);
   VAR_21 = (size_t)VAR_20;
   VAR_15 -= VAR_21;
   VAR_12 += VAR_21;
   if (VAR_15 == 0)
    VAR_18 = 1;
   break;
  default:
   VAR_21 = 0;
   break;
  }
  FUNC_1(VAR_7, VAR_21);
  VAR_14 -= VAR_21;
 }
 FUNC_3(VAR_8, VAR_11,
     (size_t)VAR_9->uncompressed_size - VAR_15);

exit_mac_metadata:
 FUNC_2(VAR_7, VAR_13, VAR_6);
 VAR_10->decompress_init = 0;
 FUNC_7(VAR_11);
 return (VAR_17);
}
