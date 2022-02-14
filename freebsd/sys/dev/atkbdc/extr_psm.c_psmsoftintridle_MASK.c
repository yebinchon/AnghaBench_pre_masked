
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ inputbytes; } ;
struct psm_softc {scalar_t__ pqueue_start; scalar_t__ pqueue_end; TYPE_3__ idlepacket; TYPE_1__* pqueue; } ;
struct TYPE_4__ {int * ipacket; } ;
typedef TYPE_1__ packetbuf_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*,int) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
 struct psm_softc *VAR_3 = VAR_2;
 packetbuf_t *VAR_4;



 if (VAR_3->pqueue_start == VAR_3->pqueue_end &&
     VAR_3->idlepacket.inputbytes > 0) {

  if (--VAR_3->pqueue_start < 0)
   VAR_3->pqueue_start = VAR_1 - 1;

  VAR_4 = &VAR_3->pqueue[VAR_3->pqueue_start];
  FUNC_1(VAR_4, &VAR_3->idlepacket, sizeof(packetbuf_t));
  FUNC_0(4, (VAR_0,
      "psmsoftintridle: %02x %02x %02x %02x %02x %02x\n",
      VAR_4->ipacket[0], VAR_4->ipacket[1], VAR_4->ipacket[2],
      VAR_4->ipacket[3], VAR_4->ipacket[4], VAR_4->ipacket[5]));

  FUNC_2(VAR_2);
 }
}
