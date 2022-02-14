
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* rnh_masks; } ;
struct TYPE_3__ {int mask_nodes; TYPE_2__ head; } ;
struct rib_head {int rnh_walktree_from; int rnh_walktree; int rnh_lookup; int rnh_matchaddr; int rnh_deladdr; int rnh_addaddr; TYPE_1__ rmhead; TYPE_2__ head; int rnh_nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rib_head*) ;
 struct rib_head* FUNC_1 (int,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

struct rib_head *
FUNC_3(int VAR_9)
{
 struct rib_head *VAR_10;

 VAR_10 = FUNC_1(sizeof(struct rib_head), VAR_0, VAR_1 | VAR_2);



 FUNC_2(&VAR_10->head, VAR_10->rnh_nodes, VAR_9);
 FUNC_2(&VAR_10->rmhead.head, VAR_10->rmhead.mask_nodes, 0);
 VAR_10->head.rnh_masks = &VAR_10->rmhead;


 FUNC_0(VAR_10);


 VAR_10->rnh_addaddr = VAR_3;
 VAR_10->rnh_deladdr = VAR_4;
 VAR_10->rnh_matchaddr = VAR_6;
 VAR_10->rnh_lookup = VAR_5;
 VAR_10->rnh_walktree = VAR_7;
 VAR_10->rnh_walktree_from = VAR_8;

 return (VAR_10);
}
