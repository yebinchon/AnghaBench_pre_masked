
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct destroydata {char* snapname; int nvl; } ;
typedef int name ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int (*) (TYPE_1__*,void*),struct destroydata*) ;

__attribute__((used)) static int
FUNC_6(zfs_handle_t *VAR_1, void *VAR_2)
{
 struct destroydata *VAR_3 = VAR_2;
 char VAR_4[VAR_0];
 int VAR_5 = 0;

 (void) FUNC_2(VAR_4, sizeof (VAR_4),
     "%s@%s", VAR_1->zfs_name, VAR_3->snapname);

 if (FUNC_0(VAR_4))
  FUNC_3(FUNC_1(VAR_3->nvl, VAR_4) == 0);

 VAR_5 = FUNC_5(VAR_1, FUNC_6, VAR_3);
 FUNC_4(VAR_1);
 return (VAR_5);
}
