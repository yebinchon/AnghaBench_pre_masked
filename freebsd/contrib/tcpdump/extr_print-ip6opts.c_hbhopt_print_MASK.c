
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct ip6_hbh {int ip6h_len; } ;
struct TYPE_5__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ip6_hbh const,int) ;
 int FUNC_3 (TYPE_1__*,int const*,int) ;

int
FUNC_4(netdissect_options *VAR_0, register const u_char *VAR_1)
{
    const struct ip6_hbh *VAR_2 = (const struct ip6_hbh *)VAR_1;
    int VAR_3 = 0;

    FUNC_1(VAR_2->ip6h_len);
    VAR_3 = (int)((VAR_2->ip6h_len + 1) << 3);
    FUNC_2(*VAR_2, VAR_3);
    FUNC_0((VAR_0, "HBH "));
    if (VAR_0->ndo_vflag)
 FUNC_3(VAR_0, (const u_char *)VAR_2 + sizeof(*VAR_2), VAR_3 - sizeof(*VAR_2));

    return(VAR_3);

  trunc:
    FUNC_0((VAR_0, "[|HBH]"));
    return(-1);
}
