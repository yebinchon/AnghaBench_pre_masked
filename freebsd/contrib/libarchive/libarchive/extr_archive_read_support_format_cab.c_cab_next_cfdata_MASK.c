
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cfdata {scalar_t__ uncompressed_bytes_remaining; int compressed_size; int compressed_bytes_remaining; scalar_t__ uncompressed_size; size_t memimage_size; int * memimage; scalar_t__ unconsumed; scalar_t__ read_offset; scalar_t__ uncompressed_avail; int sum; int * sum_ptr; scalar_t__ sum_extra_avail; scalar_t__ sum_calculated; } ;
struct TYPE_6__ {int flags; scalar_t__ cfdata; int folder_count; } ;
struct cab {scalar_t__ cab_offset; struct cfdata* entry_cfdata; TYPE_4__* entry_cffolder; TYPE_3__* entry_cffile; TYPE_2__ cfheader; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
typedef int intmax_t ;
typedef scalar_t__ int64_t ;
struct TYPE_8__ {scalar_t__ cfdata_index; scalar_t__ cfdata_offset_in_cab; scalar_t__ cfdata_count; scalar_t__ comptype; struct cfdata cfdata; } ;
struct TYPE_7__ {int folder; } ;
struct TYPE_5__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned char* FUNC_0 (struct archive_read*,int,int *) ;
 scalar_t__ FUNC_1 (struct archive_read*,int) ;
 void* FUNC_2 (unsigned char const*) ;
 int FUNC_3 (unsigned char const*) ;
 int FUNC_4 (int *,int ,char*,...) ;
 int FUNC_5 (int *) ;



 int * FUNC_6 (int) ;
 int FUNC_7 (int *,unsigned char const*,int) ;
 int FUNC_8 (struct cfdata*,int ,int) ;
 int FUNC_9 (struct archive_read*) ;

__attribute__((used)) static int
FUNC_10(struct archive_read *VAR_10)
{
 struct cab *VAR_11 = (struct cab *)(VAR_10->format->data);
 struct cfdata *VAR_12 = VAR_11->entry_cfdata;


 if (VAR_12 != ((void*)0) && VAR_12->uncompressed_bytes_remaining > 0)
  return (VAR_3);

 if (VAR_12 == ((void*)0)) {
  int64_t VAR_13;

  VAR_11->entry_cffolder->cfdata_index = 0;


  VAR_13 = VAR_11->entry_cffolder->cfdata_offset_in_cab
   - VAR_11->cab_offset;
  if (VAR_13 < 0) {
   int VAR_14;
   switch (VAR_11->entry_cffile->folder) {
   case 130:
   case 129:
    VAR_14 = 0;
    break;
   case 128:
    VAR_14 = VAR_11->cfheader.folder_count-1;
    break;
   default:
    VAR_14 = VAR_11->entry_cffile->folder;
    break;
   }
   FUNC_4(&VAR_10->archive, VAR_1,
       "Invalid offset of CFDATA in folder(%d) %jd < %jd",
       VAR_14,
       (intmax_t)VAR_11->entry_cffolder->cfdata_offset_in_cab,
       (intmax_t)VAR_11->cab_offset);
   return (VAR_2);
  }
  if (VAR_13 > 0) {
   if (FUNC_1(VAR_10, VAR_13) < 0)
    return (VAR_2);
   VAR_11->cab_offset =
       VAR_11->entry_cffolder->cfdata_offset_in_cab;
  }
 }




 if (VAR_11->entry_cffolder->cfdata_index <
     VAR_11->entry_cffolder->cfdata_count) {
  const unsigned char *VAR_15;
  int VAR_16;

  VAR_12 = &(VAR_11->entry_cffolder->cfdata);
  VAR_11->entry_cffolder->cfdata_index++;
  VAR_11->entry_cfdata = VAR_12;
  VAR_12->sum_calculated = 0;
  VAR_12->sum_extra_avail = 0;
  VAR_12->sum_ptr = ((void*)0);
  VAR_16 = 8;
  if (VAR_11->cfheader.flags & VAR_9)
   VAR_16 += VAR_11->cfheader.cfdata;
  if ((VAR_15 = FUNC_0(VAR_10, VAR_16, ((void*)0))) == ((void*)0))
   return (FUNC_9(VAR_10));
  VAR_12->sum = FUNC_3(VAR_15 + VAR_6);
  VAR_12->compressed_size = FUNC_2(VAR_15 + VAR_4);
  VAR_12->compressed_bytes_remaining = VAR_12->compressed_size;
  VAR_12->uncompressed_size =
      FUNC_2(VAR_15 + VAR_5);
  VAR_12->uncompressed_bytes_remaining =
      VAR_12->uncompressed_size;
  VAR_12->uncompressed_avail = 0;
  VAR_12->read_offset = 0;
  VAR_12->unconsumed = 0;




  if (VAR_12->compressed_size == 0 ||
      VAR_12->compressed_size > (0x8000+6144))
   goto invalid;
  if (VAR_12->uncompressed_size > 0x8000)
   goto invalid;
  if (VAR_12->uncompressed_size == 0) {
   switch (VAR_11->entry_cffile->folder) {
   case 129:
   case 128:
    break;
   case 130:
   default:
    goto invalid;
   }
  }


  if ((VAR_11->entry_cffolder->cfdata_index <
       VAR_11->entry_cffolder->cfdata_count) &&
         VAR_12->uncompressed_size != 0x8000)
   goto invalid;



  if (VAR_11->entry_cffolder->comptype == VAR_7 &&
      VAR_12->compressed_size != VAR_12->uncompressed_size)
   goto invalid;




  if (VAR_12->memimage_size < (size_t)VAR_16) {
   FUNC_5(VAR_12->memimage);
   VAR_12->memimage = FUNC_6(VAR_16);
   if (VAR_12->memimage == ((void*)0)) {
    FUNC_4(&VAR_10->archive, VAR_8,
        "Can't allocate memory for CAB data");
    return (VAR_2);
   }
   VAR_12->memimage_size = VAR_16;
  }
  FUNC_7(VAR_12->memimage, VAR_15, VAR_16);


  FUNC_1(VAR_10, VAR_16);
  VAR_11->cab_offset += VAR_16;
 } else if (VAR_11->entry_cffolder->cfdata_count > 0) {

  VAR_12->compressed_size = 0;
  VAR_12->uncompressed_size = 0;
  VAR_12->compressed_bytes_remaining = 0;
  VAR_12->uncompressed_bytes_remaining = 0;
 } else {

  VAR_12 = &(VAR_11->entry_cffolder->cfdata);
  VAR_11->entry_cfdata = VAR_12;
  FUNC_8(VAR_12, 0, sizeof(*VAR_12));
 }
 return (VAR_3);
invalid:
 FUNC_4(&VAR_10->archive, VAR_0,
     "Invalid CFDATA");
 return (VAR_2);
}
