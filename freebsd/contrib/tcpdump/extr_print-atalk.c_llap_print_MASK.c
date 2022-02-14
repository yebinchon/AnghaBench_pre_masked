
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
struct atShortDDP {int srcSkt; int type; int dstSkt; } ;
struct atDDP {int srcSkt; int srcNode; int type; int dstSkt; int dstNode; int dstNet; int srcNet; } ;
struct LAP {int type; int dst; int src; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,int const*,int,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int const*,int) ;




u_int
FUNC_7(netdissect_options *VAR_2,
           register const u_char *VAR_3, u_int VAR_4)
{
 register const struct LAP *VAR_5;
 register const struct atDDP *VAR_6;
 register const struct atShortDDP *VAR_7;
 u_short VAR_8;
 u_int VAR_9;

 if (VAR_4 < sizeof(*VAR_5)) {
  FUNC_1((VAR_2, " [|llap %u]", VAR_4));
  return (VAR_4);
 }
 if (!FUNC_2(*VAR_3, sizeof(*VAR_5))) {
  FUNC_1((VAR_2, " [|llap]"));
  return (0);
 }
 VAR_5 = (const struct LAP *)VAR_3;
 VAR_3 += sizeof(*VAR_5);
 VAR_4 -= sizeof(*VAR_5);
 VAR_9 = sizeof(*VAR_5);
 switch (VAR_5->type) {

 case 128:
  if (VAR_4 < VAR_0) {
   FUNC_1((VAR_2, " [|sddp %u]", VAR_4));
   return (VAR_4);
  }
  if (!FUNC_2(*VAR_3, VAR_0)) {
   FUNC_1((VAR_2, " [|sddp]"));
   return (0);
  }
  VAR_7 = (const struct atShortDDP *)VAR_3;
  FUNC_1((VAR_2, "%s.%s",
      FUNC_3(VAR_2, 0, VAR_5->src), FUNC_5(VAR_2, VAR_7->srcSkt)));
  FUNC_1((VAR_2, " > %s.%s:",
      FUNC_3(VAR_2, 0, VAR_5->dst), FUNC_5(VAR_2, VAR_7->dstSkt)));
  VAR_3 += VAR_0;
  VAR_4 -= VAR_0;
  VAR_9 += VAR_0;
  FUNC_4(VAR_2, VAR_3, VAR_4, VAR_7->type, 0, VAR_5->src, VAR_7->srcSkt);
  break;

 case 130:
  if (VAR_4 < VAR_1) {
   FUNC_1((VAR_2, " [|ddp %u]", VAR_4));
   return (VAR_4);
  }
  if (!FUNC_2(*VAR_3, VAR_1)) {
   FUNC_1((VAR_2, " [|ddp]"));
   return (0);
  }
  VAR_6 = (const struct atDDP *)VAR_3;
  VAR_8 = FUNC_0(&VAR_6->srcNet);
  FUNC_1((VAR_2, "%s.%s", FUNC_3(VAR_2, VAR_8, VAR_6->srcNode),
      FUNC_5(VAR_2, VAR_6->srcSkt)));
  FUNC_1((VAR_2, " > %s.%s:",
      FUNC_3(VAR_2, FUNC_0(&VAR_6->dstNet), VAR_6->dstNode),
      FUNC_5(VAR_2, VAR_6->dstSkt)));
  VAR_3 += VAR_1;
  VAR_4 -= VAR_1;
  VAR_9 += VAR_1;
  FUNC_4(VAR_2, VAR_3, VAR_4, VAR_6->type, VAR_8, VAR_6->srcNode, VAR_6->srcSkt);
  break;







 default:
  FUNC_1((VAR_2, "%d > %d at-lap#%d %u",
      VAR_5->src, VAR_5->dst, VAR_5->type, VAR_4));
  break;
 }
 return (VAR_9);
}
