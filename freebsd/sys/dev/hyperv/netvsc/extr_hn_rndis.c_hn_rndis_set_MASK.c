
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct vmbus_xact {int dummy; } ;
struct rndis_set_req {size_t rm_len; size_t rm_infobuflen; int rm_infobufoffset; void* rm_oid; void* rm_rid; int rm_type; } ;
struct rndis_set_comp {scalar_t__ rm_status; } ;
struct hn_softc {int hn_ifp; int hn_xact; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_1 (struct hn_softc*) ;
 struct rndis_set_comp* FUNC_2 (struct hn_softc*,struct vmbus_xact*,void*,size_t,size_t*,int ) ;
 int FUNC_3 (int ,char*,void*,...) ;
 int FUNC_4 (struct rndis_set_req*,void const*,size_t) ;
 struct vmbus_xact* FUNC_5 (int ,size_t) ;
 int FUNC_6 (struct vmbus_xact*) ;
 struct rndis_set_req* FUNC_7 (struct vmbus_xact*) ;

__attribute__((used)) static int
FUNC_8(struct hn_softc *VAR_6, uint32_t VAR_7, const void *VAR_8, size_t VAR_9)
{
 struct rndis_set_req *VAR_10;
 const struct rndis_set_comp *VAR_11;
 struct vmbus_xact *VAR_12;
 size_t VAR_13, VAR_14;
 uint32_t VAR_15;
 int VAR_16;

 FUNC_0(VAR_9 > 0, ("invalid dlen %zu", VAR_9));

 VAR_13 = sizeof(*VAR_10) + VAR_9;
 VAR_12 = FUNC_5(VAR_6->hn_xact, VAR_13);
 if (VAR_12 == ((void*)0)) {
  FUNC_3(VAR_6->hn_ifp, "no xact for RNDIS set 0x%08x\n", VAR_7);
  return (VAR_1);
 }
 VAR_15 = FUNC_1(VAR_6);
 VAR_10 = FUNC_7(VAR_12);
 VAR_10->rm_type = VAR_3;
 VAR_10->rm_len = VAR_13;
 VAR_10->rm_rid = VAR_15;
 VAR_10->rm_oid = VAR_7;
 VAR_10->rm_infobuflen = VAR_9;
 VAR_10->rm_infobufoffset = VAR_4;

 FUNC_4(VAR_10 + 1, VAR_8, VAR_9);

 VAR_14 = sizeof(*VAR_11);
 VAR_11 = FUNC_2(VAR_6, VAR_12, VAR_15, VAR_13, &VAR_14,
     VAR_2);
 if (VAR_11 == ((void*)0)) {
  FUNC_3(VAR_6->hn_ifp, "exec RNDIS set 0x%08x failed\n", VAR_7);
  VAR_16 = VAR_0;
  goto done;
 }

 if (VAR_11->rm_status != VAR_5) {
  FUNC_3(VAR_6->hn_ifp, "RNDIS set 0x%08x failed: "
      "status 0x%08x\n", VAR_7, VAR_11->rm_status);
  VAR_16 = VAR_0;
  goto done;
 }
 VAR_16 = 0;
done:
 FUNC_6(VAR_12);
 return (VAR_16);
}
