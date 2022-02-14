
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ voidp ;
typedef int bool_t ;
typedef int amq_mount_tree ;
struct TYPE_2__ {int am_child; } ;
typedef TYPE_1__ am_node ;
typedef int XDRPROC_T_TYPE ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char**,int,int ) ;

bool_t
FUNC_2(XDR *VAR_3, amq_mount_tree *VAR_4)
{
  am_node *VAR_5 = (am_node *) VAR_4;
  am_node *VAR_6 = ((void*)0);

  if (!FUNC_0(VAR_3, VAR_4)) {
    return (VAR_0);
  }
  if (!FUNC_1(VAR_3,
     (char **) ((voidp) &VAR_6),
     sizeof(amq_mount_tree),
     (XDRPROC_T_TYPE) VAR_2)) {
    return (VAR_0);
  }
  if (!FUNC_1(VAR_3,
     (char **) ((voidp) &VAR_5->am_child),
     sizeof(amq_mount_tree),
     (XDRPROC_T_TYPE) VAR_2)) {
    return (VAR_0);
  }
  return (VAR_1);
}
