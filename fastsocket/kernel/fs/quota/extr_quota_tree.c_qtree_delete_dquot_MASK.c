
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct qtree_mem_dqinfo {int dummy; } ;
struct dquot {int dq_off; } ;


 int VAR_0 ;
 int FUNC_0 (struct qtree_mem_dqinfo*,struct dquot*,int *,int ) ;

int FUNC_1(struct qtree_mem_dqinfo *VAR_1, struct dquot *VAR_2)
{
 uint VAR_3 = VAR_0;

 if (!VAR_2->dq_off)
  return 0;
 return FUNC_0(VAR_1, VAR_2, &VAR_3, 0);
}
