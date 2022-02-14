
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct lladdr_info {void* addr_string; scalar_t__ addr; } ;
struct fddi_header {int fddi_fc; } ;
struct ether_header {int dummy; } ;
struct TYPE_7__ {int ndo_suppress_default_print; scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ FUNC_0 (struct ether_header*) ;
 scalar_t__ FUNC_1 (struct ether_header*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int const*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 void* VAR_4 ;
 int FUNC_4 (struct fddi_header const*,char*,char*) ;
 int FUNC_5 (TYPE_1__*,struct fddi_header const*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int const*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int const*,scalar_t__,scalar_t__,struct lladdr_info*,struct lladdr_info*) ;

u_int
FUNC_8(netdissect_options *VAR_5, const u_char *VAR_6, u_int VAR_7, u_int VAR_8)
{
 const struct fddi_header *VAR_9 = (const struct fddi_header *)VAR_6;
 struct ether_header VAR_10;
 struct lladdr_info VAR_11, VAR_12;
 int VAR_13;

 if (VAR_8 < VAR_3) {
  FUNC_3((VAR_5, "[|fddi]"));
  return (VAR_8);
 }




 FUNC_4(VAR_9, (char *)FUNC_1(&VAR_10), (char *)FUNC_0(&VAR_10));

 if (VAR_5->ndo_eflag)
  FUNC_5(VAR_5, VAR_9, VAR_7, FUNC_1(&VAR_10), FUNC_0(&VAR_10));

 VAR_11.addr = FUNC_1(&VAR_10);
 VAR_11.addr_string = VAR_4;
 VAR_12.addr = FUNC_0(&VAR_10);
 VAR_12.addr_string = VAR_4;


 VAR_7 -= VAR_3;
 VAR_6 += VAR_3;
 VAR_8 -= VAR_3;


 if ((VAR_9->fddi_fc & VAR_0) == VAR_1) {

  VAR_13 = FUNC_7(VAR_5, VAR_6, VAR_7, VAR_8, &VAR_11, &VAR_12);
  if (VAR_13 < 0) {




   if (!VAR_5->ndo_suppress_default_print)
    FUNC_2(VAR_6, VAR_8);
   VAR_13 = -VAR_13;
  }
 } else if ((VAR_9->fddi_fc & VAR_0) == VAR_2) {
  FUNC_6(VAR_5, VAR_6, VAR_8);
  VAR_13 = 0;
 } else {

  if (!VAR_5->ndo_eflag)
   FUNC_5(VAR_5, VAR_9, VAR_7 + VAR_3, FUNC_1(&VAR_10),
       FUNC_0(&VAR_10));
  if (!VAR_5->ndo_suppress_default_print)
   FUNC_2(VAR_6, VAR_8);
  VAR_13 = 0;
 }
 return (VAR_3 + VAR_13);
}
