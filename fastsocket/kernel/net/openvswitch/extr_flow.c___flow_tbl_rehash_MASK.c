
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_table {int dummy; } ;


 int VAR_0 ;
 struct flow_table* FUNC_0 (int ) ;
 int FUNC_1 (struct flow_table*,struct flow_table*) ;
 struct flow_table* FUNC_2 (int) ;

__attribute__((used)) static struct flow_table *FUNC_3(struct flow_table *VAR_1, int VAR_2)
{
 struct flow_table *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 FUNC_1(VAR_1, VAR_3);

 return VAR_3;
}
