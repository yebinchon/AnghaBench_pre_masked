
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int time_t ;
struct TYPE_4__ {scalar_t__ split_before; } ;
struct TYPE_5__ {int method; int version; int block_parsing_finished; int all_filters_applied; scalar_t__ initialized; int switch_multivolume; scalar_t__ window_size; } ;
struct TYPE_6__ {size_t bytes_remaining; scalar_t__ dir; int solid; scalar_t__ redir_type; scalar_t__ stored_crc32; scalar_t__ unpacked_size; scalar_t__ service; } ;
struct rar5 {TYPE_1__ generic; TYPE_2__ cstate; TYPE_3__ file; } ;
struct archive_read {int archive; } ;
struct archive_entry {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int __LA_MODE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*,char*) ;
 int FUNC_2 (struct archive_entry*,int) ;
 int FUNC_3 (struct archive_entry*,int ,int ) ;
 int FUNC_4 (struct archive_entry*,int) ;
 int FUNC_5 (struct archive_entry*,char*) ;
 int FUNC_6 (int *,int ,char*,...) ;
 int FUNC_7 (struct archive_read*,size_t) ;
 int FUNC_8 (char*) ;
 size_t VAR_13 ;
 int FUNC_9 (struct rar5*) ;
 char* FUNC_10 (int) ;
 int FUNC_11 (char*,scalar_t__ const*,size_t) ;
 int FUNC_12 (struct archive_read*,struct archive_entry*,struct rar5*,scalar_t__) ;
 int FUNC_13 (struct archive_read*,size_t,scalar_t__ const**) ;
 int FUNC_14 (struct archive_read*,scalar_t__*) ;
 int FUNC_15 (struct archive_read*,int*,int *) ;
 int FUNC_16 (struct archive_read*,size_t*,int *) ;
 int FUNC_17 (struct rar5*) ;
 int FUNC_18 (char*,char*) ;

__attribute__((used)) static int FUNC_19(struct archive_read* VAR_14, struct rar5* VAR_15,
    struct archive_entry* VAR_16, size_t VAR_17)
{
 ssize_t VAR_18 = 0;
 size_t VAR_19 = 0;
 size_t VAR_20 = 0;
 size_t VAR_21 = 0;
 size_t VAR_22 = 0;
 size_t VAR_23 = 0;
 size_t VAR_24 = 0;
 uint64_t VAR_25, VAR_26;
 uint32_t VAR_27 = 0, VAR_28 = 0;
 int VAR_29 = 0, VAR_30 = 0;
 char VAR_31[VAR_10];
 const uint8_t* VAR_32;

 FUNC_0(VAR_16);


 if(!VAR_15->cstate.switch_multivolume) {
  FUNC_17(VAR_15);
 }

 if(VAR_17 & VAR_9) {
  size_t VAR_33 = 0;
  if(!FUNC_16(VAR_14, &VAR_33, ((void*)0)))
   return VAR_2;


  VAR_18 = (ssize_t) VAR_33;
 }

 if(VAR_17 & VAR_8) {
  if(!FUNC_16(VAR_14, &VAR_19, ((void*)0)))
   return VAR_2;

  VAR_15->file.bytes_remaining = VAR_19;
 } else {
  VAR_15->file.bytes_remaining = 0;

  FUNC_6(&VAR_14->archive, VAR_3,
    "no data found in file/service block");
  return VAR_5;
 }

 enum FILE_FLAGS {
  DIRECTORY = 0x0001, UTIME = 0x0002, CRC32 = 0x0004,
  UNKNOWN_UNPACKED_SIZE = 0x0008,
 };

 enum FILE_ATTRS {
  ATTR_READONLY = 0x1, ATTR_HIDDEN = 0x2, ATTR_SYSTEM = 0x4,
  ATTR_DIRECTORY = 0x10,
 };

 enum COMP_INFO_FLAGS {
  SOLID = 0x0040,
 };

 if(!FUNC_16(VAR_14, &VAR_20, ((void*)0)))
  return VAR_2;

 if(!FUNC_15(VAR_14, &VAR_25, ((void*)0)))
  return VAR_2;

 if(VAR_20 & UNKNOWN_UNPACKED_SIZE) {
  FUNC_6(&VAR_14->archive, VAR_4,
      "Files with unknown unpacked size are not supported");
  return VAR_5;
 }

 VAR_15->file.dir = (uint8_t) ((VAR_20 & DIRECTORY) > 0);

 if(!FUNC_16(VAR_14, &VAR_21, ((void*)0)))
  return VAR_2;

 if(VAR_20 & UTIME) {
  if(!FUNC_14(VAR_14, &VAR_27))
   return VAR_2;
 }

 if(VAR_20 & CRC32) {
  if(!FUNC_14(VAR_14, &VAR_28))
   return VAR_2;
 }

 if(!FUNC_16(VAR_14, &VAR_22, ((void*)0)))
  return VAR_2;

 VAR_29 = (int) (VAR_22 >> 7) & 0x7;
 VAR_30 = (int) (VAR_22 & 0x3f);


