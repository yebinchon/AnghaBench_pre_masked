
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
struct lladdr_info {int addr; int (* addr_string ) (TYPE_1__*,int ) ;} ;
struct TYPE_15__ {scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const,int) ;
 int FUNC_4 (TYPE_1__*,int const*,int,int) ;
 int FUNC_5 (TYPE_1__*,int const*,int) ;
 int FUNC_6 (TYPE_1__*,int const*,int,int,int *,int *) ;
 int FUNC_7 (TYPE_1__*,int,int const*,int,int,struct lladdr_info const*,struct lladdr_info const*) ;
 int VAR_1 ;
 int FUNC_8 (TYPE_1__*,int const*,int,int) ;
 int FUNC_9 (int) ;
 int VAR_2 ;
 int FUNC_10 (TYPE_1__*,int const*,int) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (TYPE_1__*,int const*,int,int) ;
 int FUNC_15 (TYPE_1__*,int const*,int) ;
 int FUNC_16 (TYPE_1__*,int const*,int) ;

int
FUNC_17(netdissect_options *VAR_3, const u_char *VAR_4, u_int VAR_5, u_int VAR_6,
 const struct lladdr_info *VAR_7, const struct lladdr_info *VAR_8,
 u_int VAR_9)
{
 uint32_t VAR_10;
 register u_short VAR_11;
 register int VAR_12;

 FUNC_3(*VAR_4, 5);
 if (VAR_6 < 5 || VAR_5 < 5)
  goto trunc;
 VAR_10 = FUNC_1(VAR_4);
 VAR_11 = FUNC_0(VAR_4 + 3);

 if (VAR_3->ndo_eflag) {





  FUNC_2((VAR_3, "oui %s (0x%06x), %s %s (0x%04x), length %u: ",
       FUNC_13(VAR_2, "Unknown", VAR_10),
       VAR_10,
       (VAR_10 == 0x000000 ? "ethertype" : "pid"),
       FUNC_13(FUNC_9(VAR_10), "Unknown", VAR_11),
       VAR_11, VAR_5 - 5));
 }
 VAR_4 += 5;
 VAR_5 -= 5;
 VAR_6 -= 5;

 switch (VAR_10) {
 case 142:
 case 143:






  VAR_12 = FUNC_7(VAR_3, VAR_11, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  if (VAR_12)
   return (VAR_12);
  break;

 case 145:
  if (VAR_11 == VAR_0) {
   VAR_12 = FUNC_7(VAR_3, VAR_11, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
   if (VAR_12)
    return (VAR_12);
  }
  break;

 case 144:
                switch (VAR_11) {
                case 140:
                        FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6);
                        return (1);
                case 139:
                        FUNC_5(VAR_3, VAR_4, VAR_5);
                        return (1);
                case 137:
                        FUNC_15(VAR_3, VAR_4, VAR_5);
                        return (1);
                case 135:
                        FUNC_16(VAR_3, VAR_4, VAR_5);
                        return (1);
                case 138:
                case 136:
                        FUNC_10(VAR_3, VAR_4, VAR_5);
                        return (1);
                default:
                        break;
                }
  break;

 case 141:
  switch (VAR_11) {

  case 131:
  case 130:







   FUNC_3(*VAR_4, VAR_9);
   VAR_6 -= VAR_9;
   VAR_5 -= VAR_9;
   VAR_4 += VAR_9;




   FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6, ((void*)0), ((void*)0));
   return (1);

  case 134:
  case 133:
   FUNC_3(*VAR_4, VAR_9);
   VAR_6 -= VAR_9;
   VAR_5 -= VAR_9;
   VAR_4 += VAR_9;





   FUNC_14(VAR_3, VAR_4, VAR_5, VAR_6);
   return (1);

  case 129:
  case 128:







   FUNC_3(*VAR_4, VAR_9 + 1);
   VAR_6 -= VAR_9 + 1;
   VAR_5 -= VAR_9 + 1;
   VAR_4 += VAR_9 + 1;




   FUNC_8(VAR_3, VAR_4, VAR_5, VAR_6);
   return (1);

  case 132:
   FUNC_10(VAR_3, VAR_4, VAR_5);
   return (1);
  }
 }
 if (!VAR_3->ndo_eflag) {




  if (VAR_7 != ((void*)0) && VAR_8 != ((void*)0)) {
   FUNC_2((VAR_3, "%s > %s ",
    (VAR_7->addr_string)(VAR_3, VAR_7->addr),
    (VAR_8->addr_string)(VAR_3, VAR_8->addr)));
  }





  if (VAR_10 == 0x000000) {
   FUNC_2((VAR_3, "SNAP, ethertype %s (0x%04x), length %u: ",
        FUNC_13(VAR_1, "Unknown", VAR_11),
        VAR_11, VAR_5));
  } else {
   FUNC_2((VAR_3, "SNAP, oui %s (0x%06x), pid %s (0x%04x), length %u: ",
        FUNC_13(VAR_2, "Unknown", VAR_10),
        VAR_10,
        FUNC_13(FUNC_9(VAR_10), "Unknown", VAR_11),
        VAR_11, VAR_5));
  }
 }
 return (0);

trunc:
 FUNC_2((VAR_3, "[|snap]"));
 return (1);
}
