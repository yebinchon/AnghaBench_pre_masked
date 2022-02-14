
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct bnxt_softc {int hw_lro_ctx; struct sysctl_oid* hw_lro_oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,char*,int,struct bnxt_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_2(struct bnxt_softc *VAR_9)
{
 struct sysctl_oid *VAR_10 = VAR_9->hw_lro_oid;

 if (!VAR_10)
  return VAR_2;

 FUNC_0(&VAR_9->hw_lro_ctx, FUNC_1(VAR_10), VAR_3,
   "enable", VAR_1|VAR_0, VAR_9, 0,
   VAR_4, "A",
   "Enable or Disable HW LRO: 0 / 1");

 FUNC_0(&VAR_9->hw_lro_ctx, FUNC_1(VAR_10), VAR_3,
   "gro_mode", VAR_1|VAR_0, VAR_9, 0,
   VAR_8, "A",
   "Set mode: 1 = GRO mode, 0 = RSC mode");

 FUNC_0(&VAR_9->hw_lro_ctx, FUNC_1(VAR_10), VAR_3,
   "max_agg_segs", VAR_1|VAR_0, VAR_9, 0,
   VAR_5, "A",
   "Set Max Agg Seg Value (unit is Log2): "
   "0 (= 1 seg) / 1 (= 2 segs) /  ... / 31 (= 2^31 segs)");

        FUNC_0(&VAR_9->hw_lro_ctx, FUNC_1(VAR_10), VAR_3,
   "max_aggs", VAR_1|VAR_0, VAR_9, 0,
   VAR_6, "A",
   "Set Max Aggs Value (unit is Log2): "
   "0 (= 1 agg) / 1 (= 2 aggs) /  ... / 7 (= 2^7 segs)");

 FUNC_0(&VAR_9->hw_lro_ctx, FUNC_1(VAR_10), VAR_3,
   "min_agg_len", VAR_1|VAR_0, VAR_9, 0,
   VAR_7, "A",
   "Min Agg Len: 1 to 9000");

 return 0;
}
