
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct wpi_tx_ring {int queued; } ;
struct wpi_softc {struct wpi_tx_ring* txq; } ;


 int FUNC_0 (struct wpi_softc*) ;
 int FUNC_1 (struct wpi_softc*) ;
 int VAR_0 ;

__attribute__((used)) static __inline int
FUNC_2(struct wpi_softc *VAR_1, uint16_t VAR_2)
{
 struct wpi_tx_ring *VAR_3 = &VAR_1->txq[VAR_2];
 int VAR_4;

 FUNC_0(VAR_1);
 VAR_4 = VAR_0 - VAR_3->queued;
 FUNC_1(VAR_1);

 return VAR_4;
}
