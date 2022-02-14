
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
typedef scalar_t__ u_char ;
struct lladdr_info {int addr; int (* addr_string ) (TYPE_1__*,int ) ;} ;
struct TYPE_14__ {scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (scalar_t__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ const VAR_15 ;
 int FUNC_5 (scalar_t__ const*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__ const*,int) ;
 int FUNC_8 (TYPE_1__*,scalar_t__ const*,int) ;
 int FUNC_9 (TYPE_1__*,scalar_t__ const*,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_10 (TYPE_1__*,int,scalar_t__ const*,int) ;
 int FUNC_11 (TYPE_1__*,scalar_t__ const*,int,int,struct lladdr_info const*,struct lladdr_info const*,int) ;
 int FUNC_12 (TYPE_1__*,scalar_t__ const*,int) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (TYPE_1__*,int ) ;
 int FUNC_17 (int ,char*,int) ;

int
FUNC_18(netdissect_options *VAR_21, const u_char *VAR_22, u_int VAR_23, u_int VAR_24,
   const struct lladdr_info *VAR_25, const struct lladdr_info *VAR_26)
{
 uint8_t VAR_27, VAR_28, VAR_29, VAR_30;
 uint16_t VAR_31;
 int VAR_32;
 int VAR_33;

 if (VAR_24 < 3) {
  FUNC_6((VAR_21, "[|llc]"));
  FUNC_5((const u_char *)VAR_22, VAR_24);
  return (VAR_24);
 }
 if (VAR_23 < 3) {
  FUNC_6((VAR_21, "[|llc]"));
  FUNC_5((const u_char *)VAR_22, VAR_24);
  return (VAR_23);
 }

 VAR_27 = *VAR_22;
 VAR_29 = *(VAR_22 + 1);







 VAR_31 = *(VAR_22 + 2);
 if ((VAR_31 & VAR_12) == VAR_12) {



  VAR_33 = 1;
  VAR_32 = 3;
 } else {




  if (VAR_24 < 4) {
   FUNC_6((VAR_21, "[|llc]"));
   FUNC_5((const u_char *)VAR_22, VAR_24);
   return (VAR_24);
  }
  if (VAR_23 < 4) {
   FUNC_6((VAR_21, "[|llc]"));
   FUNC_5((const u_char *)VAR_22, VAR_24);
   return (VAR_23);
  }




  VAR_31 = FUNC_0(VAR_22 + 2);
  VAR_33 = 0;
  VAR_32 = 4;
 }

 if (VAR_29 == VAR_1 && VAR_27 == VAR_1) {
            if (VAR_21->ndo_eflag)
  FUNC_6((VAR_21, "IPX 802.3: "));

            FUNC_8(VAR_21, VAR_22, VAR_23);
            return (0);
 }

 VAR_28 = VAR_27 & ~VAR_8;
 VAR_30 = VAR_29 & ~VAR_7;

 if (VAR_21->ndo_eflag) {
                FUNC_6((VAR_21, "LLC, dsap %s (0x%02x) %s, ssap %s (0x%02x) %s",
                       FUNC_17(VAR_20, "Unknown", VAR_28),
                       VAR_28,
                       FUNC_17(VAR_18, "Unknown", VAR_27 & VAR_8),
                       FUNC_17(VAR_20, "Unknown", VAR_30),
                       VAR_30,
                       FUNC_17(VAR_17, "Unknown", VAR_29 & VAR_7)));

  if (VAR_33) {
   FUNC_6((VAR_21, ", ctrl 0x%02x: ", VAR_31));
  } else {
   FUNC_6((VAR_21, ", ctrl 0x%04x: ", VAR_31));
  }
 }




 VAR_22 += VAR_32;
 VAR_23 -= VAR_32;
 VAR_24 -= VAR_32;

 if (VAR_30 == VAR_6 && VAR_28 == VAR_6
     && VAR_31 == VAR_11) {





  if (!FUNC_11(VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, 2)) {





   return (-(VAR_32 + 5));
  } else
   return (VAR_32 + 5);
 }

 if (VAR_30 == VAR_0 && VAR_28 == VAR_0 &&
     VAR_31 == VAR_11) {
  FUNC_12(VAR_21, VAR_22, VAR_23);
  return (VAR_32);
 }

 if (VAR_30 == VAR_2 && VAR_28 == VAR_2 &&
     VAR_31 == VAR_11) {






  FUNC_7(VAR_21, VAR_22, VAR_23);
  return (VAR_32);
 }

 if (VAR_30 == VAR_3 && VAR_28 == VAR_3 &&
     VAR_31 == VAR_11) {





                if (VAR_21->ndo_eflag)
                        FUNC_6((VAR_21, "IPX 802.2: "));

  FUNC_8(VAR_21, VAR_22, VAR_23);
  return (VAR_32);
 }
 if (VAR_30 == VAR_4 && VAR_28 == VAR_4
     && VAR_31 == VAR_11) {
  FUNC_9(VAR_21, VAR_22, VAR_23);
  return (VAR_32);
 }

 if (!VAR_21->ndo_eflag) {
  if (VAR_30 == VAR_28) {
   if (VAR_25 == ((void*)0) || VAR_26 == ((void*)0))
    FUNC_6((VAR_21, "%s ", FUNC_17(VAR_20, "Unknown DSAP 0x%02x", VAR_28)));
   else
    FUNC_6((VAR_21, "%s > %s %s ",
      (VAR_25->addr_string)(VAR_21, VAR_25->addr),
      (VAR_26->addr_string)(VAR_21, VAR_26->addr),
      FUNC_17(VAR_20, "Unknown DSAP 0x%02x", VAR_28)));
  } else {
   if (VAR_25 == ((void*)0) || VAR_26 == ((void*)0))
    FUNC_6((VAR_21, "%s > %s ",
                                        FUNC_17(VAR_20, "Unknown SSAP 0x%02x", VAR_30),
     FUNC_17(VAR_20, "Unknown DSAP 0x%02x", VAR_28)));
   else
    FUNC_6((VAR_21, "%s %s > %s %s ",
     (VAR_25->addr_string)(VAR_21, VAR_25->addr),
                                        FUNC_17(VAR_20, "Unknown SSAP 0x%02x", VAR_30),
     (VAR_26->addr_string)(VAR_21, VAR_26->addr),
     FUNC_17(VAR_20, "Unknown DSAP 0x%02x", VAR_28)));
  }
 }

 if (VAR_33) {
  FUNC_6((VAR_21, "Unnumbered, %s, Flags [%s], length %u",
                       FUNC_17(VAR_16, "%02x", FUNC_4(VAR_31)),
                       FUNC_17(VAR_17,"?",(VAR_29 & VAR_7) | (VAR_31 & VAR_13)),
                       VAR_23 + VAR_32));

  if ((VAR_31 & ~VAR_13) == VAR_14) {
   if (VAR_23 == 0) {





    return (VAR_32);
   }
   if (VAR_24 < 1) {
    FUNC_6((VAR_21, "[|llc]"));
    if (VAR_24 > 0)
     FUNC_5((const u_char *)VAR_22, VAR_24);
    return (VAR_32);
   }
   if (*VAR_22 == VAR_15) {
    if (VAR_24 < 3 || VAR_23 < 3) {
     FUNC_6((VAR_21, "[|llc]"));
     if (VAR_24 > 0)
      FUNC_5((const u_char *)VAR_22, VAR_24);
    } else
     FUNC_6((VAR_21, ": %02x %02x", VAR_22[1], VAR_22[2]));
    return (VAR_32);
   }
  }
 } else {
  if ((VAR_31 & VAR_10) == VAR_10) {
   FUNC_6((VAR_21, "Supervisory, %s, rcv seq %u, Flags [%s], length %u",
    FUNC_17(VAR_19,"?",FUNC_3(VAR_31)),
    FUNC_1(VAR_31),
    FUNC_17(VAR_17,"?",(VAR_29 & VAR_7) | (VAR_31 & VAR_9)),
                                VAR_23 + VAR_32));
   return (VAR_32);
  } else {
   FUNC_6((VAR_21, "Information, send seq %u, rcv seq %u, Flags [%s], length %u",
    FUNC_2(VAR_31),
    FUNC_1(VAR_31),
    FUNC_17(VAR_17,"?",(VAR_29 & VAR_7) | (VAR_31 & VAR_9)),
                                VAR_23 + VAR_32));
  }
 }
 return (-VAR_32);
}
