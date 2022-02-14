
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_char ;
struct ipcomp {int comp_cpi; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ipcomp const) ;

void
FUNC_3(netdissect_options *VAR_0, register const u_char *VAR_1)
{
 register const struct ipcomp *VAR_2;
 uint16_t VAR_3;

 VAR_2 = (const struct ipcomp *)VAR_1;
 FUNC_2(*VAR_2);
 VAR_3 = FUNC_0(&VAR_2->comp_cpi);

 FUNC_1((VAR_0, "IPComp(cpi=0x%04x)", VAR_3));
 return;

trunc:
 FUNC_1((VAR_0, "[|IPCOMP]"));
 return;
}
