
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * first; int ** last; } ;
struct TYPE_3__ {int * first; int ** last; } ;
struct iso9660 {int opt_support_joliet; int opt_support_rockridge; TYPE_2__ re_files; TYPE_1__ cache_files; int magic; } ;
struct archive_read {int archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct archive_read*,struct iso9660*,char*,int ,int ,int ,int ,int ,int *,int ,int *,int *) ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,int ,char*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct iso9660*) ;

int
FUNC_5(struct archive *VAR_12)
{
 struct archive_read *VAR_13 = (struct archive_read *)VAR_12;
 struct iso9660 *VAR_14;
 int VAR_15;

 FUNC_1(VAR_12, VAR_2,
     VAR_3, "archive_read_support_format_iso9660");

 VAR_14 = (struct iso9660 *)FUNC_3(1, sizeof(*VAR_14));
 if (VAR_14 == ((void*)0)) {
  FUNC_2(&VAR_13->archive, VAR_4,
      "Can't allocate iso9660 data");
  return (VAR_0);
 }
 VAR_14->magic = VAR_5;
 VAR_14->cache_files.first = ((void*)0);
 VAR_14->cache_files.last = &(VAR_14->cache_files.first);
 VAR_14->re_files.first = ((void*)0);
 VAR_14->re_files.last = &(VAR_14->re_files.first);

 VAR_14->opt_support_joliet = 1;

 VAR_14->opt_support_rockridge = 1;

 VAR_15 = FUNC_0(VAR_13,
     VAR_14,
     "iso9660",
     VAR_6,
     VAR_8,
     VAR_11,
     VAR_9,
     VAR_10,
     ((void*)0),
     VAR_7,
     ((void*)0),
     ((void*)0));

 if (VAR_15 != VAR_1) {
  FUNC_4(VAR_14);
  return (VAR_15);
 }
 return (VAR_1);
}