 VAR_26 = (VAR_15->file.dir > 0) ?
  0 :
  VAR_13 << ((VAR_22 >> 10) & 15);
 VAR_15->cstate.method = VAR_29;
 VAR_15->cstate.version = VAR_30 + 50;



 if(VAR_26 > (64 * 1024 * 1024) ||
     (VAR_15->file.dir == 0 && VAR_26 == 0))
 {
  FUNC_6(&VAR_14->archive, VAR_3,
      "Declared dictionary size is not supported.");
  return VAR_5;
 }



 VAR_15->cstate.window_size = (ssize_t) VAR_26;
 FUNC_9(VAR_15);

 VAR_15->file.solid = (VAR_22 & SOLID) > 0;
 VAR_15->file.service = 0;

 if(!FUNC_16(VAR_14, &VAR_23, ((void*)0)))
  return VAR_2;

 enum HOST_OS {
  HOST_WINDOWS = 0,
  HOST_UNIX = 1,
 };

 if(VAR_23 == HOST_WINDOWS) {


  __LA_MODE_T VAR_34;

  if(VAR_21 & ATTR_DIRECTORY) {
   if (VAR_21 & ATTR_READONLY) {
    VAR_34 = 0555 | VAR_0;
   } else {
    VAR_34 = 0755 | VAR_0;
   }
  } else {
   if (VAR_21 & ATTR_READONLY) {
    VAR_34 = 0444 | VAR_1;
   } else {
    VAR_34 = 0644 | VAR_1;
   }
  }

  FUNC_2(VAR_16, VAR_34);

  if (VAR_21 & (ATTR_READONLY | ATTR_HIDDEN | ATTR_SYSTEM)) {
   char *VAR_35, *VAR_36;

   VAR_35 = FUNC_10(22 * sizeof(char));
   if (VAR_35 != ((void*)0)) {
    VAR_36 = VAR_35;
    if (VAR_21 & ATTR_READONLY) {
     FUNC_18(VAR_36, "rdonly,");
     VAR_36 = VAR_36 + 7;
    }
    if (VAR_21 & ATTR_HIDDEN) {
     FUNC_18(VAR_36, "hidden,");
     VAR_36 = VAR_36 + 7;
    }
    if (VAR_21 & ATTR_SYSTEM) {
     FUNC_18(VAR_36, "system,");
     VAR_36 = VAR_36 + 7;
    }
    if (VAR_36 > VAR_35) {

     *(VAR_36 - 1) = '\0';
     FUNC_1(VAR_16,
         VAR_35);
    }
    FUNC_8(VAR_35);
   }
  }
 } else if(VAR_23 == HOST_UNIX) {

  FUNC_2(VAR_16, (__LA_MODE_T) VAR_21);
 } else {

  FUNC_6(&VAR_14->archive, VAR_3,
    "Unsupported Host OS: 0x%x", (int) VAR_23);

  return VAR_5;
 }

 if(!FUNC_16(VAR_14, &VAR_24, ((void*)0)))
  return VAR_2;

 if(!FUNC_13(VAR_14, VAR_24, &VAR_32))
  return VAR_2;

 if(VAR_24 > (VAR_11 - 1)) {
  FUNC_6(&VAR_14->archive, VAR_3,
    "Filename is too long");

  return VAR_5;
 }

 if(VAR_24 == 0) {
  FUNC_6(&VAR_14->archive, VAR_3,
    "No filename specified");

  return VAR_5;
 }

 FUNC_11(VAR_31, VAR_32, VAR_24);
 VAR_31[VAR_24] = 0;
 if(VAR_6 != FUNC_7(VAR_14, VAR_24)) {
  return VAR_2;
 }

 FUNC_5(VAR_16, VAR_31);

 if(VAR_18 > 0) {
  int VAR_37 = FUNC_12(VAR_14, VAR_16, VAR_15,
      VAR_18);


  if(VAR_18 < 0) {
   FUNC_6(&VAR_14->archive, VAR_4,
       "File extra data size is not zero");
   return VAR_5;
  }

  if(VAR_37 != VAR_6)
   return VAR_37;
 }

 if((VAR_20 & UNKNOWN_UNPACKED_SIZE) == 0) {
  VAR_15->file.unpacked_size = (ssize_t) VAR_25;
  if(VAR_15->file.redir_type == VAR_12)
   FUNC_4(VAR_16, VAR_25);
 }

 if(VAR_20 & UTIME) {
  FUNC_3(VAR_16, (time_t) VAR_27, 0);
 }

 if(VAR_20 & CRC32) {
  VAR_15->file.stored_crc32 = VAR_28;
 }

 if(!VAR_15->cstate.switch_multivolume) {


  VAR_15->cstate.block_parsing_finished = 1;
  VAR_15->cstate.all_filters_applied = 1;
  VAR_15->cstate.initialized = 0;
 }

 if(VAR_15->generic.split_before > 0) {






  return VAR_7;
 } else {
  return VAR_6;
 }
}
