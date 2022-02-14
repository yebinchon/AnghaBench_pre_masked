
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct rds_message {unsigned int m_total_sgs; int m_flush_wait; int m_rs_lock; int m_conn_item; int m_sock_item; int m_refcount; scalar_t__ m_used_sgs; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 struct rds_message* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

struct rds_message *FUNC_5(unsigned int VAR_1, gfp_t VAR_2)
{
 struct rds_message *VAR_3;

 if (VAR_1 > VAR_0 - sizeof(struct rds_message))
  return ((void*)0);

 VAR_3 = FUNC_3(sizeof(struct rds_message) + VAR_1, VAR_2);
 if (!VAR_3)
  goto out;

 VAR_3->m_used_sgs = 0;
 VAR_3->m_total_sgs = VAR_1 / sizeof(struct scatterlist);

 FUNC_1(&VAR_3->m_refcount, 1);
 FUNC_0(&VAR_3->m_sock_item);
 FUNC_0(&VAR_3->m_conn_item);
 FUNC_4(&VAR_3->m_rs_lock);
 FUNC_2(&VAR_3->m_flush_wait);

out:
 return VAR_3;
}
