
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint16_t ;
typedef scalar_t__ u_short ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct lladdr_info {void* addr_string; int addr; } ;
struct ether_header {int const ether_length_type; } ;
struct TYPE_11__ {int ndo_suppress_default_print; scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (struct ether_header const*) ;
 int FUNC_1 (struct ether_header const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_2 (int const*) ;
 int FUNC_3 (int const*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int const*,scalar_t__) ;
 void* VAR_7 ;
 scalar_t__ FUNC_6 (TYPE_1__*,scalar_t__,int const*,scalar_t__,scalar_t__,struct lladdr_info*,struct lladdr_info*) ;
 int VAR_8 ;
 int FUNC_7 (void*) ;
 int FUNC_8 (TYPE_1__*,int const*,scalar_t__,scalar_t__,struct lladdr_info*,struct lladdr_info*) ;
 void FUNC_9 (TYPE_1__*,int const*) ;
 void FUNC_10 (TYPE_1__*,int const*) ;
 int FUNC_11 (int ,char*,scalar_t__) ;

u_int
FUNC_12(netdissect_options *VAR_9,
            const u_char *VAR_10, u_int VAR_11, u_int VAR_12,
            void (*VAR_13)(netdissect_options *VAR_14, const u_char *), const u_char *VAR_15)
{
 const struct ether_header *VAR_16;
 u_int VAR_17;
 u_short VAR_18;
 u_int VAR_19;
 int VAR_20;
 struct lladdr_info VAR_21, VAR_22;

 if (VAR_12 < VAR_6) {
  FUNC_4((VAR_9, "[|ether]"));
  return (VAR_12);
 }
 if (VAR_11 < VAR_6) {
  FUNC_4((VAR_9, "[|ether]"));
  return (VAR_11);
 }

 if (VAR_9->ndo_eflag) {
  if (VAR_13 != ((void*)0))
   (*VAR_13)(VAR_9, VAR_15);
  FUNC_5(VAR_9, VAR_10, VAR_11);
 }
 VAR_17 = VAR_11;

 VAR_11 -= VAR_6;
 VAR_12 -= VAR_6;
 VAR_16 = (const struct ether_header *)VAR_10;
 VAR_10 += VAR_6;
 VAR_19 = VAR_6;

 VAR_21.addr = FUNC_1(VAR_16);
 VAR_21.addr_string = VAR_7;
 VAR_22.addr = FUNC_0(VAR_16);
 VAR_22.addr_string = VAR_7;
 VAR_18 = FUNC_2(&VAR_16->ether_length_type);

recurse:



 if (VAR_18 <= VAR_0) {

  VAR_20 = FUNC_8(VAR_9, VAR_10, VAR_11, VAR_12, &VAR_21, &VAR_22);
  if (VAR_20 < 0) {

   if (!VAR_9->ndo_suppress_default_print)
    FUNC_3(VAR_10, VAR_12);
   VAR_20 = -VAR_20;
  }
  VAR_19 += VAR_20;
 } else if (VAR_18 == VAR_1 ||
                VAR_18 == VAR_2 ||
                VAR_18 == VAR_3 ||
                VAR_18 == VAR_4) {




  if (VAR_12 < 4) {
   FUNC_4((VAR_9, "[|vlan]"));
   return (VAR_19 + VAR_12);
  }
  if (VAR_11 < 4) {
   FUNC_4((VAR_9, "[|vlan]"));
   return (VAR_19 + VAR_11);
  }
         if (VAR_9->ndo_eflag) {
   uint16_t VAR_23 = FUNC_2(VAR_10);

   FUNC_4((VAR_9, "%s, ", FUNC_7(VAR_23)));
  }

  VAR_18 = FUNC_2(VAR_10 + 2);
  if (VAR_9->ndo_eflag && VAR_18 > VAR_0)
   FUNC_4((VAR_9, "ethertype %s, ", FUNC_11(VAR_8,"0x%04x", VAR_18)));
  VAR_10 += 4;
  VAR_11 -= 4;
  VAR_12 -= 4;
  VAR_19 += 4;
  goto recurse;
 } else if (VAR_18 == VAR_5) {
  VAR_20 = FUNC_8(VAR_9, VAR_10, VAR_11, VAR_12, &VAR_21, &VAR_22);
  if (VAR_20 < 0) {

   if (!VAR_9->ndo_suppress_default_print)
    FUNC_3(VAR_10, VAR_12);
   VAR_20 = -VAR_20;
  }
  VAR_19 += VAR_20;
 } else {
  if (FUNC_6(VAR_9, VAR_18, VAR_10, VAR_11, VAR_12, &VAR_21, &VAR_22) == 0) {

   if (!VAR_9->ndo_eflag) {
    if (VAR_13 != ((void*)0))
     (*VAR_13)(VAR_9, VAR_15);
    FUNC_5(VAR_9, (const u_char *)VAR_16, VAR_17);
   }

   if (!VAR_9->ndo_suppress_default_print)
    FUNC_3(VAR_10, VAR_12);
  }
 }
 return (VAR_19);
}
