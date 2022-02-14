
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct ipxHdr {int length; int dstSkt; int dstNode; int dstNet; int srcSkt; int srcNode; int srcNet; } ;
struct TYPE_5__ {int ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*,struct ipxHdr const*,int const*,int) ;
 int FUNC_5 (int ,int ) ;

void
FUNC_6(netdissect_options *VAR_1, const u_char *VAR_2, u_int VAR_3)
{
 const struct ipxHdr *VAR_4 = (const struct ipxHdr *)VAR_2;

 if (!VAR_1->ndo_eflag)
  FUNC_2((VAR_1, "IPX "));

 FUNC_3(VAR_4->srcSkt);
 FUNC_2((VAR_1, "%s.%04x > ",
       FUNC_5(FUNC_1(VAR_4->srcNet), VAR_4->srcNode),
       FUNC_0(&VAR_4->srcSkt)));

 FUNC_2((VAR_1, "%s.%04x: ",
       FUNC_5(FUNC_1(VAR_4->dstNet), VAR_4->dstNode),
       FUNC_0(&VAR_4->dstSkt)));


 FUNC_3(VAR_4->length);
 VAR_3 = FUNC_0(&VAR_4->length);

 FUNC_4(VAR_1, VAR_4, VAR_2 + VAR_0, VAR_3 - VAR_0);
 return;
trunc:
 FUNC_2((VAR_1, "[|ipx %d]", VAR_3));
}
