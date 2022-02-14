
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rndis_msghdr {int rm_type; } ;
struct rndis_comp_hdr {int rm_rid; } ;
struct hn_softc {int hn_ifp; int hn_xact; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;





 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,struct rndis_comp_hdr const*,int) ;

void
FUNC_3(struct hn_softc *VAR_1, const void *VAR_2, int VAR_3)
{
 const struct rndis_comp_hdr *VAR_4;
 const struct rndis_msghdr *VAR_5;

 FUNC_0(VAR_3 >= sizeof(*VAR_5), ("invalid RNDIS msg\n"));
 VAR_5 = VAR_2;

 switch (VAR_5->rm_type) {
 case 132:
 case 130:
 case 128:
 case 131:
  if (VAR_3 < sizeof(*VAR_4)) {
   FUNC_1(VAR_1->hn_ifp, "invalid RNDIS cmplt\n");
   return;
  }
  VAR_4 = VAR_2;

  FUNC_0(VAR_4->rm_rid > VAR_0,
      ("invalid RNDIS rid 0x%08x\n", VAR_4->rm_rid));
  FUNC_2(VAR_1->hn_xact, VAR_4, VAR_3);
  break;

 case 129:







  FUNC_1(VAR_1->hn_ifp, "RESET cmplt received\n");
  break;

 default:
  FUNC_1(VAR_1->hn_ifp, "unknown RNDIS msg 0x%x\n",
      VAR_5->rm_type);
  break;
 }
}
