
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_mem_dqinfo {struct buffer_head* dqi_gqi_bh; int dqi_gqi_count; int dqi_gqinode; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct buffer_head**,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ocfs2_mem_dqinfo *VAR_1, int VAR_2)
{
 int VAR_3;
 struct buffer_head *VAR_4 = ((void*)0);

 VAR_3 = FUNC_1(VAR_1->dqi_gqinode, &VAR_4, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 FUNC_2(&VAR_0);
 if (!VAR_1->dqi_gqi_count++)
  VAR_1->dqi_gqi_bh = VAR_4;
 else
  FUNC_0(VAR_4 != VAR_1->dqi_gqi_bh);
 FUNC_3(&VAR_0);
 return 0;
}
