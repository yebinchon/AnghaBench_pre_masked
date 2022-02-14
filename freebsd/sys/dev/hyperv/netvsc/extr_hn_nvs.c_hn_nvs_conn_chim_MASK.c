
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_long ;
struct vmbus_xact {int dummy; } ;
struct TYPE_2__ {int hv_paddr; } ;
struct hn_softc {int hn_chim_szmax; int hn_chim_cnt; int hn_chim_bmap_cnt; int hn_ifp; int hn_flags; int hn_chim_bmap; int hn_chim_gpadl; int hn_xact; TYPE_1__ hn_chim_dma; int hn_prichan; } ;
struct hn_nvs_chim_connresp {int nvs_status; int nvs_sectsz; } ;
struct hn_nvs_chim_conn {int nvs_sig; int nvs_gpadl; int nvs_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct hn_softc*) ;
 struct hn_nvs_chim_connresp* FUNC_1 (struct hn_softc*,struct vmbus_xact*,struct hn_nvs_chim_conn*,int,size_t*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int ,int ,int,int *) ;
 struct vmbus_xact* FUNC_5 (int ,int) ;
 int FUNC_6 (struct vmbus_xact*) ;
 struct hn_nvs_chim_conn* FUNC_7 (struct vmbus_xact*) ;

__attribute__((used)) static int
FUNC_8(struct hn_softc *VAR_13)
{
 struct vmbus_xact *VAR_14 = ((void*)0);
 struct hn_nvs_chim_conn *VAR_15;
 const struct hn_nvs_chim_connresp *VAR_16;
 size_t VAR_17;
 uint32_t VAR_18, VAR_19;
 int VAR_20;
 VAR_20 = FUNC_4(VAR_13->hn_prichan,
       VAR_13->hn_chim_dma.hv_paddr, VAR_2, &VAR_13->hn_chim_gpadl);
 if (VAR_20) {
  FUNC_2(VAR_13->hn_ifp, "chim gpadl conn failed: %d\n", VAR_20);
  goto cleanup;
 }





 VAR_14 = FUNC_5(VAR_13->hn_xact, sizeof(*VAR_15));
 if (VAR_14 == ((void*)0)) {
  FUNC_2(VAR_13->hn_ifp, "no xact for nvs chim conn\n");
  VAR_20 = VAR_1;
  goto cleanup;
 }
 VAR_15 = FUNC_7(VAR_14);
 VAR_15->nvs_type = VAR_6;
 VAR_15->nvs_gpadl = VAR_13->hn_chim_gpadl;
 VAR_15->nvs_sig = VAR_4;

 VAR_17 = sizeof(*VAR_16);
 VAR_16 = FUNC_1(VAR_13, VAR_14, VAR_15, sizeof(*VAR_15), &VAR_17,
     VAR_7);
 if (VAR_16 == ((void*)0)) {
  FUNC_2(VAR_13->hn_ifp, "exec nvs chim conn failed\n");
  VAR_20 = VAR_0;
  goto cleanup;
 }

 VAR_18 = VAR_16->nvs_status;
 VAR_19 = VAR_16->nvs_sectsz;
 FUNC_6(VAR_14);
 VAR_14 = ((void*)0);

 if (VAR_18 != VAR_5) {
  FUNC_2(VAR_13->hn_ifp, "nvs chim conn failed: %x\n", VAR_18);
  VAR_20 = VAR_0;
  goto cleanup;
 }
 if (VAR_19 == 0 || VAR_19 % sizeof(uint32_t) != 0) {



  if (VAR_19 == 0) {
   FUNC_2(VAR_13->hn_ifp, "zero chimney sending buffer "
       "section size\n");
  } else {
   FUNC_2(VAR_13->hn_ifp, "misaligned chimney sending "
       "buffers, section size: %u\n", VAR_19);
  }
  VAR_13->hn_chim_szmax = 0;
  VAR_13->hn_chim_cnt = 0;
  VAR_13->hn_flags |= VAR_3;
  return (0);
 }

 VAR_13->hn_chim_szmax = VAR_19;
 VAR_13->hn_chim_cnt = VAR_2 / VAR_13->hn_chim_szmax;
 if (VAR_2 % VAR_13->hn_chim_szmax != 0) {
  FUNC_2(VAR_13->hn_ifp, "chimney sending sections are "
      "not properly aligned\n");
 }
 if (VAR_13->hn_chim_cnt % VAR_8 != 0) {
  FUNC_2(VAR_13->hn_ifp, "discard %d chimney sending sections\n",
      VAR_13->hn_chim_cnt % VAR_8);
 }

 VAR_13->hn_chim_bmap_cnt = VAR_13->hn_chim_cnt / VAR_8;
 VAR_13->hn_chim_bmap = FUNC_3(VAR_13->hn_chim_bmap_cnt * sizeof(u_long),
     VAR_9, VAR_10 | VAR_11);


 VAR_13->hn_flags |= VAR_3;
 if (VAR_12) {
  FUNC_2(VAR_13->hn_ifp, "chimney sending buffer %d/%d\n",
      VAR_13->hn_chim_szmax, VAR_13->hn_chim_cnt);
 }
 return (0);

cleanup:
 if (VAR_14 != ((void*)0))
  FUNC_6(VAR_14);
 FUNC_0(VAR_13);
 return (VAR_20);
}
