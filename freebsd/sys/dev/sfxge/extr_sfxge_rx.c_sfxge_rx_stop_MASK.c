
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int rxq_count; int enp; scalar_t__ rx_buffer_size; scalar_t__ rx_prefix_size; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sfxge_softc*,int) ;

void
FUNC_3(struct sfxge_softc *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0->enp);


 VAR_1 = VAR_0->rxq_count;
 while (--VAR_1 >= 0)
  FUNC_2(VAR_0, VAR_1);

 VAR_0->rx_prefix_size = 0;
 VAR_0->rx_buffer_size = 0;

 FUNC_1(VAR_0->enp);
}
