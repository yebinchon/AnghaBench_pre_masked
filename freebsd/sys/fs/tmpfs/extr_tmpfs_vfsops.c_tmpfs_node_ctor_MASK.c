
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpfs_node {scalar_t__ tn_vpstate; int * tn_vnode; scalar_t__ tn_links; scalar_t__ tn_flags; scalar_t__ tn_status; scalar_t__ tn_size; int tn_gen; } ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 struct tmpfs_node *VAR_4 = (struct tmpfs_node *)VAR_0;

 VAR_4->tn_gen++;
 VAR_4->tn_size = 0;
 VAR_4->tn_status = 0;
 VAR_4->tn_flags = 0;
 VAR_4->tn_links = 0;
 VAR_4->tn_vnode = ((void*)0);
 VAR_4->tn_vpstate = 0;

 return (0);
}
