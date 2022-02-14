
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint16_t ;
struct bnxt_softc {TYPE_1__* rx_cp_rings; struct bnxt_ring* ag_rings; struct bnxt_ring* rx_rings; } ;
struct bnxt_ring {int dummy; } ;
typedef int qidx_t ;
struct TYPE_2__ {scalar_t__ cons; int ring; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct bnxt_ring*,int ) ;
 int FUNC_2 (struct bnxt_ring*,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, uint16_t VAR_2, uint8_t VAR_3,
    qidx_t VAR_4)
{
 struct bnxt_softc *VAR_5 = (struct bnxt_softc *)VAR_1;
 struct bnxt_ring *VAR_6;

 if (VAR_3 == 0)
  VAR_6 = &VAR_5->rx_rings[VAR_2];
 else
  VAR_6 = &VAR_5->ag_rings[VAR_2];






 if (VAR_5->rx_cp_rings[VAR_2].cons != VAR_0)
  FUNC_0(&VAR_5->rx_cp_rings[VAR_2].ring,
      VAR_5->rx_cp_rings[VAR_2].cons);

 FUNC_1(VAR_6, FUNC_2(VAR_6, VAR_4));

 FUNC_1(VAR_6, FUNC_2(VAR_6, VAR_4));
 return;
}
