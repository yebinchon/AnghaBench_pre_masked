
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int rxl; } ;
struct sbni_softc {size_t cur_rxl_index; size_t timeout_rxl; scalar_t__ cur_rxl_rcvd; scalar_t__ prev_rxl_rcvd; TYPE_1__ csr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct sbni_softc*,int ) ;
 int FUNC_1 (struct sbni_softc*,int ,int ) ;
 size_t* VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct sbni_softc *VAR_4)
{
 VAR_4->cur_rxl_index = VAR_3[VAR_4->timeout_rxl];
 if (++VAR_4->timeout_rxl >= 4)
  VAR_4->timeout_rxl = 0;

 VAR_4->csr1.rxl = VAR_2[VAR_4->cur_rxl_index];
 FUNC_0(VAR_4, VAR_0);
 FUNC_1(VAR_4, VAR_1, *(u_char *)&VAR_4->csr1);

 VAR_4->prev_rxl_rcvd = VAR_4->cur_rxl_rcvd;
 VAR_4->cur_rxl_rcvd = 0;
}
