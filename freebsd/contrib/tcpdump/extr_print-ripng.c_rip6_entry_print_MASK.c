
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netinfo6 {int rip6_metric; scalar_t__ rip6_tag; int rip6_plen; int rip6_dest; } ;
typedef int netdissect_options ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int
FUNC_3(netdissect_options *VAR_0, register const struct netinfo6 *VAR_1, int VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_1((VAR_0, "%s/%d", FUNC_2(VAR_0, &VAR_1->rip6_dest), VAR_1->rip6_plen));
 if (VAR_1->rip6_tag)
  VAR_3 += FUNC_1((VAR_0, " [%d]", FUNC_0(&VAR_1->rip6_tag)));
 if (VAR_2)
  VAR_3 += FUNC_1((VAR_0, " (%d)", VAR_1->rip6_metric));
 return VAR_3;
}
