
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ voidp ;
typedef int bool_t ;
struct TYPE_3__ {int mt_child; int mt_next; int mt_statfs; int mt_readlink; int mt_readdir; int mt_lookup; int mt_getattr; int mt_mountuid; int mt_mounttime; int mt_type; int mt_mountpoint; int mt_directory; int mt_mountinfo; } ;
typedef TYPE_1__ amq_mount_tree ;
typedef int XDRPROC_T_TYPE ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char**,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

bool_t
FUNC_5(XDR *VAR_2, amq_mount_tree *VAR_3)
{

  if (!FUNC_0(VAR_2, &VAR_3->mt_mountinfo)) {
    return (VAR_0);
  }

  if (!FUNC_0(VAR_2, &VAR_3->mt_directory)) {
    return (VAR_0);
  }

  if (!FUNC_0(VAR_2, &VAR_3->mt_mountpoint)) {
    return (VAR_0);
  }

  if (!FUNC_0(VAR_2, &VAR_3->mt_type)) {
    return (VAR_0);
  }

  if (!FUNC_3(VAR_2, &VAR_3->mt_mounttime)) {
    return (VAR_0);
  }

  if (!FUNC_4(VAR_2, &VAR_3->mt_mountuid)) {
    return (VAR_0);
  }

  if (!FUNC_1(VAR_2, &VAR_3->mt_getattr)) {
    return (VAR_0);
  }

  if (!FUNC_1(VAR_2, &VAR_3->mt_lookup)) {
    return (VAR_0);
  }

  if (!FUNC_1(VAR_2, &VAR_3->mt_readdir)) {
    return (VAR_0);
  }

  if (!FUNC_1(VAR_2, &VAR_3->mt_readlink)) {
    return (VAR_0);
  }

  if (!FUNC_1(VAR_2, &VAR_3->mt_statfs)) {
    return (VAR_0);
  }

  if (!FUNC_2(VAR_2,
     (char **) ((voidp) &VAR_3->mt_next),
     sizeof(amq_mount_tree),
     (XDRPROC_T_TYPE) FUNC_5)) {
    return (VAR_0);
  }

  if (!FUNC_2(VAR_2,
     (char **) ((voidp) &VAR_3->mt_child),
     sizeof(amq_mount_tree),
     (XDRPROC_T_TYPE) FUNC_5)) {
    return (VAR_0);
  }

  return (VAR_1);
}
