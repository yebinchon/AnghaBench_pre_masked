
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tncs_data {scalar_t__ connectionID; struct tncs_data* next; } ;
struct TYPE_2__ {struct tncs_data* connections; } ;
typedef scalar_t__ TNC_ConnectionID ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,char*,unsigned long) ;

__attribute__((used)) static struct tncs_data * FUNC_1(TNC_ConnectionID VAR_2)
{
 struct tncs_data *VAR_3;

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 VAR_3 = VAR_1->connections;
 while (VAR_3) {
  if (VAR_3->connectionID == VAR_2)
   return VAR_3;
  VAR_3 = VAR_3->next;
 }

 FUNC_0(VAR_0, "TNC: Connection ID %lu not found",
     (unsigned long) VAR_2);

 return ((void*)0);
}
