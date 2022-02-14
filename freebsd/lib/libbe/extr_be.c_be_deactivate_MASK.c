
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_3__ {int lzh; } ;
typedef TYPE_1__ libbe_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char const*,int ) ;
 scalar_t__ FUNC_2 (int *,char*,char*) ;

__attribute__((used)) static int
FUNC_3(libbe_handle_t *VAR_1, const char *VAR_2)
{
 zfs_handle_t *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_1->lzh, VAR_2, VAR_0)) == ((void*)0))
  return (1);
 if (FUNC_2(VAR_3, "canmount", "noauto") != 0)
  return (1);
 FUNC_0(VAR_3);
 return (0);
}
