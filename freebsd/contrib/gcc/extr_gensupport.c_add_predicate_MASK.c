
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pred_data {struct pred_data* next; int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 void** FUNC_1 (int ,struct pred_data*,int ) ;
 struct pred_data** VAR_1 ;
 int VAR_2 ;

void
FUNC_2 (struct pred_data *VAR_3)
{
  void **VAR_4 = FUNC_1 (VAR_2, VAR_3, VAR_0);
  if (*VAR_4)
    {
      FUNC_0 ("duplicate predicate definition for '%s'", VAR_3->name);
      return;
    }
  *VAR_4 = VAR_3;
  *VAR_1 = VAR_3;
  VAR_1 = &VAR_3->next;
}
