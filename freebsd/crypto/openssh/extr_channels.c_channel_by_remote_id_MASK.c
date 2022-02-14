
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct ssh {TYPE_1__* chanctxt; } ;
struct TYPE_5__ {size_t remote_id; scalar_t__ have_remote_id; } ;
struct TYPE_4__ {size_t channels_alloc; TYPE_2__** channels; } ;
typedef TYPE_2__ Channel ;



Channel *
FUNC_0(struct ssh *VAR_0, u_int VAR_1)
{
 Channel *VAR_2;
 u_int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->chanctxt->channels_alloc; VAR_3++) {
  VAR_2 = VAR_0->chanctxt->channels[VAR_3];
  if (VAR_2 != ((void*)0) && VAR_2->have_remote_id && VAR_2->remote_id == VAR_1)
   return VAR_2;
 }
 return ((void*)0);
}
