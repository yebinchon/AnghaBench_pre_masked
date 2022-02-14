
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_ring_data {int rdata_desc; } ;
struct bwi_softc {struct bwi_ring_data sc_rx_rdata; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct bwi_softc*,int ,int,int,int ,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct bwi_softc *VAR_1, int VAR_2, bus_addr_t VAR_3,
      int VAR_4)
{
 struct bwi_ring_data *VAR_5 = &VAR_1->sc_rx_rdata;

 FUNC_0(VAR_2 < VAR_0, ("buf_idx %d", VAR_2));
 FUNC_1(VAR_1, VAR_5->rdata_desc, VAR_0, VAR_2,
    VAR_3, VAR_4, 0);
}
