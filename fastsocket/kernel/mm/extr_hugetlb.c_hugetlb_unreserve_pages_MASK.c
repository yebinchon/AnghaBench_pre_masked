
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {long i_blocks; int i_lock; TYPE_1__* i_mapping; } ;
struct hugepage_subpool {int dummy; } ;
struct hstate {int dummy; } ;
struct TYPE_2__ {int private_list; } ;


 long FUNC_0 (struct hstate*) ;
 struct hstate* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct hugepage_subpool*,long) ;
 int FUNC_3 (struct hstate*,long) ;
 long FUNC_4 (int *,long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct hugepage_subpool* FUNC_7 (struct inode*) ;

void FUNC_8(struct inode *VAR_0, long VAR_1, long VAR_2)
{
 struct hstate *VAR_3 = FUNC_1(VAR_0);
 long VAR_4 = FUNC_4(&VAR_0->i_mapping->private_list, VAR_1);
 struct hugepage_subpool *VAR_5 = FUNC_7(VAR_0);

 FUNC_5(&VAR_0->i_lock);
 VAR_0->i_blocks -= (FUNC_0(VAR_3) * VAR_2);
 FUNC_6(&VAR_0->i_lock);

 FUNC_2(VAR_5, (VAR_4 - VAR_2));
 FUNC_3(VAR_3, -(VAR_4 - VAR_2));
}
