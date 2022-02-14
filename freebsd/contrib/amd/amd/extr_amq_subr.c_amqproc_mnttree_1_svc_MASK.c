
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ voidp ;
struct svc_req {int dummy; } ;
typedef int amq_mount_tree_p ;
typedef int am_node ;


 int * FUNC_0 (char*) ;

amq_mount_tree_p *
FUNC_1(voidp VAR_0, struct svc_req *VAR_1)
{
  static am_node *VAR_2;

  VAR_2 = FUNC_0(*(char **) VAR_0);
  return (amq_mount_tree_p *) ((void *)&VAR_2);
}
