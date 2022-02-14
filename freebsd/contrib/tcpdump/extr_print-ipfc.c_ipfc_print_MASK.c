
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct lladdr_info {void* addr_string; scalar_t__ addr; } ;
struct ipfc_header {int dummy; } ;
struct ether_header {int dummy; } ;
struct TYPE_6__ {int ndo_suppress_default_print; scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ FUNC_0 (struct ether_header*) ;
 scalar_t__ FUNC_1 (struct ether_header*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int const*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 void* VAR_1 ;
 int FUNC_4 (struct ipfc_header const*,char*,char*) ;
 int FUNC_5 (TYPE_1__*,struct ipfc_header const*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int const*,scalar_t__,scalar_t__,struct lladdr_info*,struct lladdr_info*) ;

__attribute__((used)) static u_int
FUNC_7(netdissect_options *VAR_2, const u_char *VAR_3, u_int VAR_4, u_int VAR_5)
{
 const struct ipfc_header *VAR_6 = (const struct ipfc_header *)VAR_3;
 struct ether_header VAR_7;
 struct lladdr_info VAR_8, VAR_9;
 int VAR_10;

 if (VAR_5 < VAR_0) {
  FUNC_3((VAR_2, "[|ipfc]"));
  return (VAR_5);
 }



 FUNC_4(VAR_6, (char *)FUNC_1(&VAR_7), (char *)FUNC_0(&VAR_7));

 if (VAR_2->ndo_eflag)
  FUNC_5(VAR_2, VAR_6, VAR_4, FUNC_1(&VAR_7), FUNC_0(&VAR_7));

 VAR_8.addr = FUNC_1(&VAR_7);
 VAR_8.addr_string = VAR_1;
 VAR_9.addr = FUNC_0(&VAR_7);
 VAR_9.addr_string = VAR_1;


 VAR_4 -= VAR_0;
 VAR_3 += VAR_0;
 VAR_5 -= VAR_0;


 VAR_10 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_8, &VAR_9);
 if (VAR_10 < 0) {




  if (!VAR_2->ndo_suppress_default_print)
   FUNC_2(VAR_3, VAR_5);
  VAR_10 = -VAR_10;
 }
 return (VAR_0 + VAR_10);
}
