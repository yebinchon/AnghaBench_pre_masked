
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
struct ipxHdr {int dstSkt; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;







 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int ) ;
 int FUNC_3 (int *,int const*,int ) ;
 int FUNC_4 (int *,int const*,int ) ;
 int FUNC_5 (int *,int const*,int ) ;

__attribute__((used)) static void
FUNC_6(netdissect_options *VAR_0, const struct ipxHdr *VAR_1, const u_char *VAR_2, u_int VAR_3)
{
    register u_short VAR_4;

    VAR_4 = FUNC_0(&VAR_1->dstSkt);
    switch (VAR_4) {
      case 132:
 FUNC_1((VAR_0, "ipx-ncp %d", VAR_3));
 break;
      case 128:
 FUNC_5(VAR_0, (const u_short *)VAR_2, VAR_3);
 break;
      case 129:
 FUNC_4(VAR_0, (const u_short *)VAR_2, VAR_3);
 break;
      case 131:
 FUNC_1((VAR_0, "ipx-netbios %d", VAR_3));



 break;
      case 134:
 FUNC_1((VAR_0, "ipx-diags %d", VAR_3));
 break;
      case 130:
 FUNC_1((VAR_0, "ipx-nwlink-dgm %d", VAR_3));



 break;
      case 133:
 FUNC_2(VAR_0, VAR_2, VAR_3);
 break;
      default:
 FUNC_1((VAR_0, "ipx-#%x %d", VAR_4, VAR_3));
 break;
    }
}
