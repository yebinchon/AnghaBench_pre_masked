
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct elink_phy {int dummy; } ;
struct elink_params {int port; int shmem_base; int chip_id; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bxe_softc*,int ,int ) ;
 scalar_t__ FUNC_1 (struct bxe_softc*,int ,int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct elink_phy *VAR_1,
           struct elink_params *VAR_2)
{
 struct bxe_softc *VAR_3 = VAR_2->sc;
 uint8_t VAR_4, VAR_5;
 uint32_t VAR_6;
 if (FUNC_1(VAR_3, VAR_2->chip_id,
          VAR_2->shmem_base, VAR_2->port,
          &VAR_4, &VAR_5) != VAR_0)
  return 0;
 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);


 if (VAR_6 == 0)
  return 1;
 else
  return 0;
}
