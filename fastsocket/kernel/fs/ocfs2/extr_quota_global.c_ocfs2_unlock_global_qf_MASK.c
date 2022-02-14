
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_mem_dqinfo {int * dqi_gqi_bh; int dqi_gqi_count; int dqi_gqinode; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ocfs2_mem_dqinfo *VAR_1, int VAR_2)
{
 FUNC_1(VAR_1->dqi_gqinode, VAR_2);
 FUNC_0(VAR_1->dqi_gqi_bh);
 FUNC_2(&VAR_0);
 if (!--VAR_1->dqi_gqi_count)
  VAR_1->dqi_gqi_bh = ((void*)0);
 FUNC_3(&VAR_0);
}
