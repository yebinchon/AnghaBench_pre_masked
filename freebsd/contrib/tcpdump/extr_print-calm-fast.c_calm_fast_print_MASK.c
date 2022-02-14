
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct lladdr_info {int addr; int (* addr_string ) (TYPE_1__*,int ) ;} ;
struct TYPE_5__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void
FUNC_4(netdissect_options *VAR_0, const u_char *VAR_1, u_int VAR_2, const struct lladdr_info *VAR_3)
{
 int VAR_4;
 int VAR_5;

 FUNC_2(*VAR_1, 2);
 if (VAR_2 < 2)
  goto trunc;
 VAR_4 = VAR_1[0];
 VAR_5 = VAR_1[1];
 VAR_2 -= 2;
 VAR_1 += 2;

 FUNC_1((VAR_0, "CALM FAST"));
 if (VAR_3 != ((void*)0))
  FUNC_1((VAR_0, " src:%s", (VAR_3->addr_string)(VAR_0, VAR_3->addr)));
 FUNC_1((VAR_0, "; "));
 FUNC_1((VAR_0, "SrcNwref:%d; ", VAR_4));
 FUNC_1((VAR_0, "DstNwref:%d; ", VAR_5));

 if (VAR_0->ndo_vflag)
  FUNC_0(VAR_1, VAR_2);
 return;

trunc:
 FUNC_1((VAR_0, "[|calm fast]"));
 return;
}
