
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct egp_packet {scalar_t__ egp_version; int egp_type; int egp_code; int egp_status; int egp_reason; int egp_extgw; int egp_intgw; int egp_sourcenet; int egp_poll; int egp_hello; int egp_sequence; int egp_as; } ;
struct TYPE_6__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;
 size_t VAR_0 ;


 int VAR_1 ;





 int VAR_2 ;






 scalar_t__ VAR_3 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct egp_packet const) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_3 (TYPE_1__*,struct egp_packet const*,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;

void
FUNC_5(netdissect_options *VAR_9,
          register const uint8_t *VAR_10, register u_int VAR_11)
{
 register const struct egp_packet *VAR_12;
 register int VAR_13;
 register int VAR_14;
 register int VAR_15;

 VAR_12 = (const struct egp_packet *)VAR_10;
 if (VAR_11 < sizeof(*VAR_12) || !FUNC_2(*VAR_12)) {
  FUNC_1((VAR_9, "[|egp]"));
  return;
 }

        if (!VAR_9->ndo_vflag) {
            FUNC_1((VAR_9, "EGPv%u, AS %u, seq %u, length %u",
                   VAR_12->egp_version,
                   FUNC_0(&VAR_12->egp_as),
                   FUNC_0(&VAR_12->egp_sequence),
                   VAR_11));
            return;
        } else
            FUNC_1((VAR_9, "EGPv%u, length %u",
                   VAR_12->egp_version,
                   VAR_11));

 if (VAR_12->egp_version != VAR_3) {
  FUNC_1((VAR_9, "[version %d]", VAR_12->egp_version));
  return;
 }

 VAR_15 = VAR_12->egp_type;
 VAR_14 = VAR_12->egp_code;
 VAR_13 = VAR_12->egp_status;

 switch (VAR_15) {
 case 132:
  FUNC_1((VAR_9, " acquire"));
  switch (VAR_14) {
  case 141:
  case 145:
   FUNC_1((VAR_9, " %s", VAR_4[VAR_14]));
   switch (VAR_13) {
   case 133:
   case 140:
   case 135:
    FUNC_1((VAR_9, " %s", VAR_5[VAR_13]));
    break;

   default:
    FUNC_1((VAR_9, " [status %d]", VAR_13));
    break;
   }
   FUNC_1((VAR_9, " hello:%d poll:%d",
          FUNC_0(&VAR_12->egp_hello),
          FUNC_0(&VAR_12->egp_poll)));
   break;

  case 142:
  case 147:
  case 146:
   FUNC_1((VAR_9, " %s", VAR_4[VAR_14]));
   switch (VAR_13 ) {
   case 133:
   case 137:
   case 139:
   case 138:
   case 136:
   case 134:
    FUNC_1((VAR_9, " %s", VAR_5[VAR_13]));
    break;

   default:
    FUNC_1((VAR_9, "[status %d]", VAR_13));
    break;
   }
   break;

  default:
   FUNC_1((VAR_9, "[code %d]", VAR_14));
   break;
  }
  break;

 case 129:
  switch (VAR_14) {

  case 143:
  case 144:
   FUNC_1((VAR_9, " %s", VAR_6[VAR_14]));
   if (VAR_13 <= VAR_1)
    FUNC_1((VAR_9, " state:%s", VAR_8[VAR_13]));
   else
    FUNC_1((VAR_9, " [status %d]", VAR_13));
   break;

  default:
   FUNC_1((VAR_9, "[reach code %d]", VAR_14));
   break;
  }
  break;

 case 130:
  FUNC_1((VAR_9, " poll"));
  if (VAR_12->egp_status <= VAR_1)
   FUNC_1((VAR_9, " state:%s", VAR_8[VAR_13]));
  else
   FUNC_1((VAR_9, " [status %d]", VAR_13));
  FUNC_1((VAR_9, " net:%s", FUNC_4(VAR_9, &VAR_12->egp_sourcenet)));
  break;

 case 128:
  FUNC_1((VAR_9, " update"));
  if (VAR_13 & VAR_2) {
   VAR_13 &= ~VAR_2;
   FUNC_1((VAR_9, " unsolicited"));
  }
  if (VAR_13 <= VAR_1)
   FUNC_1((VAR_9, " state:%s", VAR_8[VAR_13]));
  else
   FUNC_1((VAR_9, " [status %d]", VAR_13));
  FUNC_1((VAR_9, " %s int %d ext %d",
         FUNC_4(VAR_9, &VAR_12->egp_sourcenet),
         VAR_12->egp_intgw,
         VAR_12->egp_extgw));
  if (VAR_9->ndo_vflag)
   FUNC_3(VAR_9, VAR_12, VAR_11);
  break;

 case 131:
  FUNC_1((VAR_9, " error"));
  if (VAR_13 <= VAR_1)
   FUNC_1((VAR_9, " state:%s", VAR_8[VAR_13]));
  else
   FUNC_1((VAR_9, " [status %d]", VAR_13));

  if (FUNC_0(&VAR_12->egp_reason) <= VAR_0)
   FUNC_1((VAR_9, " %s", VAR_7[FUNC_0(&VAR_12->egp_reason)]));
  else
   FUNC_1((VAR_9, " [reason %d]", FUNC_0(&VAR_12->egp_reason)));
  break;

 default:
  FUNC_1((VAR_9, "[type %d]", VAR_15));
  break;
 }
}
