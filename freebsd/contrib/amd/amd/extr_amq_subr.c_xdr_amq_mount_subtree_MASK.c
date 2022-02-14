
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ voidp ;
typedef int bool_t ;
typedef int amq_mount_tree ;
struct TYPE_2__ {int am_child; int am_osib; } ;
typedef TYPE_1__ am_node ;
typedef int XDRPROC_T_TYPE ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char**,int,int ) ;

bool_t
FUNC_2(XDR *VAR_2, amq_mount_tree *VAR_3)
{
  am_node *VAR_4 = (am_node *) VAR_3;

  if (!FUNC_0(VAR_2, VAR_3)) {
    return (VAR_0);
  }
  if (!FUNC_1(VAR_2,
     (char **) ((voidp) &VAR_4->am_osib),
     sizeof(amq_mount_tree),
     (XDRPROC_T_TYPE) FUNC_2)) {
    return (VAR_0);
  }
  if (!FUNC_1(VAR_2,
     (char **) ((voidp) &VAR_4->am_child),
     sizeof(amq_mount_tree),
     (XDRPROC_T_TYPE) FUNC_2)) {
    return (VAR_0);
  }
  return (VAR_1);
}
