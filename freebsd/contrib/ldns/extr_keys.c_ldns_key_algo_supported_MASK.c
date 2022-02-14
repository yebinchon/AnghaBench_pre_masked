
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; scalar_t__ name; } ;
typedef TYPE_1__ ldns_lookup_table ;


 TYPE_1__* VAR_0 ;

int FUNC_0(int VAR_1)
{
 ldns_lookup_table *VAR_2 = VAR_0;
 while(VAR_2->name) {
  if(VAR_2->id == VAR_1)
   return 1;
  VAR_2++;
 }
 return 0;
}
