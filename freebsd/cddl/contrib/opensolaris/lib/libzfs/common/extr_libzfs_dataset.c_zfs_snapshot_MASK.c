
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_3__ {char* sd_snapname; int sd_nvl; int member_0; } ;
typedef TYPE_1__ snapdata_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int fsname ;
typedef int errbuf ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,char const*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,char*,int) ;
 int FUNC_12 (int ,TYPE_1__*) ;
 int FUNC_13 (int *,int ,int *) ;
 int FUNC_14 (int *,char const*,int ,int ) ;

int
FUNC_15(libzfs_handle_t *VAR_8, const char *VAR_9, boolean_t VAR_10,
    nvlist_t *VAR_11)
{
 int VAR_12;
 snapdata_t VAR_13 = { 0 };
 char VAR_14[VAR_4];
 char *VAR_15;
 zfs_handle_t *VAR_16;
 char VAR_17[1024];

 (void) FUNC_4(VAR_17, sizeof (VAR_17), FUNC_0(VAR_3,
     "cannot snapshot %s"), VAR_9);

 if (!FUNC_14(VAR_8, VAR_9, VAR_6, VAR_0))
  return (FUNC_9(VAR_8, VAR_1, VAR_17));

 (void) FUNC_6(VAR_14, VAR_9, sizeof (VAR_14));
 VAR_15 = FUNC_5(VAR_14, '@');
 *VAR_15 = '\0';
 VAR_13.sd_snapname = VAR_15 + 1;

 if ((VAR_16 = FUNC_11(VAR_8, VAR_14, VAR_5 |
     VAR_7)) == ((void*)0)) {
  return (-1);
 }

 FUNC_7(FUNC_2(&VAR_13.sd_nvl, VAR_2, 0) == 0);
 if (VAR_10) {
  (void) FUNC_12(FUNC_10(VAR_16), &VAR_13);
 } else {
  FUNC_1(VAR_13.sd_nvl, VAR_9);
 }

 VAR_12 = FUNC_13(VAR_8, VAR_13.sd_nvl, VAR_11);
 FUNC_3(VAR_13.sd_nvl);
 FUNC_8(VAR_16);
 return (VAR_12);
}
