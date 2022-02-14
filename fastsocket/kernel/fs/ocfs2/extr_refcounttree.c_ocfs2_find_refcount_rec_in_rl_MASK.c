
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_refcount_rec {void* r_clusters; int r_cpos; scalar_t__ r_refcount; } ;
struct TYPE_2__ {int rl_used; struct ocfs2_refcount_rec* rl_recs; } ;
struct ocfs2_refcount_block {TYPE_1__ rf_records; } ;
struct ocfs2_caching_info {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ocfs2_caching_info *VAR_0,
       struct buffer_head *VAR_1,
       u64 VAR_2, unsigned int VAR_3,
       struct ocfs2_refcount_rec *VAR_4,
       int *VAR_5)
{
 int VAR_6 = 0;
 struct ocfs2_refcount_block *VAR_7 =
  (struct ocfs2_refcount_block *)VAR_1->b_data;
 struct ocfs2_refcount_rec *VAR_8 = ((void*)0);

 for (; VAR_6 < FUNC_2(VAR_7->rf_records.rl_used); VAR_6++) {
  VAR_8 = &VAR_7->rf_records.rl_recs[VAR_6];

  if (FUNC_4(VAR_8->r_cpos) +
      FUNC_3(VAR_8->r_clusters) <= VAR_2)
   continue;
  else if (FUNC_4(VAR_8->r_cpos) > VAR_2)
   break;


  if (VAR_4)
   *VAR_4 = *VAR_8;
  goto out;
 }

 if (VAR_4) {

  VAR_4->r_cpos = FUNC_1(VAR_2);
  VAR_4->r_refcount = 0;
  if (VAR_6 < FUNC_2(VAR_7->rf_records.rl_used) &&
      FUNC_4(VAR_8->r_cpos) < VAR_2 + VAR_3)
   VAR_4->r_clusters =
    FUNC_0(FUNC_4(VAR_8->r_cpos) - VAR_2);
  else
   VAR_4->r_clusters = FUNC_0(VAR_3);
 }

out:
 *VAR_5 = VAR_6;
}
