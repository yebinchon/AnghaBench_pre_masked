
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpio {scalar_t__ entry_padding; scalar_t__ entry_bytes_remaining; } ;
struct TYPE_2__ {scalar_t__ archive_format; char* archive_format_name; } ;
struct archive_read {TYPE_1__ archive; } ;
struct archive_entry {int dummy; } ;
typedef int mode_t ;
typedef int dev_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct archive_read*,int ,int *) ;
 int FUNC_1 (struct archive_read*,int ) ;
 int FUNC_2 (struct archive_entry*,int ) ;
 int FUNC_3 (struct archive_entry*,scalar_t__) ;
 int FUNC_4 (struct archive_entry*,scalar_t__) ;
 int FUNC_5 (struct archive_entry*,int ) ;
 int FUNC_6 (struct archive_entry*,scalar_t__,int ) ;
 int FUNC_7 (struct archive_entry*,unsigned int) ;
 int FUNC_8 (struct archive_entry*,int ) ;
 int FUNC_9 (struct archive_entry*,scalar_t__) ;
 int FUNC_10 (struct archive_entry*,scalar_t__) ;
 scalar_t__ FUNC_11 (char const*,int ) ;
 int FUNC_12 (struct archive_read*) ;
 int FUNC_13 (struct archive_read*,struct cpio*,struct archive_entry*,size_t*,size_t*) ;
 int VAR_5 ;
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

__attribute__((used)) static int
FUNC_14(struct archive_read *VAR_26, struct cpio *VAR_27,
    struct archive_entry *VAR_28, size_t *VAR_29, size_t *VAR_30)
{
 const void *VAR_31;
 int VAR_32;
 const char *VAR_33;

 VAR_26->archive.archive_format = VAR_2;
 VAR_26->archive.archive_format_name = "POSIX octet-oriented cpio";


 VAR_32 = FUNC_12(VAR_26);
 if (VAR_32 < VAR_4)
  return (VAR_32);

 if (VAR_26->archive.archive_format == VAR_1) {
  int VAR_34 = (FUNC_13(VAR_26, VAR_27, VAR_28, VAR_29, VAR_30));
  if (VAR_34 == VAR_3)
   return (VAR_32);
  else
   return (VAR_34);
 }


 VAR_31 = FUNC_0(VAR_26, VAR_11, ((void*)0));
 if (VAR_31 == ((void*)0))
     return (VAR_0);


 VAR_33 = (const char *)VAR_31;

 FUNC_2(VAR_28,
  (dev_t)FUNC_11(VAR_33 + VAR_5, VAR_6));
 FUNC_4(VAR_28, FUNC_11(VAR_33 + VAR_12, VAR_13));
 FUNC_5(VAR_28,
  (mode_t)FUNC_11(VAR_33 + VAR_14, VAR_15));
 FUNC_10(VAR_28, FUNC_11(VAR_33 + VAR_24, VAR_25));
 FUNC_3(VAR_28, FUNC_11(VAR_33 + VAR_9, VAR_10));
 FUNC_7(VAR_28,
  (unsigned int)FUNC_11(VAR_33 + VAR_20, VAR_21));
 FUNC_8(VAR_28,
  (dev_t)FUNC_11(VAR_33 + VAR_22, VAR_23));
 FUNC_6(VAR_28, FUNC_11(VAR_33 + VAR_16, VAR_17), 0);
 *VAR_29 = (size_t)FUNC_11(VAR_33 + VAR_18, VAR_19);
 *VAR_30 = 0;






 VAR_27->entry_bytes_remaining =
     FUNC_11(VAR_33 + VAR_7, VAR_8);
 FUNC_9(VAR_28, VAR_27->entry_bytes_remaining);
 VAR_27->entry_padding = 0;
 FUNC_1(VAR_26, VAR_11);
 return (VAR_32);
}
