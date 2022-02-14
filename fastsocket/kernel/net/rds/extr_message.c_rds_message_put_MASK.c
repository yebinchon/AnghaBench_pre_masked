
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_message {int m_conn_item; int m_sock_item; int m_refcount; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,struct rds_message*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rds_message*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rds_message*) ;
 int FUNC_7 (char*,struct rds_message*,int ) ;

void FUNC_8(struct rds_message *VAR_0)
{
 FUNC_7("put rm %p ref %d\n", VAR_0, FUNC_3(&VAR_0->m_refcount));
 FUNC_1(!FUNC_3(&VAR_0->m_refcount), "danger refcount zero on %p\n", VAR_0);
 if (FUNC_2(&VAR_0->m_refcount)) {
  FUNC_0(!FUNC_5(&VAR_0->m_sock_item));
  FUNC_0(!FUNC_5(&VAR_0->m_conn_item));
  FUNC_6(VAR_0);

  FUNC_4(VAR_0);
 }
}
