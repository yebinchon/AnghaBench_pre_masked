
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct pim {int const pim_rsv; int const pim_cksum; int pim_typever; } ;
struct ip {int const ip_vhl; int const ip_dst; int const ip_src; } ;
struct TYPE_11__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;
typedef enum checksum_status { ____Placeholder_checksum_status } checksum_status ;



 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

 int FUNC_2 (struct ip const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int const,int) ;
 int FUNC_6 (int const*) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;

 int FUNC_8 (TYPE_1__*,int const*,int) ;
 int FUNC_9 (TYPE_1__*,int const*,int) ;
 int FUNC_10 (TYPE_1__*,int const*) ;
 int FUNC_11 (TYPE_1__*,int const*,int,int ,int,int ) ;
 int FUNC_12 (TYPE_1__*,int const*,int const*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (TYPE_1__*,int const*,char*,int) ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 (TYPE_1__*,int const) ;

__attribute__((used)) static void
FUNC_16(netdissect_options *VAR_6,
            register const u_char *VAR_7, register u_int VAR_8, const u_char *VAR_9)
{
 register const struct pim *VAR_10 = (const struct pim *)VAR_7;
 int VAR_11;
 enum checksum_status VAR_12;
 int VAR_13;

 if (VAR_8 < 2)
  goto trunc;
 FUNC_4(VAR_10->pim_rsv);
 VAR_13 = VAR_10->pim_rsv;
 if (VAR_13 != 0)
  FUNC_3((VAR_6, ", RFC2117-encoding"));

 if (VAR_8 < 4)
  goto trunc;
 FUNC_4(VAR_10->pim_cksum);
 FUNC_3((VAR_6, ", cksum 0x%04x ", FUNC_0(&VAR_10->pim_cksum)));
 if (FUNC_0(&VAR_10->pim_cksum) == 0) {
  FUNC_3((VAR_6, "(unverified)"));
 } else {
  if (FUNC_7(VAR_10->pim_typever) == 130) {




   VAR_12 = FUNC_12(VAR_6, VAR_7, VAR_9, 8);
   if (VAR_12 == 148) {






    VAR_12 = FUNC_12(VAR_6, VAR_7, VAR_9, VAR_8);
   }
  } else {



   VAR_12 = FUNC_12(VAR_6, VAR_7, VAR_9, VAR_8);
  }
  switch (VAR_12) {

  case 149:
   FUNC_3((VAR_6, "(correct)"));
   break;

  case 148:
   FUNC_3((VAR_6, "(incorrect)"));
   break;

  case 128:
   FUNC_3((VAR_6, "(unverified)"));
   break;
  }
 }
 VAR_7 += 4;
 VAR_8 -= 4;

 switch (FUNC_7(VAR_10->pim_typever)) {
 case 133:
     {
  uint16_t VAR_14, VAR_15;
  while (VAR_8 > 0) {
   if (VAR_8 < 4)
    goto trunc;
   FUNC_5(VAR_7[0], 4);
   VAR_14 = FUNC_0(&VAR_7[0]);
   VAR_15 = FUNC_0(&VAR_7[2]);
   FUNC_3((VAR_6, "\n\t  %s Option (%u), length %u, Value: ",
             FUNC_14(VAR_2, "Unknown", VAR_14),
             VAR_14,
             VAR_15));
   VAR_7 += 4;
   VAR_8 -= 4;

   if (VAR_8 < VAR_15)
    goto trunc;
   FUNC_5(VAR_7[0], VAR_15);
   switch (VAR_14) {
   case 141:
    if (VAR_15 != 2) {
     FUNC_3((VAR_6, "ERROR: Option Length != 2 Bytes (%u)", VAR_15));
    } else {
     FUNC_15(VAR_6, FUNC_0(VAR_7));
    }
    break;

   case 140:
    if (VAR_15 != 4) {
     FUNC_3((VAR_6, "ERROR: Option Length != 4 Bytes (%u)", VAR_15));
    } else {
     char VAR_16;
     uint16_t VAR_17, VAR_18;
     VAR_17 = FUNC_0(VAR_7);
     VAR_18 = FUNC_0(VAR_7+2);
     VAR_16 = (VAR_17 & 0x8000)? 1 : 0;
     VAR_17 &= ~0x8000;
     FUNC_3((VAR_6, "\n\t    T-bit=%d, LAN delay %dms, Override interval %dms",
     VAR_16, VAR_17, VAR_18));
    }
    break;

   case 143:
   case 144:
    switch (VAR_15) {
    case 0:
     FUNC_3((VAR_6, "Bi-Directional Capability (Old)"));
     break;
    case 4:
     FUNC_3((VAR_6, "%u", FUNC_1(VAR_7)));
     break;
    default:
     FUNC_3((VAR_6, "ERROR: Option Length != 4 Bytes (%u)", VAR_15));
     break;
    }
    break;

   case 142:
    if (VAR_15 != 4) {
     FUNC_3((VAR_6, "ERROR: Option Length != 4 Bytes (%u)", VAR_15));
    } else {
     FUNC_3((VAR_6, "0x%08x", FUNC_1(VAR_7)));
    }
    break;

   case 139:
    if (VAR_15 != 4) {
     FUNC_3((VAR_6, "ERROR: Option Length != 4 Bytes (%u)", VAR_15));
    } else {
     FUNC_3((VAR_6, "v%d", *VAR_7));
     if (*(VAR_7+1) != 0) {
      FUNC_3((VAR_6, ", interval "));
      FUNC_15(VAR_6, *(VAR_7+1));
     }
     if (FUNC_0(VAR_7+2) != 0) {
      FUNC_3((VAR_6, " ?0x%04x?", FUNC_0(VAR_7+2)));
     }
    }
    break;

   case 145:
    break;

   case 146:
   case 147:
    if (VAR_6->ndo_vflag > 1) {
     const u_char *VAR_19 = VAR_7;
     u_int VAR_20 = VAR_8;
     while (VAR_19 < (VAR_7+VAR_15)) {
      FUNC_3((VAR_6, "\n\t    "));
      VAR_11 = FUNC_11(VAR_6, VAR_19, VAR_20, VAR_5, VAR_13, 0);
      if (VAR_11 < 0)
       goto trunc;
      VAR_19 += VAR_11;
      VAR_20 -= VAR_11;
     }
    }
    break;
   default:
    if (VAR_6->ndo_vflag <= 1)
     FUNC_13(VAR_6, VAR_7, "\n\t    ", VAR_15);
    break;
   }

   if (VAR_6->ndo_vflag> 1)
    FUNC_13(VAR_6, VAR_7, "\n\t    ", VAR_15);
   VAR_7 += VAR_15;
   VAR_8 -= VAR_15;
  }
  break;
     }

 case 130:
 {
  const struct ip *VAR_21;

  if (VAR_8 < 4)
   goto trunc;
  FUNC_5(*VAR_7, VAR_0);

  FUNC_3((VAR_6, ", Flags [ %s ]\n\t",
            FUNC_14(VAR_3,
            "none",
            FUNC_1(VAR_7))));

  VAR_7 += 4; VAR_8 -= 4;

  if (VAR_8 == 0)
   goto trunc;
  VAR_21 = (const struct ip *)VAR_7;
  FUNC_4(VAR_21->ip_vhl);
  switch (FUNC_2(VAR_21)) {
                case 0:
   FUNC_4(VAR_21->ip_dst);
   FUNC_3((VAR_6, "IP-Null-header %s > %s",
             FUNC_10(VAR_6, &VAR_21->ip_src),
             FUNC_10(VAR_6, &VAR_21->ip_dst)));
   break;

  case 4:
   FUNC_9(VAR_6, VAR_7, VAR_8);
   break;

  case 6:
   FUNC_8(VAR_6, VAR_7, VAR_8);
   break;

  default:
   FUNC_3((VAR_6, "IP ver %d", FUNC_2(VAR_21)));
   break;
  }
  break;
 }

 case 129:
  FUNC_3((VAR_6, " group="));
  if ((VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_1, VAR_13, 0)) < 0)
   goto trunc;
  VAR_7 += VAR_11; VAR_8 -= VAR_11;
  FUNC_3((VAR_6, " source="));
  if ((VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_5, VAR_13, 0)) < 0)
   goto trunc;
  VAR_7 += VAR_11; VAR_8 -= VAR_11;
  break;

 case 132:
 case 135:
 case 134:
     {
  uint8_t VAR_22;
  uint16_t VAR_23;
  uint16_t VAR_24;
  uint16_t VAR_25;
  int VAR_26, VAR_27;

  if (FUNC_7(VAR_10->pim_typever) != 7) {
   FUNC_3((VAR_6, ", upstream-neighbor: "));
   if ((VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_5, VAR_13, 0)) < 0)
    goto trunc;
   VAR_7 += VAR_11; VAR_8 -= VAR_11;
  }
  if (VAR_8 < 4)
   goto trunc;
  FUNC_5(*VAR_7, 4);
  VAR_22 = VAR_7[1];
  VAR_23 = FUNC_0(&VAR_7[2]);
  FUNC_3((VAR_6, "\n\t  %u group(s)", VAR_22));
  if (FUNC_7(VAR_10->pim_typever) != 7) {
   FUNC_3((VAR_6, ", holdtime: "));
   if (VAR_23 == 0xffff)
    FUNC_3((VAR_6, "infinite"));
   else
    FUNC_15(VAR_6, VAR_23);
  }
  VAR_7 += 4; VAR_8 -= 4;
  for (VAR_26 = 0; VAR_26 < VAR_22; VAR_26++) {
   FUNC_3((VAR_6, "\n\t    group #%u: ", VAR_26+1));
   if ((VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_1, VAR_13, 0)) < 0)
    goto trunc;
   VAR_7 += VAR_11; VAR_8 -= VAR_11;
   if (VAR_8 < 4)
    goto trunc;
   FUNC_5(*VAR_7, 4);
   VAR_24 = FUNC_0(&VAR_7[0]);
   VAR_25 = FUNC_0(&VAR_7[2]);
   FUNC_3((VAR_6, ", joined sources: %u, pruned sources: %u", VAR_24, VAR_25));
   VAR_7 += 4; VAR_8 -= 4;
   for (VAR_27 = 0; VAR_27 < VAR_24; VAR_27++) {
    FUNC_3((VAR_6, "\n\t      joined source #%u: ", VAR_27+1));
    if ((VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_4, VAR_13, 0)) < 0)
     goto trunc;
    VAR_7 += VAR_11; VAR_8 -= VAR_11;
   }
   for (VAR_27 = 0; VAR_27 < VAR_25; VAR_27++) {
    FUNC_3((VAR_6, "\n\t      pruned source #%u: ", VAR_27+1));
    if ((VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_4, VAR_13, 0)) < 0)
     goto trunc;
    VAR_7 += VAR_11; VAR_8 -= VAR_11;
   }
  }
  break;
     }

 case 137:
 {
  int VAR_28, VAR_29, VAR_30;


  if (VAR_8 < 2)
   goto trunc;
  FUNC_6(VAR_7);
  FUNC_3((VAR_6, " tag=%x", FUNC_0(VAR_7)));
  VAR_7 += 2;
  VAR_8 -= 2;
  if (VAR_8 < 1)
   goto trunc;
  FUNC_4(VAR_7[0]);
  FUNC_3((VAR_6, " hashmlen=%d", VAR_7[0]));
  if (VAR_8 < 2)
   goto trunc;
  FUNC_4(VAR_7[2]);
  FUNC_3((VAR_6, " BSRprio=%d", VAR_7[1]));
  VAR_7 += 2;
  VAR_8 -= 2;


  FUNC_3((VAR_6, " BSR="));
  if ((VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_5, VAR_13, 0)) < 0)
   goto trunc;
  VAR_7 += VAR_11;
  VAR_8 -= VAR_11;

  for (VAR_28 = 0; VAR_8 > 0; VAR_28++) {

   FUNC_3((VAR_6, " (group%d: ", VAR_28));
   if ((VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_1, VAR_13, 0)) < 0)
    goto trunc;
   VAR_7 += VAR_11;
   VAR_8 -= VAR_11;


   if (VAR_8 < 1)
    goto trunc;
   FUNC_4(VAR_7[0]);
   FUNC_3((VAR_6, " RPcnt=%d", VAR_7[0]));
   if (VAR_8 < 2)
    goto trunc;
   FUNC_4(VAR_7[1]);
   FUNC_3((VAR_6, " FRPcnt=%d", VAR_30 = VAR_7[1]));
   if (VAR_8 < 4)
    goto trunc;
   VAR_7 += 4;
   VAR_8 -= 4;

   for (VAR_29 = 0; VAR_29 < VAR_30 && VAR_8 > 0; VAR_29++) {

    FUNC_3((VAR_6, " RP%d=", VAR_29));
    if ((VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_8,
        VAR_5,
        VAR_13,
        0)) < 0)
     goto trunc;
    VAR_7 += VAR_11;
    VAR_8 -= VAR_11;

    if (VAR_8 < 2)
     goto trunc;
    FUNC_6(VAR_7);
    FUNC_3((VAR_6, ",holdtime="));
    FUNC_15(VAR_6, FUNC_0(VAR_7));
    if (VAR_8 < 3)
     goto trunc;
    FUNC_4(VAR_7[2]);
    FUNC_3((VAR_6, ",prio=%d", VAR_7[2]));
    if (VAR_8 < 4)
     goto trunc;
    VAR_7 += 4;
    VAR_8 -= 4;
   }
   FUNC_3((VAR_6, ")"));
  }
  break;
 }
 case 138:
  FUNC_3((VAR_6, " group="));
  if ((VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_1, VAR_13, 0)) < 0)
   goto trunc;
  VAR_7 += VAR_11; VAR_8 -= VAR_11;
  FUNC_3((VAR_6, " src="));
  if ((VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_5, VAR_13, 0)) < 0)
   goto trunc;
  VAR_7 += VAR_11; VAR_8 -= VAR_11;
  if (VAR_8 < 8)
   goto trunc;
  FUNC_5(*VAR_7, 8);
  if (VAR_7[0] & 0x80)
   FUNC_3((VAR_6, " RPT"));
  FUNC_3((VAR_6, " pref=%u", FUNC_1(&VAR_7[0]) & 0x7fffffff));
  FUNC_3((VAR_6, " metric=%u", FUNC_1(&VAR_7[4])));
  break;

 case 136:
 {
  int VAR_31, VAR_32;


  if (VAR_8 < 1)
   goto trunc;
  FUNC_4(VAR_7[0]);
  FUNC_3((VAR_6, " prefix-cnt=%d", VAR_7[0]));
  VAR_32 = VAR_7[0];
  if (VAR_8 < 2)
   goto trunc;
  FUNC_4(VAR_7[1]);
  FUNC_3((VAR_6, " prio=%d", VAR_7[1]));
  if (VAR_8 < 4)
   goto trunc;
  FUNC_6(&VAR_7[2]);
  FUNC_3((VAR_6, " holdtime="));
  FUNC_15(VAR_6, FUNC_0(&VAR_7[2]));
  VAR_7 += 4;
  VAR_8 -= 4;


  FUNC_3((VAR_6, " RP="));
  if ((VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_5, VAR_13, 0)) < 0)
   goto trunc;
  VAR_7 += VAR_11;
  VAR_8 -= VAR_11;


  for (VAR_31 = 0; VAR_31 < VAR_32 && VAR_8 > 0; VAR_31++) {
   FUNC_3((VAR_6, " Group%d=", VAR_31));
   if ((VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_1, VAR_13, 0)) < 0)
    goto trunc;
   VAR_7 += VAR_11;
   VAR_8 -= VAR_11;
  }
  break;
 }

 case 131:
  FUNC_3((VAR_6, " src="));
  if ((VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_5, VAR_13, 0)) < 0)
   goto trunc;
  VAR_7 += VAR_11;
  VAR_8 -= VAR_11;
  FUNC_3((VAR_6, " grp="));
  if ((VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_1, VAR_13, 0)) < 0)
   goto trunc;
  VAR_7 += VAR_11;
  VAR_8 -= VAR_11;
  FUNC_3((VAR_6, " forwarder="));
  if ((VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_5, VAR_13, 0)) < 0)
   goto trunc;
  VAR_7 += VAR_11;
  VAR_8 -= VAR_11;
  if (VAR_8 < 2)
   goto trunc;
  FUNC_6(VAR_7);
  FUNC_3((VAR_6, " TUNR "));
  FUNC_15(VAR_6, FUNC_0(VAR_7));
  break;


  default:
  FUNC_3((VAR_6, " [type %d]", FUNC_7(VAR_10->pim_typever)));
  break;
 }

 return;

trunc:
 FUNC_3((VAR_6, "[|pim]"));
}
