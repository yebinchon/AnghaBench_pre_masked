
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vi_info {int viid; int rss_base; int vin; int vfvld; int rss_size; } ;
struct port_info {int port_id; int tx_chan; int lport; int rx_e_chan_map; int mps_bg_map; struct vi_info* vi; } ;
struct TYPE_3__ {int r_caps; } ;
struct TYPE_4__ {int portvec; TYPE_1__ vfres; } ;
struct adapter {int flags; TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct port_info* FUNC_3 (struct adapter*,int) ;
 int FUNC_4 (struct adapter*,int,int,int,int,int,int *,int *,int *,int *) ;
 int FUNC_5 (struct adapter*,int) ;
 int FUNC_6 (struct adapter*,int) ;
 int FUNC_7 (struct port_info*,int *) ;
 int FUNC_8 (struct adapter*,int,int,int,int,int*,int*) ;
 int FUNC_9 (struct port_info*) ;

int FUNC_10(struct adapter *VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 u8 VAR_9[6];
 int VAR_10, VAR_11, VAR_12;
 struct port_info *VAR_13 = FUNC_3(VAR_4, VAR_8);
 u32 VAR_14, VAR_15;
 struct vi_info *VAR_16 = &VAR_13->vi[0];

 for (VAR_11 = 0, VAR_12 = -1; VAR_11 <= VAR_13->port_id; VAR_11++) {
  do {
   VAR_12++;
  } while ((VAR_4->params.portvec & (1 << VAR_12)) == 0);
 }

 VAR_13->tx_chan = VAR_12;
 VAR_13->mps_bg_map = FUNC_5(VAR_4, VAR_12);
 VAR_13->rx_e_chan_map = FUNC_6(VAR_4, VAR_12);
 VAR_13->lport = VAR_12;

 if (!(VAR_4->flags & VAR_3) ||
     VAR_4->params.vfres.r_caps & VAR_0) {
   FUNC_9(VAR_13);
 }

 VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_12, VAR_6, VAR_7, 1, VAR_9, &VAR_16->rss_size,
     &VAR_16->vfvld, &VAR_16->vin);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_16->viid = VAR_10;
 FUNC_7(VAR_13, VAR_9);

 VAR_14 = FUNC_0(VAR_1) |
     FUNC_1(VAR_2) |
     FUNC_2(VAR_16->viid);
 VAR_10 = FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, 1, &VAR_14, &VAR_15);
 if (VAR_10)
  VAR_16->rss_base = 0xffff;
 else {

  VAR_16->rss_base = VAR_15 & 0xffff;
 }

 return 0;
}
