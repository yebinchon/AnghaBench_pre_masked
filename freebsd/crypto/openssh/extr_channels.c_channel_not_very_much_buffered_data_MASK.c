
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct ssh {TYPE_1__* chanctxt; } ;
struct TYPE_4__ {scalar_t__ type; int output; int self; } ;
struct TYPE_3__ {size_t channels_alloc; TYPE_2__** channels; } ;
typedef TYPE_2__ Channel ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,size_t,size_t) ;
 size_t FUNC_1 (struct ssh*) ;
 size_t FUNC_2 (int ) ;

int
FUNC_3(struct ssh *VAR_1)
{
 u_int VAR_2;
 u_int VAR_3 = FUNC_1(VAR_1);
 Channel *VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_1->chanctxt->channels_alloc; VAR_2++) {
  VAR_4 = VAR_1->chanctxt->channels[VAR_2];
  if (VAR_4 == ((void*)0) || VAR_4->type != VAR_0)
   continue;
  if (FUNC_2(VAR_4->output) > VAR_3) {
   FUNC_0("channel %d: big output buffer %zu > %u",
       VAR_4->self, FUNC_2(VAR_4->output), VAR_3);
   return 0;
  }
 }
 return 1;
}
