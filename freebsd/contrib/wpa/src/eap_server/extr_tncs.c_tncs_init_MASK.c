
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tncs_data {struct tncs_data* next; scalar_t__ connectionID; int imv; } ;
struct TYPE_2__ {struct tncs_data* connections; int next_conn_id; int imv; } ;


 struct tncs_data* FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

struct tncs_data * FUNC_1(void)
{
 struct tncs_data *VAR_1;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_1 = FUNC_0(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 VAR_1->imv = VAR_0->imv;
 VAR_1->connectionID = VAR_0->next_conn_id++;
 VAR_1->next = VAR_0->connections;
 VAR_0->connections = VAR_1;

 return VAR_1;
}
