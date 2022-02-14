
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


 int VAR_0 ;
 int FUNC_0 (int) ;
 void** VAR_1 ;
 struct hnamemem* VAR_2 ;
 struct hnamemem* FUNC_1 (TYPE_1__*) ;
 char const* FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;

const char *
FUNC_4(netdissect_options *VAR_3, u_short VAR_4)
{
 register char *VAR_5;
 register struct hnamemem *VAR_6;
 register uint32_t VAR_7 = VAR_4;
 char VAR_8[sizeof("0000")];

 for (VAR_6 = &VAR_2[VAR_7 & (VAR_0-1)]; VAR_6->nxt; VAR_6 = VAR_6->nxt)
  if (VAR_6->addr == VAR_7)
   return (VAR_6->name);

 VAR_6->addr = VAR_7;
 VAR_6->nxt = FUNC_1(VAR_3);

 VAR_5 = VAR_8;
 FUNC_0(VAR_4);
 *VAR_5++ = VAR_1[VAR_4 >> 12 & 0xf];
 *VAR_5++ = VAR_1[VAR_4 >> 8 & 0xf];
 *VAR_5++ = VAR_1[VAR_4 >> 4 & 0xf];
 *VAR_5++ = VAR_1[VAR_4 & 0xf];
 *VAR_5++ = '\0';
 VAR_6->name = FUNC_2(VAR_8);
 if (VAR_6->name == ((void*)0))
  (*VAR_3->ndo_error)(VAR_3, "ipxsap_string: strdup(buf)");
 return (VAR_6->name);
}
