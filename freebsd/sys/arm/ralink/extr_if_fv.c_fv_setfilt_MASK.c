
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct ifnet {int dummy; } ;
struct TYPE_4__ {int fv_tx_prod; int fv_sf_buff_map; int fv_sf_tag; int fv_tx_ring_map; int fv_tx_ring_tag; scalar_t__ fv_sf_buff; int fv_tx_cnt; } ;
struct TYPE_3__ {int fv_sf_paddr; struct fv_desc* fv_tx_ring; } ;
struct fv_softc {TYPE_2__ fv_cdata; struct ifnet* fv_ifp; TYPE_1__ fv_rdata; } ;
struct fv_desc {int fv_devcs; int fv_stat; int fv_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fv_softc*,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_7 (struct ifnet*,int ,int *) ;
 int FUNC_8 (int *,int,int ) ;

__attribute__((used)) static void
FUNC_9(struct fv_softc *VAR_8)
{
 uint16_t VAR_9[(VAR_4+1)/2];
 struct fv_desc *VAR_10;
 int VAR_11;
 struct ifnet *VAR_12;
 uint16_t *VAR_13;

 VAR_12 = VAR_8->fv_ifp;

 VAR_11 = VAR_8->fv_cdata.fv_tx_prod;
 FUNC_3(VAR_8->fv_cdata.fv_tx_prod, VAR_6);
 VAR_8->fv_cdata.fv_tx_cnt++;
 VAR_10 = &VAR_8->fv_rdata.fv_tx_ring[VAR_11];
 VAR_13 = (uint16_t *)VAR_8->fv_cdata.fv_sf_buff;
 FUNC_8(VAR_13, 0xff, VAR_5);

 VAR_10->fv_addr = VAR_8->fv_rdata.fv_sf_paddr;
 VAR_10->fv_devcs = VAR_0 | FUNC_2(VAR_5);

 VAR_11 = FUNC_7(VAR_12, VAR_7, VAR_13) * 6;

 FUNC_5(FUNC_4(VAR_8->fv_ifp), VAR_9, VAR_4);
 VAR_13[90] = VAR_13[91] = VAR_9[0];
 VAR_13[92] = VAR_13[93] = VAR_9[1];
 VAR_13[94] = VAR_13[95] = VAR_9[2];

 VAR_10->fv_stat = VAR_1;
 FUNC_6(VAR_8->fv_cdata.fv_tx_ring_tag,
     VAR_8->fv_cdata.fv_tx_ring_map, VAR_2);
 FUNC_6(VAR_8->fv_cdata.fv_sf_tag,
     VAR_8->fv_cdata.fv_sf_buff_map, VAR_2);
 FUNC_0(VAR_8, VAR_3, 0xFFFFFFFF);
 FUNC_1(10000);
}
