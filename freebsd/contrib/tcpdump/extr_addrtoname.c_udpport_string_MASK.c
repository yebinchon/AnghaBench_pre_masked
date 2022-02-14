
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_short ;
struct hnamemem {int addr; char const* name; struct hnamemem* nxt; } ;
struct TYPE_5__ {int (* ndo_error ) (TYPE_1__*,char*) ;} ;
typedef TYPE_1__ netdissect_options ;
typedef int buf ;


 int VAR_0 ;
 struct hnamemem* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int,char*,int) ;
 char const* FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 struct hnamemem* VAR_1 ;

const char *
FUNC_4(netdissect_options *VAR_2, register u_short VAR_3)
{
 register struct hnamemem *VAR_4;
 register uint32_t VAR_5 = VAR_3;
 char VAR_6[sizeof("00000")];

 for (VAR_4 = &VAR_1[VAR_5 & (VAR_0-1)]; VAR_4->nxt; VAR_4 = VAR_4->nxt)
  if (VAR_4->addr == VAR_5)
   return (VAR_4->name);

 VAR_4->addr = VAR_5;
 VAR_4->nxt = FUNC_0(VAR_2);

 (void)FUNC_1(VAR_6, sizeof(VAR_6), "%u", VAR_5);
 VAR_4->name = FUNC_2(VAR_6);
 if (VAR_4->name == ((void*)0))
  (*VAR_2->ndo_error)(VAR_2, "udpport_string: strdup(buf)");
 return (VAR_4->name);
}
