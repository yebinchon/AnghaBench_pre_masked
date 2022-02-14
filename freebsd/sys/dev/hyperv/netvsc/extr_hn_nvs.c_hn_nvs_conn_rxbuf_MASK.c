
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vmbus_xact {int dummy; } ;
struct TYPE_2__ {int hv_paddr; } ;
struct hn_softc {scalar_t__ hn_nvs_ver; int hn_flags; int hn_ifp; int hn_rxbuf_gpadl; int hn_xact; TYPE_1__ hn_rxbuf_dma; int hn_prichan; } ;
struct hn_nvs_rxbuf_connresp {int nvs_status; } ;
struct hn_nvs_rxbuf_conn {int nvs_sig; int nvs_gpadl; int nvs_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hn_softc*) ;
 struct hn_nvs_rxbuf_connresp* FUNC_1 (struct hn_softc*,struct vmbus_xact*,struct hn_nvs_rxbuf_conn*,int,size_t*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int ,int,int *) ;
 struct vmbus_xact* FUNC_4 (int ,int) ;
 int FUNC_5 (struct vmbus_xact*) ;
 struct hn_nvs_rxbuf_conn* FUNC_6 (struct vmbus_xact*) ;

__attribute__((used)) static int
FUNC_7(struct hn_softc *VAR_10)
{
 struct vmbus_xact *VAR_11 = ((void*)0);
 struct hn_nvs_rxbuf_conn *VAR_12;
 const struct hn_nvs_rxbuf_connresp *VAR_13;
 size_t VAR_14;
 uint32_t VAR_15;
 int VAR_16, VAR_17;




 if (VAR_10->hn_nvs_ver <= VAR_7)
  VAR_17 = VAR_9;
 else
  VAR_17 = VAR_8;
 VAR_16 = FUNC_3(VAR_10->hn_prichan,
     VAR_10->hn_rxbuf_dma.hv_paddr, VAR_17, &VAR_10->hn_rxbuf_gpadl);
 if (VAR_16) {
  FUNC_2(VAR_10->hn_ifp, "rxbuf gpadl conn failed: %d\n",
      VAR_16);
  goto cleanup;
 }





 VAR_11 = FUNC_4(VAR_10->hn_xact, sizeof(*VAR_12));
 if (VAR_11 == ((void*)0)) {
  FUNC_2(VAR_10->hn_ifp, "no xact for nvs rxbuf conn\n");
  VAR_16 = VAR_1;
  goto cleanup;
 }
 VAR_12 = FUNC_6(VAR_11);
 VAR_12->nvs_type = VAR_5;
 VAR_12->nvs_gpadl = VAR_10->hn_rxbuf_gpadl;
 VAR_12->nvs_sig = VAR_3;

 VAR_14 = sizeof(*VAR_13);
 VAR_13 = FUNC_1(VAR_10, VAR_11, VAR_12, sizeof(*VAR_12), &VAR_14,
     VAR_6);
 if (VAR_13 == ((void*)0)) {
  FUNC_2(VAR_10->hn_ifp, "exec nvs rxbuf conn failed\n");
  VAR_16 = VAR_0;
  goto cleanup;
 }

 VAR_15 = VAR_13->nvs_status;
 FUNC_5(VAR_11);
 VAR_11 = ((void*)0);

 if (VAR_15 != VAR_4) {
  FUNC_2(VAR_10->hn_ifp, "nvs rxbuf conn failed: %x\n", VAR_15);
  VAR_16 = VAR_0;
  goto cleanup;
 }
 VAR_10->hn_flags |= VAR_2;

 return (0);

cleanup:
 if (VAR_11 != ((void*)0))
  FUNC_5(VAR_11);
 FUNC_0(VAR_10);
 return (VAR_16);
}
