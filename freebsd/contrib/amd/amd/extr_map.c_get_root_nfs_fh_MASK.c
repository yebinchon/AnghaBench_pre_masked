
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int am_node ;
struct TYPE_4__ {int v3; int v2; } ;
typedef TYPE_1__ am_nfs_handle_t ;


 int VAR_0 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char*,char*) ;

am_nfs_handle_t *
FUNC_4(char *VAR_3, am_nfs_handle_t *VAR_4)
{
  am_node *VAR_5 = FUNC_0(VAR_3);
  if (VAR_5) {
    if (VAR_1 == VAR_2)
      FUNC_1(VAR_5, &VAR_4->v2);
    else
      FUNC_2(VAR_5, &VAR_4->v3);
    return VAR_4;
  }




  FUNC_3(VAR_0, "Can't find root filehandle for %s", VAR_3);

  return 0;
}
