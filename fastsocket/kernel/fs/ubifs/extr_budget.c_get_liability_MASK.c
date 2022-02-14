
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {long long budg_idx_growth; long long budg_data_growth; long long budg_dd_growth; int space_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static long long FUNC_2(struct ubifs_info *VAR_0)
{
 long long VAR_1;

 FUNC_0(&VAR_0->space_lock);
 VAR_1 = VAR_0->budg_idx_growth + VAR_0->budg_data_growth + VAR_0->budg_dd_growth;
 FUNC_1(&VAR_0->space_lock);
 return VAR_1;
}
