
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint16_t ;
struct wpi_tx_ring {size_t pending; size_t cur; int data_dmat; struct wpi_tx_data* data; } ;
struct wpi_tx_data {int * ni; int * m; int map; } ;
struct wpi_softc {struct wpi_tx_ring* txq; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpi_softc*) ;
 int FUNC_1 (struct wpi_softc*) ;
 size_t VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct wpi_softc *VAR_2, uint16_t VAR_3)
{
 struct wpi_tx_ring *VAR_4;
 struct wpi_tx_data *VAR_5;
 uint8_t VAR_6;

 FUNC_0(VAR_2);
 VAR_4 = &VAR_2->txq[VAR_3];

 while (VAR_4->pending != 0) {
  VAR_4->pending--;
  VAR_6 = (VAR_4->cur + VAR_4->pending) % VAR_1;
  VAR_5 = &VAR_4->data[VAR_6];

  FUNC_2(VAR_4->data_dmat, VAR_5->map,
      VAR_0);
  FUNC_3(VAR_4->data_dmat, VAR_5->map);
  FUNC_5(VAR_5->m);
  VAR_5->m = ((void*)0);

  FUNC_4(VAR_5->ni);
  VAR_5->ni = ((void*)0);
 }

 FUNC_1(VAR_2);
}
