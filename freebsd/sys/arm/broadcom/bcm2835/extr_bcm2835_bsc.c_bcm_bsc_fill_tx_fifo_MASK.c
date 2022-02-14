
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct bcm_bsc_softc {scalar_t__ sc_totlen; scalar_t__ sc_resid; scalar_t__ sc_dlen; scalar_t__ sc_replen; int sc_flags; TYPE_1__* sc_curmsg; int * sc_data; } ;
struct TYPE_2__ {scalar_t__ len; int slave; int * buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcm_bsc_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bcm_bsc_softc*,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct bcm_bsc_softc*,int,char*,...) ;
 int FUNC_3 (struct bcm_bsc_softc*,int,char*,int,...) ;

__attribute__((used)) static void
FUNC_4(struct bcm_bsc_softc *VAR_4)
{
 uint32_t VAR_5;


 do {
  if (VAR_4->sc_resid == 0) {
   VAR_4->sc_data = VAR_4->sc_curmsg->buf;
   VAR_4->sc_dlen = VAR_4->sc_curmsg->len;
   VAR_4->sc_resid = VAR_4->sc_dlen;
   ++VAR_4->sc_curmsg;
  }
  do {
   FUNC_1(VAR_4, VAR_0, *VAR_4->sc_data);
   FUNC_2(VAR_4, 1, "0x%02x ", *VAR_4->sc_data);
   ++VAR_4->sc_data;
   --VAR_4->sc_resid;
   --VAR_4->sc_totlen;
   VAR_5 = FUNC_0(VAR_4, VAR_1);
  } while (VAR_4->sc_resid > 0 && (VAR_5 & VAR_2));
  if (VAR_4->sc_replen > 0 && VAR_4->sc_resid == 0) {
   VAR_4->sc_replen -= VAR_4->sc_dlen;
   if (VAR_4->sc_replen == 0) {
    FUNC_2(VAR_4, 1, " err=0\n");
    FUNC_3(VAR_4, 2, "rstart 0x%02x\n",
        VAR_4->sc_curmsg->slave | 0x01);
    FUNC_3(VAR_4, 1,
        "read   0x%02x len %d: ",
        VAR_4->sc_curmsg->slave | 0x01,
        VAR_4->sc_totlen);
    VAR_4->sc_flags |= VAR_3;
    return;
   }
  }
 } while (VAR_4->sc_totlen > 0 && (VAR_5 & VAR_2));
}
