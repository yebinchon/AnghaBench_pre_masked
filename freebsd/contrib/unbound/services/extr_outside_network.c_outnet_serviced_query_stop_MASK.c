
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serviced_query {TYPE_1__* outnet; int to_be_deleted; int cblist; } ;
struct TYPE_2__ {int serviced; } ;


 int FUNC_0 (struct serviced_query*,void*) ;
 int FUNC_1 (int ,struct serviced_query*) ;
 int FUNC_2 (struct serviced_query*) ;

void FUNC_3(struct serviced_query* VAR_0, void* VAR_1)
{
 if(!VAR_0)
  return;
 FUNC_0(VAR_0, VAR_1);

 if(!VAR_0->cblist && !VAR_0->to_be_deleted) {
  (void)FUNC_1(VAR_0->outnet->serviced, VAR_0);
  FUNC_2(VAR_0);
 }
}
