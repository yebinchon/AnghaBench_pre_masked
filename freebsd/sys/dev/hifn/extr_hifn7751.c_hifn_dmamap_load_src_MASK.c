
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct hifn_softc {int sc_srci; int sc_srcu; struct hifn_dma* sc_dma; } ;
struct hifn_operand {int nsegs; TYPE_2__* segs; } ;
struct hifn_dma {TYPE_1__* srcr; } ;
struct hifn_command {struct hifn_operand src; } ;
struct TYPE_4__ {int ds_addr; int ds_len; } ;
struct TYPE_3__ {void* l; void* p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hifn_softc*,int,int) ;
 int FUNC_1 (struct hifn_softc*,int) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct hifn_softc *VAR_5, struct hifn_command *VAR_6)
{
 struct hifn_dma *VAR_7 = VAR_5->sc_dma;
 struct hifn_operand *VAR_8 = &VAR_6->src;
 int VAR_9, VAR_10;
 u_int32_t VAR_11 = 0;

 VAR_9 = VAR_5->sc_srci;
 for (VAR_10 = 0; VAR_10 < VAR_8->nsegs; VAR_10++) {
  if (VAR_10 == VAR_8->nsegs - 1)
   VAR_11 = VAR_2;

  VAR_7->srcr[VAR_9].p = FUNC_2(VAR_8->segs[VAR_10].ds_addr);
  VAR_7->srcr[VAR_9].l = FUNC_2(VAR_8->segs[VAR_10].ds_len |
      VAR_4 | VAR_3 | VAR_11);
  FUNC_0(VAR_5, VAR_9,
      VAR_1 | VAR_0);

  VAR_9 = FUNC_1(VAR_5, VAR_9);
 }
 VAR_5->sc_srci = VAR_9;
 VAR_5->sc_srcu += VAR_8->nsegs;
 return (VAR_9);
}
