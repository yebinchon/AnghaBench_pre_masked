
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_table {int dummy; } ;
struct datapath {int table; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct flow_table* FUNC_0 (int ) ;
 int FUNC_1 (struct flow_table*) ;
 struct flow_table* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct flow_table*) ;

__attribute__((used)) static int FUNC_4(struct datapath *VAR_2)
{
 struct flow_table *VAR_3;
 struct flow_table *VAR_4;

 VAR_3 = FUNC_2(VAR_2->table);
 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_3(VAR_2->table, VAR_4);

 FUNC_1(VAR_3);
 return 0;
}
