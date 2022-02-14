
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ voidp ;
typedef int u_int ;
typedef int bool_t ;
typedef int amq_mount_tree_p ;
struct TYPE_3__ {int amq_mount_tree_list_len; int amq_mount_tree_list_val; } ;
typedef TYPE_1__ amq_mount_tree_list ;
typedef int XDRPROC_T_TYPE ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char**,int *,int ,int,int ) ;

bool_t
FUNC_1(XDR *VAR_3, amq_mount_tree_list *VAR_4)
{
  if (!FUNC_0(VAR_3,
   (char **) ((voidp) &VAR_4->amq_mount_tree_list_val),
   (u_int *) &VAR_4->amq_mount_tree_list_len,
   ~0,
   sizeof(amq_mount_tree_p),
   (XDRPROC_T_TYPE) VAR_2)) {
    return (VAR_0);
  }
  return (VAR_1);
}
