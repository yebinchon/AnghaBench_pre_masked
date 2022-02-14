
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int u_char ;
struct TYPE_2__ {int rxl; int rate; } ;
struct sbni_softc {size_t cur_rxl_index; scalar_t__ enaddr; int maxframe; TYPE_1__ csr1; scalar_t__ delta_rxl; } ;
struct sbni_flags {size_t rxl; int mac_addr; int rate; scalar_t__ fixed_rate; scalar_t__ fixed_rxl; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int) ;
 int * VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct sbni_softc *VAR_5, struct sbni_flags VAR_6)
{
 if (VAR_6.fixed_rxl) {
  VAR_5->delta_rxl = 0;
  VAR_5->cur_rxl_index = VAR_6.rxl;
 } else {
  VAR_5->delta_rxl = VAR_3;
  VAR_5->cur_rxl_index = VAR_2;
 }

 VAR_5->csr1.rate = VAR_6.fixed_rate ? VAR_6.rate : VAR_1;
 VAR_5->csr1.rxl = VAR_4[VAR_5->cur_rxl_index];
 VAR_5->maxframe = VAR_0;




 *(u_int16_t *) VAR_5->enaddr = FUNC_1(0x00ff);
 if (VAR_6.mac_addr) {
  *(u_int32_t *) (VAR_5->enaddr + 2) =
      FUNC_0(VAR_6.mac_addr | 0x01000000);
 } else {
  *(u_char *) (VAR_5->enaddr + 2) = 0x01;
  FUNC_2(VAR_5->enaddr + 3, 3);
 }
}
