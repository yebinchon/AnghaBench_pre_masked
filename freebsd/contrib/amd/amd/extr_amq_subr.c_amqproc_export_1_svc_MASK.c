
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int voidp ;
struct svc_req {int dummy; } ;
typedef int amq_mount_tree_p ;
struct TYPE_3__ {int amq_mount_tree_list_len; int * amq_mount_tree_list_val; } ;
typedef TYPE_1__ amq_mount_tree_list ;
typedef int am_node ;


 int * FUNC_0 (int ) ;

amq_mount_tree_list *
FUNC_1(voidp VAR_0, struct svc_req *VAR_1)
{
  static amq_mount_tree_list VAR_2;
  static am_node *VAR_3;

  VAR_3 = FUNC_0(0);
  VAR_2.amq_mount_tree_list_val = (amq_mount_tree_p *) ((void *) &VAR_3);
  VAR_2.amq_mount_tree_list_len = 1;

  return &VAR_2;
}
