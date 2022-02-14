
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_short ;
struct hnamemem {int addr; char const* name; struct hnamemem* nxt; } ;
struct TYPE_6__ {scalar_t__ ndo_nflag; } ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 struct hnamemem* VAR_1 ;
 char const* FUNC_0 (TYPE_1__*,int) ;
 char const* FUNC_1 (TYPE_1__*,int) ;
 struct hnamemem* FUNC_2 (TYPE_1__*) ;

const char *
FUNC_3(netdissect_options *VAR_2, u_short VAR_3)
{
 register struct hnamemem *VAR_4;

 for (VAR_4 = &VAR_1[VAR_3 & (VAR_0-1)]; VAR_4->nxt != ((void*)0);
      VAR_4 = VAR_4->nxt)
  if (VAR_4->addr == VAR_3)
   return (VAR_4->name);

 VAR_4->addr = VAR_3;
 VAR_4->nxt = FUNC_2(VAR_2);
 if (VAR_2->ndo_nflag)
  VAR_4->name = FUNC_1(VAR_2, VAR_3);
 else
  VAR_4->name = FUNC_0(VAR_2, VAR_3);

 return(VAR_4->name);
}
