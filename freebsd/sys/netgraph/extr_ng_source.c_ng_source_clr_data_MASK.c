
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
typedef TYPE_1__* sc_p ;
struct TYPE_3__ {int * last_packet; scalar_t__ queueOctets; int snd_queue; } ;


 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int *,struct mbuf*) ;

__attribute__((used)) static void
FUNC_2 (sc_p VAR_0)
{
 struct mbuf *VAR_1;

 for (;;) {
  FUNC_1(&VAR_0->snd_queue, VAR_1);
  if (VAR_1 == ((void*)0))
   break;
  FUNC_0(VAR_1);
 }
 VAR_0->queueOctets = 0;
 VAR_0->last_packet = ((void*)0);
}
