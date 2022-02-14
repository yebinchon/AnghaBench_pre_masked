
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_chanpkt_hdr {int dummy; } ;
struct hn_softc {int hn_ifp; } ;
struct hn_nvs_hdr {scalar_t__ nvs_type; } ;


 scalar_t__ VAR_0 ;
 struct hn_nvs_hdr* FUNC_0 (struct vmbus_chanpkt_hdr const*) ;
 int FUNC_1 (struct vmbus_chanpkt_hdr const*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_3(struct hn_softc *VAR_1, const struct vmbus_chanpkt_hdr *VAR_2)
{
 const struct hn_nvs_hdr *VAR_3;

 if (FUNC_1(VAR_2) < sizeof(*VAR_3)) {
  FUNC_2(VAR_1->hn_ifp, "invalid nvs notify\n");
  return;
 }
 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->nvs_type == VAR_0) {

  return;
 }
 FUNC_2(VAR_1->hn_ifp, "got notify, nvs type %u\n", VAR_3->nvs_type);
}
