
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_13__ {int ndo_vflag; int ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int const,int) ;





 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,int const*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_1__*,int const*,int) ;
 int FUNC_7 (TYPE_1__*,int const*,int) ;
 int FUNC_8 (TYPE_1__*,int const*,int) ;
 int FUNC_9 (TYPE_1__*,int const*,int) ;
 int FUNC_10 (TYPE_1__*,int const*,int) ;
 int FUNC_11 (TYPE_1__*,int const*,char*,int) ;
 int FUNC_12 (TYPE_1__*,int const*,int) ;
 char* FUNC_13 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_14(netdissect_options *VAR_3,
                  u_int VAR_4, const u_char *VAR_5, int VAR_6)
{
 const char *VAR_7;
 u_int VAR_8, VAR_9;
 int (*VAR_10)(netdissect_options *, const u_char *, int);
 int VAR_11, VAR_12;
        const u_char *VAR_13;

        VAR_13=VAR_5;

        VAR_7 = FUNC_13(VAR_2, "unknown ctrl-proto (0x%04x)", VAR_4);
 FUNC_3((VAR_3, "%s, ", VAR_7));

 if (VAR_6 < 4)
  goto trunc;
 FUNC_4(*VAR_13, 2);

 VAR_8 = *VAR_13++;

 FUNC_3((VAR_3, "%s (0x%02x), id %u, length %u",
           FUNC_13(VAR_0, "Unknown Opcode",VAR_8),
           VAR_8,
           *VAR_13++,
           VAR_6 + 2));

 if (!VAR_3->ndo_vflag)
  return;

 if (VAR_6 <= 4)
  return;

 FUNC_4(*VAR_13, 2);
 VAR_9 = FUNC_0(VAR_13);
 VAR_13 += 2;

 FUNC_3((VAR_3, "\n\tencoded length %u (=Option(s) length %u)", VAR_9, VAR_9 - 4));

 if (VAR_3->ndo_vflag > 1)
  FUNC_11(VAR_3, VAR_5 - 2, "\n\t", 6);


 switch (VAR_8) {
 case 133:
  if (VAR_6 < 11)
   break;
  FUNC_4(*VAR_13, 4);
  FUNC_3((VAR_3, "\n\t  Magic-Num 0x%08x", FUNC_2(VAR_13)));
  VAR_13 += 4;
  FUNC_4(*VAR_13, 3);
  FUNC_3((VAR_3, " Vendor: %s (%u)",
                       FUNC_13(VAR_1,"Unknown",FUNC_1(VAR_13)),
                       FUNC_1(VAR_13)));

  break;
 case 142:
 case 145:
 case 144:
 case 143:
  VAR_11 = VAR_9 - 4;
  do {
   switch (VAR_4) {
   case 128:
    VAR_10 = FUNC_10;
    break;
   case 130:
    VAR_10 = FUNC_9;
    break;
   case 129:
    VAR_10 = FUNC_8;
    break;
   case 131:
    VAR_10 = FUNC_7;
    break;
   case 132:
    VAR_10 = FUNC_6;
    break;
   default:




    VAR_10 = ((void*)0);
    break;
   }

   if (VAR_10 == ((void*)0))
    break;

   if ((VAR_12 = (*VAR_10)(VAR_3, VAR_13, VAR_9)) == 0)
    break;
   VAR_11 -= VAR_12;
   VAR_13 += VAR_12;
  } while (VAR_11 > 0);
  break;

 case 135:
 case 136:

  break;
 case 146:

  break;
 case 137:
  if (VAR_6 < 6)
   break;
  FUNC_4(*VAR_13, 2);
  FUNC_3((VAR_3, "\n\t  Rejected %s Protocol (0x%04x)",
         FUNC_13(VAR_2,"unknown", FUNC_0(VAR_13)),
         FUNC_0(VAR_13)));

  if (VAR_9 > 6) {
   FUNC_3((VAR_3, "\n\t  Rejected Packet"));
   FUNC_11(VAR_3, VAR_13 + 2, "\n\t    ", VAR_9 - 2);
  }
  break;
 case 140:
 case 139:
 case 141:
  if (VAR_6 < 8)
   break;
  FUNC_4(*VAR_13, 4);
  FUNC_3((VAR_3, "\n\t  Magic-Num 0x%08x", FUNC_2(VAR_13)));

  if (VAR_9 > 8) {
   FUNC_3((VAR_3, "\n\t  -----trailing data-----"));
   FUNC_4(VAR_13[4], VAR_9 - 8);
   FUNC_11(VAR_3, VAR_13 + 4, "\n\t  ", VAR_9 - 8);
  }
  break;
 case 138:
  if (VAR_6 < 8)
   break;
  FUNC_4(*VAR_13, 4);
  FUNC_3((VAR_3, "\n\t  Magic-Num 0x%08x", FUNC_2(VAR_13)));

  if (VAR_9 > 8) {
   FUNC_3((VAR_3, "\n\t  Message\n\t    "));
   if (FUNC_5(VAR_3, VAR_13 + 4, VAR_9 - 4, VAR_3->ndo_snapend))
    goto trunc;
  }
  break;
 case 134:
  if (VAR_6 < 12)
   break;
  FUNC_4(*VAR_13, 4);
  FUNC_3((VAR_3, "\n\t  Magic-Num 0x%08x", FUNC_2(VAR_13)));
  FUNC_4(*(VAR_13 + 4), 4);
  FUNC_3((VAR_3, ", Seconds-Remaining %us", FUNC_2(VAR_13 + 4)));

  break;
 default:



  if (VAR_3->ndo_vflag <= 1)
   FUNC_11(VAR_3, VAR_5 - 2, "\n\t  ", VAR_6 + 2);
  break;
 }
 return;

trunc:
 FUNC_3((VAR_3, "[|%s]", VAR_7));
}
