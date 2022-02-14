
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ocfs2_blockcheck_stats {int b_lock; scalar_t__ b_failure_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_blockcheck_stats *VAR_1)
{
 u64 VAR_2;

 if (!VAR_1)
  return;

 FUNC_1(&VAR_1->b_lock);
 VAR_1->b_failure_count++;
 VAR_2 = VAR_1->b_failure_count;
 FUNC_2(&VAR_1->b_lock);

 if (!VAR_2)
  FUNC_0(VAR_0, "Checksum failure count has wrapped\n");
}
