
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct sfxge_softc {unsigned int max_rss_channels; unsigned int evq_max; int dev; int enp; } ;
typedef int limits ;
struct TYPE_4__ {int edl_min_evq_count; unsigned int edl_max_evq_count; int edl_min_txq_count; unsigned int edl_max_txq_count; int edl_min_rxq_count; unsigned int edl_max_rxq_count; } ;
typedef TYPE_1__ efx_drv_limits_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (unsigned int,int) ;
 void* FUNC_2 (int,unsigned int) ;
 int FUNC_3 (struct sfxge_softc*) ;
 int FUNC_4 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int*,int*,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 unsigned int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11(struct sfxge_softc *VAR_2)
{
 efx_drv_limits_t VAR_3;
 int VAR_4;
 unsigned int VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 VAR_5 = FUNC_2(VAR_1, VAR_0);

 if (VAR_2->max_rss_channels > 0)
  VAR_5 = FUNC_2(VAR_5, VAR_2->max_rss_channels);

 FUNC_9(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.edl_min_evq_count = 1;
 VAR_3.edl_max_evq_count = VAR_5;
 VAR_3.edl_min_txq_count = FUNC_3(VAR_2);
 VAR_3.edl_max_txq_count = VAR_5 + FUNC_3(VAR_2) - 1;
 VAR_3.edl_min_rxq_count = 1;
 VAR_3.edl_max_rxq_count = VAR_5;

 FUNC_8(VAR_2->enp, &VAR_3);

 if ((VAR_4 = FUNC_7(VAR_2->enp)) != 0)
  return (VAR_4);

 VAR_4 = FUNC_6(VAR_2->enp, &VAR_6, &VAR_7,
     &VAR_8);
 if (VAR_4 != 0) {
  FUNC_5(VAR_2->enp);
  return (VAR_4);
 }

 FUNC_0(VAR_8 >= FUNC_3(VAR_2),
  ("txq_allocated < %u", FUNC_3(VAR_2)));

 VAR_2->evq_max = FUNC_2(VAR_6, VAR_5);
 VAR_2->evq_max = FUNC_2(VAR_7, VAR_2->evq_max);
 VAR_2->evq_max = FUNC_2(VAR_8 - (FUNC_3(VAR_2) - 1),
     VAR_2->evq_max);

 FUNC_0(VAR_2->evq_max <= VAR_5,
  ("allocated more than maximum requested"));
 return (0);
}
