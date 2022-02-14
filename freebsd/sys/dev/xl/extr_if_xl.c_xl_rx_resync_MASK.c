
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct xl_chain_onefrag* xl_rx_head; } ;
struct xl_softc {TYPE_2__ xl_cdata; } ;
struct xl_chain_onefrag {struct xl_chain_onefrag* xl_next; TYPE_1__* xl_ptr; } ;
struct TYPE_3__ {scalar_t__ xl_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct xl_softc*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct xl_softc *VAR_2)
{
 struct xl_chain_onefrag *VAR_3;
 int VAR_4;

 FUNC_0(VAR_2);

 VAR_3 = VAR_2->xl_cdata.xl_rx_head;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3->xl_ptr->xl_status)
   break;
  VAR_3 = VAR_3->xl_next;
 }

 if (VAR_4 == VAR_1)
  return (0);

 VAR_2->xl_cdata.xl_rx_head = VAR_3;

 return (VAR_0);
}
