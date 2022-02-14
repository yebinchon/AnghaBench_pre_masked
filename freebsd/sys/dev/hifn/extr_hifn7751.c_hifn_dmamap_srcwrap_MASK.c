
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hifn_softc {struct hifn_dma* sc_dma; } ;
struct hifn_dma {TYPE_1__* srcr; } ;
struct TYPE_2__ {int l; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hifn_softc*,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static __inline int
FUNC_2(struct hifn_softc *VAR_6, int VAR_7)
{
 struct hifn_dma *VAR_8 = VAR_6->sc_dma;

 if (++VAR_7 == VAR_4) {
  VAR_8->srcr[VAR_7].l = FUNC_1(VAR_5 |
      VAR_2 | VAR_3);
  FUNC_0(VAR_6, VAR_4,
      VAR_1 | VAR_0);
  VAR_7 = 0;
 }
 return (VAR_7);
}
