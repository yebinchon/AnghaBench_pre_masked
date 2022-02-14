
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpio {scalar_t__ entry_padding; scalar_t__ entry_bytes_remaining; } ;
struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_read {TYPE_1__ archive; } ;
struct archive_entry {int dummy; } ;
typedef int mode_t ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct archive_read*,int ,int *) ;
 int FUNC_1 (struct archive_read*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
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
 scalar_t__ FUNC_12 (char const*,int ) ;

__attribute__((used)) static int
FUNC_13(struct archive_read *VAR_24, struct cpio *VAR_25,
    struct archive_entry *VAR_26, size_t *VAR_27, size_t *VAR_28)
{
 const void *VAR_29;
 const char *VAR_30;

 VAR_24->archive.archive_format = VAR_1;
 VAR_24->archive.archive_format_name = "afio large ASCII";


 VAR_29 = FUNC_0(VAR_24, VAR_9, ((void*)0));
 if (VAR_29 == ((void*)0))
     return (VAR_0);


 VAR_30 = (const char *)VAR_29;

 FUNC_2(VAR_26,
  (dev_t)FUNC_11(VAR_30 + VAR_3, VAR_4));
 FUNC_4(VAR_26, FUNC_11(VAR_30 + VAR_10, VAR_11));
 FUNC_5(VAR_26,
  (mode_t)FUNC_12(VAR_30 + VAR_12, VAR_13));
 FUNC_10(VAR_26, FUNC_11(VAR_30 + VAR_22, VAR_23));
 FUNC_3(VAR_26, FUNC_11(VAR_30 + VAR_7, VAR_8));
 FUNC_7(VAR_26,
  (unsigned int)FUNC_11(VAR_30 + VAR_18, VAR_19));
 FUNC_8(VAR_26,
  (dev_t)FUNC_11(VAR_30 + VAR_20, VAR_21));
 FUNC_6(VAR_26, FUNC_11(VAR_30 + VAR_14, VAR_15), 0);
 *VAR_27 = (size_t)FUNC_11(VAR_30 + VAR_16, VAR_17);
 *VAR_28 = 0;

 VAR_25->entry_bytes_remaining =
     FUNC_11(VAR_30 + VAR_5, VAR_6);
 FUNC_9(VAR_26, VAR_25->entry_bytes_remaining);
 VAR_25->entry_padding = 0;
 FUNC_1(VAR_24, VAR_9);
 return (VAR_2);
}
