
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpfs_node {scalar_t__ tn_refcount; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct tmpfs_node*) ;
 scalar_t__ VAR_0 ;

void
FUNC_2(struct tmpfs_node *VAR_1)
{

 FUNC_1(VAR_1);
 FUNC_0(VAR_1->tn_refcount > 0, ("node %p zero refcount", VAR_1));
 FUNC_0(VAR_1->tn_refcount < VAR_0, ("node %p refcount %u", VAR_1,
     VAR_1->tn_refcount));
 VAR_1->tn_refcount++;
}
