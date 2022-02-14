
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_short ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct atDDP {int srcSkt; int srcNode; int type; int dstSkt; int dstNode; int dstNet; int srcNet; } ;
struct TYPE_7__ {int ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (TYPE_1__*,int const*,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

void
FUNC_6(netdissect_options *VAR_1,
            register const u_char *VAR_2, u_int VAR_3)
{
 register const struct atDDP *VAR_4;
 u_short VAR_5;

        if(!VAR_1->ndo_eflag)
            FUNC_1((VAR_1, "AT "));

 if (VAR_3 < VAR_0) {
  FUNC_1((VAR_1, " [|ddp %u]", VAR_3));
  return;
 }
 if (!FUNC_2(*VAR_2, VAR_0)) {
  FUNC_1((VAR_1, " [|ddp]"));
  return;
 }
 VAR_4 = (const struct atDDP *)VAR_2;
 VAR_5 = FUNC_0(&VAR_4->srcNet);
 FUNC_1((VAR_1, "%s.%s", FUNC_3(VAR_1, VAR_5, VAR_4->srcNode),
        FUNC_5(VAR_1, VAR_4->srcSkt)));
 FUNC_1((VAR_1, " > %s.%s: ",
        FUNC_3(VAR_1, FUNC_0(&VAR_4->dstNet), VAR_4->dstNode),
        FUNC_5(VAR_1, VAR_4->dstSkt)));
 VAR_2 += VAR_0;
 VAR_3 -= VAR_0;
 FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4->type, VAR_5, VAR_4->srcNode, VAR_4->srcSkt);
}
