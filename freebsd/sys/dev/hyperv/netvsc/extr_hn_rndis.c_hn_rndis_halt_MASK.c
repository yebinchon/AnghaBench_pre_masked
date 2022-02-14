
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_xact {int dummy; } ;
struct rndis_halt_req {int rm_len; int rm_rid; int rm_type; } ;
struct hn_softc {int hn_ifp; int hn_xact; } ;
struct hn_nvs_sendctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hn_nvs_sendctx*,int ,struct vmbus_xact*) ;
 int VAR_3 ;
 int FUNC_1 (struct hn_softc*) ;
 int FUNC_2 (struct hn_softc*,struct vmbus_xact*,int,struct hn_nvs_sendctx*,size_t*) ;
 int FUNC_3 (int ,char*) ;
 struct vmbus_xact* FUNC_4 (int ,int) ;
 int FUNC_5 (struct vmbus_xact*) ;
 struct rndis_halt_req* FUNC_6 (struct vmbus_xact*) ;

__attribute__((used)) static int
FUNC_7(struct hn_softc *VAR_4)
{
 struct vmbus_xact *VAR_5;
 struct rndis_halt_req *VAR_6;
 struct hn_nvs_sendctx VAR_7;
 size_t VAR_8;

 VAR_5 = FUNC_4(VAR_4->hn_xact, sizeof(*VAR_6));
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_4->hn_ifp, "no xact for RNDIS halt\n");
  return (VAR_0);
 }
 VAR_6 = FUNC_6(VAR_5);
 VAR_6->rm_type = VAR_1;
 VAR_6->rm_len = sizeof(*VAR_6);
 VAR_6->rm_rid = FUNC_1(VAR_4);


 FUNC_0(&VAR_7, VAR_3, VAR_5);
 FUNC_2(VAR_4, VAR_5, sizeof(*VAR_6), &VAR_7, &VAR_8);

 FUNC_5(VAR_5);
 if (VAR_2)
  FUNC_3(VAR_4->hn_ifp, "RNDIS halt done\n");
 return (0);
}
