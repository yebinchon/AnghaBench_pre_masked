
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_message {int m_refcount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct rds_message*,int ) ;

void FUNC_3(struct rds_message *VAR_0)
{
 FUNC_2("addref rm %p ref %d\n", VAR_0, FUNC_1(&VAR_0->m_refcount));
 FUNC_0(&VAR_0->m_refcount);
}
