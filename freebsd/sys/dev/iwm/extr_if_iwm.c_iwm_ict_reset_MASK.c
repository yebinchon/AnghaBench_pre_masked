
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int paddr; int vaddr; } ;
struct iwm_softc {int sc_flags; TYPE_1__ ict_dma; scalar_t__ ict_cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct iwm_softc*,int ,int) ;
 int FUNC_1 (struct iwm_softc*) ;
 int FUNC_2 (struct iwm_softc*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct iwm_softc *VAR_8)
{
 FUNC_1(VAR_8);


 FUNC_3(VAR_8->ict_dma.vaddr, 0, VAR_7);
 VAR_8->ict_cur = 0;


 FUNC_0(VAR_8, VAR_3,
     VAR_2
     | VAR_1
     | VAR_0
     | VAR_8->ict_dma.paddr >> VAR_6);


 VAR_8->sc_flags |= VAR_5;


 FUNC_0(VAR_8, VAR_4, ~0);
 FUNC_2(VAR_8);
}
