
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_3__ {char* sd_snapname; int sd_nvl; } ;
typedef TYPE_1__ snapdata_t ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,char*,char*,char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,int (*) (int *,void*),TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(zfs_handle_t *VAR_2, void *VAR_3)
{
 snapdata_t *VAR_4 = VAR_3;
 char VAR_5[VAR_0];
 int VAR_6 = 0;

 if (FUNC_5(VAR_2, VAR_1) == 0) {
  (void) FUNC_1(VAR_5, sizeof (VAR_5),
      "%s@%s", FUNC_3(VAR_2), VAR_4->sd_snapname);

  FUNC_0(VAR_4->sd_nvl, VAR_5);

  VAR_6 = FUNC_4(VAR_2, FUNC_6, VAR_4);
 }
 FUNC_2(VAR_2);

 return (VAR_6);
}
