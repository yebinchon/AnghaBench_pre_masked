
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {struct nilfs_super_block** ns_sbp; struct buffer_head** ns_sbh; } ;
struct nilfs_super_block {int dummy; } ;
struct buffer_head {int dummy; } ;



void FUNC_0(struct the_nilfs *VAR_0)
{
 struct buffer_head *VAR_1 = VAR_0->ns_sbh[0];
 struct nilfs_super_block *VAR_2 = VAR_0->ns_sbp[0];

 VAR_0->ns_sbh[0] = VAR_0->ns_sbh[1];
 VAR_0->ns_sbp[0] = VAR_0->ns_sbp[1];
 VAR_0->ns_sbh[1] = VAR_1;
 VAR_0->ns_sbp[1] = VAR_2;
}
