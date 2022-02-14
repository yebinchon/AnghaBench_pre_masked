
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mesh_table {int rcu_head; scalar_t__ size_order; } ;


 int FUNC_0 (struct mesh_table*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 struct mesh_table* FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct mesh_table*,struct mesh_table*) ;
 int VAR_2 ;
 int FUNC_4 (int ,struct mesh_table*) ;
 struct mesh_table* FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(void)
{
 struct mesh_table *VAR_3, *VAR_4;

 FUNC_6(&VAR_2);
 VAR_3 = FUNC_5();
 VAR_4 = FUNC_2(VAR_3->size_order + 1);
 if (!VAR_4)
  goto out;
 if (FUNC_3(VAR_3, VAR_4) < 0) {
  FUNC_0(VAR_4);
  goto out;
 }
 FUNC_4(VAR_0, VAR_4);

 FUNC_1(&VAR_3->rcu_head, VAR_1);

 out:
 FUNC_7(&VAR_2);
}
