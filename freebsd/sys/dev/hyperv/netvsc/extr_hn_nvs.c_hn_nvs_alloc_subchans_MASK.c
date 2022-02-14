
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmbus_xact {int dummy; } ;
struct hn_softc {int hn_ifp; int hn_xact; } ;
struct hn_nvs_subch_resp {scalar_t__ nvs_status; int nvs_nsubch; } ;
struct hn_nvs_subch_req {int nvs_nsubch; int nvs_op; int nvs_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 struct hn_nvs_subch_resp* FUNC_1 (struct hn_softc*,struct vmbus_xact*,struct hn_nvs_subch_req*,int,size_t*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 struct vmbus_xact* FUNC_3 (int ,int) ;
 int FUNC_4 (struct vmbus_xact*) ;
 struct hn_nvs_subch_req* FUNC_5 (struct vmbus_xact*) ;

int
FUNC_6(struct hn_softc *VAR_6, int *VAR_7)
{
 struct vmbus_xact *VAR_8;
 struct hn_nvs_subch_req *VAR_9;
 const struct hn_nvs_subch_resp *VAR_10;
 int VAR_11, VAR_12;
 uint32_t VAR_13;
 size_t VAR_14;

 VAR_12 = *VAR_7;
 FUNC_0(VAR_12 > 0, ("invalid # of sub-channels %d", VAR_12));

 VAR_8 = FUNC_3(VAR_6->hn_xact, sizeof(*VAR_9));
 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_6->hn_ifp, "no xact for nvs subch alloc\n");
  return (VAR_1);
 }
 VAR_9 = FUNC_5(VAR_8);
 VAR_9->nvs_type = VAR_4;
 VAR_9->nvs_op = VAR_3;
 VAR_9->nvs_nsubch = VAR_12;

 VAR_14 = sizeof(*VAR_10);
 VAR_10 = FUNC_1(VAR_6, VAR_8, VAR_9, sizeof(*VAR_9), &VAR_14,
     VAR_5);
 if (VAR_10 == ((void*)0)) {
  FUNC_2(VAR_6->hn_ifp, "exec nvs subch alloc failed\n");
  VAR_11 = VAR_0;
  goto done;
 }
 if (VAR_10->nvs_status != VAR_2) {
  FUNC_2(VAR_6->hn_ifp, "nvs subch alloc failed: %x\n",
      VAR_10->nvs_status);
  VAR_11 = VAR_0;
  goto done;
 }

 VAR_13 = VAR_10->nvs_nsubch;
 if (VAR_13 > VAR_12) {
  FUNC_2(VAR_6->hn_ifp, "%u subchans are allocated, "
      "requested %d\n", VAR_13, VAR_12);
  VAR_13 = VAR_12;
 }
 *VAR_7 = VAR_13;
 VAR_11 = 0;
done:
 FUNC_4(VAR_8);
 return (VAR_11);
}
