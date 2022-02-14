
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pglist_data {int node_id; } ;


 int VAR_0 ;
 struct pglist_data* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

struct pglist_data *FUNC_2(struct pglist_data *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1->node_id);

 if (VAR_2 == VAR_0)
  return ((void*)0);
 return FUNC_0(VAR_2);
}
