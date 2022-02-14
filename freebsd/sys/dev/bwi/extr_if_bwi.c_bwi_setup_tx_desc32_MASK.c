
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_softc {int dummy; } ;
struct bwi_ring_data {int rdata_desc; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct bwi_softc*,int ,int,int,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct bwi_softc *VAR_1, struct bwi_ring_data *VAR_2,
      int VAR_3, bus_addr_t VAR_4, int VAR_5)
{
 FUNC_0(VAR_3 < VAR_0, ("buf_idx %d", VAR_3));
 FUNC_1(VAR_1, VAR_2->rdata_desc, VAR_0, VAR_3,
    VAR_4, VAR_5, 1);
}
