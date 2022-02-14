
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct ssh {TYPE_1__* chanctxt; } ;
struct TYPE_2__ {size_t channels_alloc; int ** channels; } ;


 int FUNC_0 (struct ssh*,int *) ;

void
FUNC_1(struct ssh *VAR_0)
{
 u_int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->chanctxt->channels_alloc; VAR_1++)
  if (VAR_0->chanctxt->channels[VAR_1] != ((void*)0))
   FUNC_0(VAR_0, VAR_0->chanctxt->channels[VAR_1]);
}
