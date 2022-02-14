
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpfs_node {int tn_status; } ;
struct tmpfs_mount {scalar_t__ tm_ronly; } ;


 int FUNC_0 (struct tmpfs_node*) ;
 int FUNC_1 (struct tmpfs_node*) ;

void
FUNC_2(struct tmpfs_mount *VAR_0, struct tmpfs_node *VAR_1, int VAR_2)
{

 if ((VAR_1->tn_status & VAR_2) == VAR_2 || VAR_0->tm_ronly)
  return;
 FUNC_0(VAR_1);
 VAR_1->tn_status |= VAR_2;
 FUNC_1(VAR_1);
}
