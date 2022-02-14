
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpi_tx_ring {int qid; int cur; } ;
struct wpi_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpi_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct wpi_softc *VAR_1, struct wpi_tx_ring *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, VAR_2->qid << 8 | VAR_2->cur);
}
