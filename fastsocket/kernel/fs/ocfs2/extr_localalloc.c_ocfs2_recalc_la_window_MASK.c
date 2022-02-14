
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int local_alloc_state; int local_alloc_bits; unsigned int local_alloc_default_bits; int osb_lock; int la_enable_wq; int sb; } ;
typedef enum ocfs2_la_event { ____Placeholder_ocfs2_la_event } ocfs2_la_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ,int) ;
 int VAR_5 ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ocfs2_super *VAR_6,
      enum ocfs2_la_event VAR_7)
{
 unsigned int VAR_8;
 int VAR_9;

 FUNC_3(&VAR_6->osb_lock);
 if (VAR_6->local_alloc_state == VAR_0) {
  FUNC_0(VAR_6->local_alloc_state == VAR_0);
  goto out_unlock;
 }




 if (VAR_7 == VAR_2 ||
     VAR_7 == VAR_3) {





  VAR_8 = VAR_6->local_alloc_bits >> 1;
  if (VAR_8 > FUNC_1(VAR_6->sb, 1)) {







   VAR_6->local_alloc_state = VAR_4;
   VAR_6->local_alloc_bits = VAR_8;
  } else {
   VAR_6->local_alloc_state = VAR_0;
  }
  FUNC_2(VAR_5, &VAR_6->la_enable_wq,
       VAR_1);
  goto out_unlock;
 }







 if (VAR_6->local_alloc_state != VAR_4)
  VAR_6->local_alloc_bits = VAR_6->local_alloc_default_bits;

out_unlock:
 VAR_9 = VAR_6->local_alloc_state;
 FUNC_4(&VAR_6->osb_lock);

 return VAR_9;
}
