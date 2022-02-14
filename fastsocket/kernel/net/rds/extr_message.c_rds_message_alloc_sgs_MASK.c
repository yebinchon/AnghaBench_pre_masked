
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct rds_message {int m_used_sgs; int m_total_sgs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct scatterlist*,int) ;

struct scatterlist *FUNC_2(struct rds_message *VAR_0, int VAR_1)
{
 struct scatterlist *VAR_2 = (struct scatterlist *) &VAR_0[1];
 struct scatterlist *VAR_3;

 FUNC_0(VAR_0->m_used_sgs + VAR_1 > VAR_0->m_total_sgs);
 FUNC_0(!VAR_1);

 if (VAR_0->m_used_sgs + VAR_1 > VAR_0->m_total_sgs)
  return ((void*)0);

 VAR_3 = &VAR_2[VAR_0->m_used_sgs];
 FUNC_1(VAR_3, VAR_1);
 VAR_0->m_used_sgs += VAR_1;

 return VAR_3;
}
