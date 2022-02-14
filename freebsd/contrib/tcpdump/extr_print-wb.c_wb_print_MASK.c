
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct pkt_rreq {int dummy; } ;
struct pkt_rrep {int dummy; } ;
struct pkt_preq {int dummy; } ;
struct pkt_prep {int dummy; } ;
struct pkt_id {int dummy; } ;
struct pkt_hdr {int ph_type; scalar_t__ ph_flags; } ;
struct pkt_dop {int dummy; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pkt_hdr const) ;







 int VAR_0 ;
 int FUNC_2 (int *,struct pkt_dop const*,int) ;
 int FUNC_3 (int *,struct pkt_id const*,int) ;
 int FUNC_4 (int *,struct pkt_prep const*,int) ;
 int FUNC_5 (int *,struct pkt_preq const*,int) ;
 int FUNC_6 (int *,struct pkt_rrep const*,int) ;
 int FUNC_7 (int *,struct pkt_rreq const*,int) ;

void
FUNC_8(netdissect_options *VAR_1,
         register const void *VAR_2, register u_int VAR_3)
{
 register const struct pkt_hdr *VAR_4;

 VAR_4 = (const struct pkt_hdr *)VAR_2;
 if (VAR_3 < sizeof(*VAR_4) || !FUNC_1(*VAR_4)) {
  FUNC_0((VAR_1, "%s", VAR_0));
  return;
 }
 VAR_3 -= sizeof(*VAR_4);

 if (VAR_4->ph_flags)
  FUNC_0((VAR_1, "*"));
 switch (VAR_4->ph_type) {

 case 132:
  FUNC_0((VAR_1, " wb-kill"));
  return;

 case 133:
  if (FUNC_3(VAR_1, (const struct pkt_id *)(VAR_4 + 1), VAR_3) >= 0)
   return;
  FUNC_0((VAR_1, "%s", VAR_0));
  break;

 case 128:
  if (FUNC_7(VAR_1, (const struct pkt_rreq *)(VAR_4 + 1), VAR_3) >= 0)
   return;
  FUNC_0((VAR_1, "%s", VAR_0));
  break;

 case 129:
  if (FUNC_6(VAR_1, (const struct pkt_rrep *)(VAR_4 + 1), VAR_3) >= 0)
   return;
  FUNC_0((VAR_1, "%s", VAR_0));
  break;

 case 134:
  if (FUNC_2(VAR_1, (const struct pkt_dop *)(VAR_4 + 1), VAR_3) >= 0)
   return;
  FUNC_0((VAR_1, "%s", VAR_0));
  break;

 case 130:
  if (FUNC_5(VAR_1, (const struct pkt_preq *)(VAR_4 + 1), VAR_3) >= 0)
   return;
  FUNC_0((VAR_1, "%s", VAR_0));
  break;

 case 131:
  if (FUNC_4(VAR_1, (const struct pkt_prep *)(VAR_4 + 1), VAR_3) >= 0)
   return;
  FUNC_0((VAR_1, "%s", VAR_0));
  break;

 default:
  FUNC_0((VAR_1, " wb-%d!", VAR_4->ph_type));
  return;
 }
}
