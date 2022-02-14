
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int phy_config; } ;
struct iwm_softc {TYPE_1__ sc_fw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwm_softc*) ;
 int FUNC_1 (struct iwm_softc*) ;

__attribute__((used)) static inline uint32_t
FUNC_2(struct iwm_softc *VAR_4)
{
 uint32_t VAR_5 = ~(VAR_2 |
    VAR_0);
 uint32_t VAR_6 = FUNC_0(VAR_4);
 uint32_t VAR_7 = FUNC_1(VAR_4);

 VAR_5 |= VAR_7 << VAR_3 |
        VAR_6 << VAR_1;

 return VAR_4->sc_fw.phy_config & VAR_5;
}
