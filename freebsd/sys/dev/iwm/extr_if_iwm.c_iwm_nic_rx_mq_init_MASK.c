
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int paddr; } ;
struct TYPE_7__ {int paddr; } ;
struct TYPE_6__ {int paddr; } ;
struct TYPE_9__ {TYPE_3__ stat_dma; TYPE_2__ used_desc_dma; TYPE_1__ free_desc_dma; } ;
struct iwm_softc {TYPE_5__* cfg; TYPE_4__ rxq; } ;
struct TYPE_10__ {scalar_t__ integrated; } ;


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
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct iwm_softc*,int ,int) ;
 int FUNC_1 (struct iwm_softc*,int ,int ) ;
 int FUNC_2 (struct iwm_softc*) ;
 int FUNC_3 (struct iwm_softc*) ;
 int FUNC_4 (struct iwm_softc*,int ,int) ;
 int FUNC_5 (struct iwm_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct iwm_softc *VAR_22)
{
 int VAR_23;

 if (!FUNC_2(VAR_22))
  return VAR_0;


 FUNC_4(VAR_22, VAR_16, 0);

 FUNC_4(VAR_22, VAR_21, 0);

 FUNC_5(VAR_22, VAR_9,
     VAR_22->rxq.free_desc_dma.paddr);
 FUNC_5(VAR_22, VAR_13,
     VAR_22->rxq.used_desc_dma.paddr);
 FUNC_5(VAR_22, VAR_15,
     VAR_22->rxq.stat_dma.paddr);
 FUNC_4(VAR_22, VAR_11, 0);
 FUNC_4(VAR_22, VAR_10, 0);
 FUNC_4(VAR_22, VAR_14, 0);


 VAR_23 = ((1 << 0) << 16) | (1 << 0);


 FUNC_4(VAR_22, VAR_16,
     VAR_3 |
     VAR_20 |
     VAR_18 |
     VAR_17 |
     VAR_19);


 FUNC_4(VAR_22, VAR_4,
     VAR_7 |
     VAR_8 |
     (VAR_22->cfg->integrated ? VAR_6 :
     VAR_5));


 FUNC_4(VAR_22, VAR_21, VAR_23);

 FUNC_3(VAR_22);

 FUNC_1(VAR_22, VAR_1, VAR_2);

 FUNC_0(VAR_22, VAR_12, 8);

 return (0);
}
