
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bool_t ;
typedef int amq_mount_tree ;
struct TYPE_9__ {long s_mtime; int s_statfs; int s_readlink; int s_readdir; int s_lookup; int s_getattr; int s_uid; } ;
struct TYPE_10__ {TYPE_4__ am_stats; TYPE_3__* am_al; scalar_t__ am_link; scalar_t__ am_path; } ;
typedef TYPE_5__ am_node ;
typedef int XDR ;
struct TYPE_8__ {TYPE_2__* al_mnt; } ;
struct TYPE_7__ {TYPE_1__* mf_ops; scalar_t__ mf_mount; scalar_t__ mf_info; } ;
struct TYPE_6__ {scalar_t__ fs_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,long*) ;
 int FUNC_3 (int *,int *) ;

bool_t
FUNC_4(XDR *VAR_2, amq_mount_tree *VAR_3)
{
  am_node *VAR_4 = (am_node *) VAR_3;
  long VAR_5;

  if (!FUNC_0(VAR_2, &VAR_4->am_al->al_mnt->mf_info)) {
    return (VAR_0);
  }
  if (!FUNC_0(VAR_2, &VAR_4->am_path)) {
    return (VAR_0);
  }
  if (!FUNC_0(VAR_2, VAR_4->am_link ? &VAR_4->am_link : &VAR_4->am_al->al_mnt->mf_mount)) {
    return (VAR_0);
  }
  if (!FUNC_0(VAR_2, &VAR_4->am_al->al_mnt->mf_ops->fs_type)) {
    return (VAR_0);
  }
  VAR_5 = VAR_4->am_stats.s_mtime;
  if (!FUNC_2(VAR_2, &VAR_5)) {
    return (VAR_0);
  }
  if (!FUNC_3(VAR_2, &VAR_4->am_stats.s_uid)) {
    return (VAR_0);
  }
  if (!FUNC_1(VAR_2, &VAR_4->am_stats.s_getattr)) {
    return (VAR_0);
  }
  if (!FUNC_1(VAR_2, &VAR_4->am_stats.s_lookup)) {
    return (VAR_0);
  }
  if (!FUNC_1(VAR_2, &VAR_4->am_stats.s_readdir)) {
    return (VAR_0);
  }
  if (!FUNC_1(VAR_2, &VAR_4->am_stats.s_readlink)) {
    return (VAR_0);
  }
  if (!FUNC_1(VAR_2, &VAR_4->am_stats.s_statfs)) {
    return (VAR_0);
  }
  return (VAR_1);
}
