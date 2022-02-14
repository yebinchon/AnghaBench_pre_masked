
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ event_id; char* name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

char *FUNC_0(u64 VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0 ; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3].event_id == VAR_2)
   return VAR_1[VAR_3].name;
 }
 return ((void*)0);
}
