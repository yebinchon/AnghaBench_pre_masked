
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwm_softc {int dummy; } ;
struct TYPE_2__ {int energy_a; int energy_b; } ;
struct iwm_rx_mpdu_desc {TYPE_1__ v1; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int
FUNC_1(struct iwm_softc *VAR_0,
    struct iwm_rx_mpdu_desc *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = VAR_1->v1.energy_a;
 VAR_3 = VAR_1->v1.energy_b;
 VAR_2 = VAR_2 ? -VAR_2 : -256;
 VAR_3 = VAR_3 ? -VAR_3 : -256;
 return FUNC_0(VAR_2, VAR_3);
}
