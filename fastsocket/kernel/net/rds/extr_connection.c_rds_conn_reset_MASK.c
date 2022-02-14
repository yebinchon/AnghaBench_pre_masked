
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_connection {scalar_t__ c_flags; int c_faddr; int c_laddr; } ;


 int FUNC_0 (struct rds_connection*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct rds_connection *VAR_1)
{
 FUNC_2("connection %pI4 to %pI4 reset\n",
   &VAR_1->c_laddr, &VAR_1->c_faddr);

 FUNC_1(VAR_0);
 FUNC_0(VAR_1);
 VAR_1->c_flags = 0;





}
