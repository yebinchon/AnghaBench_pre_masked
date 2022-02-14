
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_super {int local_alloc_bits; int osb_lock; int local_alloc_state; } ;


 int FUNC_0 (int ,char*,int ,unsigned long long,int,int) ;
 int FUNC_1 (struct ocfs2_super*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ocfs2_super *VAR_0, u64 VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 FUNC_2(&VAR_0->osb_lock);
 VAR_3 = VAR_0->local_alloc_bits;

 if (!FUNC_1(VAR_0))
  goto bail;





 if (VAR_1 > (VAR_3 / 2))
  goto bail;

 VAR_2 = 1;
bail:
 FUNC_0(0, "state=%d, bits=%llu, la_bits=%d, ret=%d\n",
      VAR_0->local_alloc_state, (unsigned long long)VAR_1, VAR_3, VAR_2);
 FUNC_3(&VAR_0->osb_lock);
 return VAR_2;
}
