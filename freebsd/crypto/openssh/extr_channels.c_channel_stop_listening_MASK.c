
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct ssh {TYPE_1__* chanctxt; } ;
struct TYPE_5__ {int type; int sock; } ;
struct TYPE_4__ {size_t channels_alloc; TYPE_2__** channels; } ;
typedef TYPE_2__ Channel ;
 int FUNC_0 (struct ssh*,int *) ;
 int FUNC_1 (struct ssh*,TYPE_2__*) ;

void
FUNC_2(struct ssh *VAR_0)
{
 u_int VAR_1;
 Channel *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->chanctxt->channels_alloc; VAR_1++) {
  VAR_2 = VAR_0->chanctxt->channels[VAR_1];
  if (VAR_2 != ((void*)0)) {
   switch (VAR_2->type) {
   case 133:
   case 132:
   case 131:
   case 128:
   case 129:
   case 130:
    FUNC_0(VAR_0, &VAR_2->sock);
    FUNC_1(VAR_0, VAR_2);
    break;
   }
  }
 }
}
