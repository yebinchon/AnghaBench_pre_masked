
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_3__ {scalar_t__ sd_recursive; int sd_nvl; int sd_snapname; } ;
typedef TYPE_1__ snap_cbdata_t ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int (*) (int *,void*),TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,int ) ;

__attribute__((used)) static int
FUNC_8(zfs_handle_t *VAR_1, void *VAR_2)
{
 snap_cbdata_t *VAR_3 = VAR_2;
 char *VAR_4;
 int VAR_5 = 0;
 int VAR_6;

 if (VAR_3->sd_recursive &&
     FUNC_7(VAR_1, VAR_0) != 0) {
  FUNC_4(VAR_1);
  return (0);
 }

 VAR_6 = FUNC_0(&VAR_4, "%d@%d", FUNC_5(VAR_1), VAR_3->sd_snapname);
 if (VAR_6 == -1)
  FUNC_3();
 FUNC_1(VAR_3->sd_nvl, VAR_4);
 FUNC_2(VAR_4);

 if (VAR_3->sd_recursive)
  VAR_5 = FUNC_6(VAR_1, FUNC_8, VAR_3);
 FUNC_4(VAR_1);
 return (VAR_5);
}
