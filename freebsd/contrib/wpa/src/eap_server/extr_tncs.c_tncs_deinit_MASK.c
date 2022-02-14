
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tncs_data {struct tncs_data* tncs_message; struct tncs_data* next; TYPE_1__* imv_data; } ;
struct TYPE_4__ {struct tncs_data* connections; } ;
struct TYPE_3__ {struct tncs_data* imv_send; } ;


 int VAR_0 ;
 int FUNC_0 (struct tncs_data*) ;
 TYPE_2__* VAR_1 ;

void FUNC_1(struct tncs_data *VAR_2)
{
 int VAR_3;
 struct tncs_data *VAR_4, *VAR_5;

 if (VAR_2 == ((void*)0))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_2->imv_data[VAR_3].imv_send);

 VAR_4 = ((void*)0);
 VAR_5 = VAR_1->connections;
 while (VAR_5) {
  if (VAR_5 == VAR_2) {
   if (VAR_4)
    VAR_4->next = VAR_2->next;
   else
    VAR_1->connections = VAR_2->next;
   break;
  }
  VAR_4 = VAR_5;
  VAR_5 = VAR_5->next;
 }

 FUNC_0(VAR_2->tncs_message);
 FUNC_0(VAR_2);
}
