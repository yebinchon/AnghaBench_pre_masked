
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct iwm_softc {TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ device_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static int
FUNC_2(const struct iwm_softc *VAR_4, const uint16_t *VAR_5)
{
 int VAR_6;

 if (VAR_4->cfg->device_family < VAR_0)
  return FUNC_0(VAR_5 + VAR_1);

 VAR_6 = FUNC_1((const uint32_t *)(VAR_5 + VAR_2));

        return VAR_6 & VAR_3;
}
