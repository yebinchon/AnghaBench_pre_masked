
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct bcm_bsc_softc {scalar_t__ sc_totlen; scalar_t__ sc_resid; scalar_t__ sc_dlen; void** sc_data; TYPE_1__* sc_curmsg; } ;
struct TYPE_2__ {scalar_t__ len; void** buf; } ;


 int VAR_0 ;
 void* FUNC_0 (struct bcm_bsc_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bcm_bsc_softc*,int,char*,void*) ;

__attribute__((used)) static void
FUNC_2(struct bcm_bsc_softc *VAR_3)
{
 uint32_t VAR_4;


 do {
  if (VAR_3->sc_resid == 0) {
   VAR_3->sc_data = VAR_3->sc_curmsg->buf;
   VAR_3->sc_dlen = VAR_3->sc_curmsg->len;
   VAR_3->sc_resid = VAR_3->sc_dlen;
   ++VAR_3->sc_curmsg;
  }
  do {
   *VAR_3->sc_data = FUNC_0(VAR_3, VAR_0);
   FUNC_1(VAR_3, 1, "0x%02x ", *VAR_3->sc_data);
   ++VAR_3->sc_data;
   --VAR_3->sc_resid;
   --VAR_3->sc_totlen;
   VAR_4 = FUNC_0(VAR_3, VAR_1);
  } while (VAR_3->sc_resid > 0 && (VAR_4 & VAR_2));
 } while (VAR_3->sc_totlen > 0 && (VAR_4 & VAR_2));
}
