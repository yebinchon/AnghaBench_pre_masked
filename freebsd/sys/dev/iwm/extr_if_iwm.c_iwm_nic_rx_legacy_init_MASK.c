
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int paddr; } ;
struct TYPE_5__ {int paddr; } ;
struct TYPE_7__ {TYPE_2__ stat_dma; TYPE_1__ free_desc_dma; } ;
struct iwm_softc {TYPE_4__* cfg; TYPE_3__ rxq; } ;
struct TYPE_8__ {scalar_t__ host_interrupt_operation_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct iwm_softc*,int ,int ) ;
 int FUNC_1 (struct iwm_softc*,int ,int) ;
 int FUNC_2 (struct iwm_softc*,int ,int ) ;
 int FUNC_3 (struct iwm_softc*) ;
 int FUNC_4 (struct iwm_softc*) ;
 int FUNC_5 (struct iwm_softc*) ;

__attribute__((used)) static int
FUNC_6(struct iwm_softc *VAR_20)
{


 FUNC_5(VAR_20);

 if (!FUNC_3(VAR_20))
  return VAR_0;


 FUNC_1(VAR_20, VAR_4, 0);
 FUNC_1(VAR_20, VAR_3, 0);
 FUNC_1(VAR_20, VAR_13, 0);
 FUNC_1(VAR_20, VAR_12, 0);


 FUNC_1(VAR_20,
     VAR_11,
     VAR_20->rxq.free_desc_dma.paddr >> 8);


 FUNC_1(VAR_20,
     VAR_14, VAR_20->rxq.stat_dma.paddr >> 4);
 FUNC_1(VAR_20, VAR_2,
     VAR_7 |
     VAR_6 |
     VAR_5 |
     VAR_10 |
     (VAR_19 << VAR_9) |
     VAR_18 << VAR_8);

 FUNC_2(VAR_20, VAR_1, VAR_17);


 if (VAR_20->cfg->host_interrupt_operation_mode)
  FUNC_0(VAR_20, VAR_1, VAR_16);

 FUNC_4(VAR_20);

 FUNC_1(VAR_20, VAR_15, 8);

 return 0;
}
