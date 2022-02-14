
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct mld6_hdr {int mld6_addr; int mld6_maxdelay; } ;
struct TYPE_5__ {int * ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_0, const u_char *VAR_1)
{
 const struct mld6_hdr *VAR_2 = (const struct mld6_hdr *)VAR_1;
 const u_char *VAR_3;


 VAR_3 = VAR_0->ndo_snapend;

 if ((const u_char *)VAR_2 + sizeof(*VAR_2) > VAR_3)
  return;

 FUNC_1((VAR_0,"max resp delay: %d ", FUNC_0(&VAR_2->mld6_maxdelay)));
 FUNC_1((VAR_0,"addr: %s", FUNC_2(VAR_0, &VAR_2->mld6_addr)));
}
