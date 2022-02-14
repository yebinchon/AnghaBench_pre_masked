
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(zfs_cmd_t *VAR_0)
{
 int VAR_1;
 FUNC_1(VAR_0);
 VAR_1 = FUNC_0(VAR_0->zc_name);
 if (VAR_1 == 0)
  FUNC_2(VAR_0->zc_name);
 return (VAR_1);
}
