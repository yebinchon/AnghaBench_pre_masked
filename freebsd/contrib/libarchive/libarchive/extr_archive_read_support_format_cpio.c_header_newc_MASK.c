
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpio {int entry_bytes_remaining; int entry_padding; } ;
struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_read {TYPE_1__ archive; } ;
struct archive_entry {int dummy; } ;
typedef int mode_t ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 void* FUNC_0 (struct archive_read*,int ,int *) ;
 int FUNC_1 (struct archive_read*,int ) ;
 int FUNC_2 (struct archive_entry*,int ) ;
 int FUNC_3 (struct archive_entry*,int ) ;
 int FUNC_4 (struct archive_entry*,int) ;
 int FUNC_5 (struct archive_entry*,int) ;
 int FUNC_6 (struct archive_entry*,int ) ;
 int FUNC_7 (struct archive_entry*,int,int ) ;
 int FUNC_8 (struct archive_entry*,unsigned int) ;
 int FUNC_9 (struct archive_entry*,int ) ;
 int FUNC_10 (struct archive_entry*,int ) ;
 int FUNC_11 (struct archive_entry*,int) ;
 int FUNC_12 (struct archive_entry*,int) ;
 int FUNC_13 (TYPE_1__*,int ,char*) ;
 int FUNC_14 (char const*,int ) ;
 int FUNC_15 (struct archive_read*) ;
 scalar_t__ FUNC_16 (char const*,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;

__attribute__((used)) static int
FUNC_17(struct archive_read *VAR_32, struct cpio *VAR_33,
    struct archive_entry *VAR_34, size_t *VAR_35, size_t *VAR_36)
{
 const void *VAR_37;
 const char *VAR_38;
 int VAR_39;

 VAR_39 = FUNC_15(VAR_32);
 if (VAR_39 < VAR_4)
  return (VAR_39);


 VAR_37 = FUNC_0(VAR_32, VAR_14, ((void*)0));
 if (VAR_37 == ((void*)0))
     return (VAR_1);


 VAR_38 = (const char *)VAR_37;

 if (FUNC_16(VAR_38 + VAR_17, "070701", 6) == 0) {
  VAR_32->archive.archive_format = VAR_3;
  VAR_32->archive.archive_format_name = "ASCII cpio (SVR4 with no CRC)";
 } else if (FUNC_16(VAR_38 + VAR_17, "070702", 6) == 0) {
  VAR_32->archive.archive_format = VAR_2;
  VAR_32->archive.archive_format_name = "ASCII cpio (SVR4 with CRC)";
 } else {

 }

 FUNC_2(VAR_34,
  (dev_t)FUNC_14(VAR_38 + VAR_6, VAR_7));
 FUNC_3(VAR_34,
  (dev_t)FUNC_14(VAR_38 + VAR_8, VAR_9));
 FUNC_5(VAR_34, FUNC_14(VAR_38 + VAR_15, VAR_16));
 FUNC_6(VAR_34,
  (mode_t)FUNC_14(VAR_38 + VAR_18, VAR_19));
 FUNC_12(VAR_34, FUNC_14(VAR_38 + VAR_30, VAR_31));
 FUNC_4(VAR_34, FUNC_14(VAR_38 + VAR_12, VAR_13));
 FUNC_8(VAR_34,
  (unsigned int)FUNC_14(VAR_38 + VAR_24, VAR_25));
 FUNC_9(VAR_34,
  (dev_t)FUNC_14(VAR_38 + VAR_26, VAR_27));
 FUNC_10(VAR_34,
  (dev_t)FUNC_14(VAR_38 + VAR_28, VAR_29));
 FUNC_7(VAR_34, FUNC_14(VAR_38 + VAR_20, VAR_21), 0);
 *VAR_35 = (size_t)FUNC_14(VAR_38 + VAR_22, VAR_23);

 *VAR_36 = (2 - *VAR_35) & 3;


 if (*VAR_36 > VAR_5 - *VAR_35) {
  FUNC_13(&VAR_32->archive, VAR_0,
      "cpio archive has invalid namelength");
  return (VAR_1);
 }






 VAR_33->entry_bytes_remaining =
     FUNC_14(VAR_38 + VAR_10, VAR_11);
 FUNC_11(VAR_34, VAR_33->entry_bytes_remaining);

 VAR_33->entry_padding = 3 & -VAR_33->entry_bytes_remaining;
 FUNC_1(VAR_32, VAR_14);
 return (VAR_39);
}
