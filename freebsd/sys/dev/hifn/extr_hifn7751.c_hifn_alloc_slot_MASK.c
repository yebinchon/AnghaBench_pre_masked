
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hifn_softc {size_t sc_cmdi; size_t sc_cmdk; size_t sc_srci; size_t sc_srck; size_t sc_dsti; size_t sc_dstk; size_t sc_resi; size_t sc_resk; struct hifn_dma* sc_dma; } ;
struct hifn_dma {TYPE_4__* resr; TYPE_3__* dstr; TYPE_2__* srcr; TYPE_1__* cmdr; } ;
struct TYPE_8__ {void* l; } ;
struct TYPE_7__ {void* l; } ;
struct TYPE_6__ {void* l; } ;
struct TYPE_5__ {void* l; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hifn_softc*,size_t,int) ;
 int FUNC_1 (struct hifn_softc*,size_t,int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct hifn_softc*,size_t,int) ;
 int FUNC_3 (struct hifn_softc*,size_t,int) ;
 void* FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct hifn_softc *VAR_9, int *VAR_10, int *VAR_11, int *VAR_12, int *VAR_13)
{
 struct hifn_dma *VAR_14 = VAR_9->sc_dma;

 if (VAR_9->sc_cmdi == VAR_2) {
  VAR_9->sc_cmdi = 0;
  VAR_14->cmdr[VAR_2].l = FUNC_4(VAR_8 |
      VAR_4 | VAR_5);
  FUNC_0(VAR_9, VAR_2,
      VAR_1 | VAR_0);
 }
 *VAR_10 = VAR_9->sc_cmdi++;
 VAR_9->sc_cmdk = VAR_9->sc_cmdi;

 if (VAR_9->sc_srci == VAR_7) {
  VAR_9->sc_srci = 0;
  VAR_14->srcr[VAR_7].l = FUNC_4(VAR_8 |
      VAR_4 | VAR_5);
  FUNC_3(VAR_9, VAR_7,
      VAR_1 | VAR_0);
 }
 *VAR_11 = VAR_9->sc_srci++;
 VAR_9->sc_srck = VAR_9->sc_srci;

 if (VAR_9->sc_dsti == VAR_3) {
  VAR_9->sc_dsti = 0;
  VAR_14->dstr[VAR_3].l = FUNC_4(VAR_8 |
      VAR_4 | VAR_5);
  FUNC_1(VAR_9, VAR_3,
      VAR_1 | VAR_0);
 }
 *VAR_12 = VAR_9->sc_dsti++;
 VAR_9->sc_dstk = VAR_9->sc_dsti;

 if (VAR_9->sc_resi == VAR_6) {
  VAR_9->sc_resi = 0;
  VAR_14->resr[VAR_6].l = FUNC_4(VAR_8 |
      VAR_4 | VAR_5);
  FUNC_2(VAR_9, VAR_6,
      VAR_1 | VAR_0);
 }
 *VAR_13 = VAR_9->sc_resi++;
 VAR_9->sc_resk = VAR_9->sc_resi;
}
