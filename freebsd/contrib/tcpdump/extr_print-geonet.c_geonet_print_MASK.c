
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct lladdr_info {int addr; int (* addr_string ) (TYPE_1__*,int ) ;} ;
struct TYPE_8__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const,int) ;
 int FUNC_4 (TYPE_1__*,int const*) ;
 int FUNC_5 (TYPE_1__*,int const*) ;
 int FUNC_6 (TYPE_1__*,int const*) ;
 int FUNC_7 (TYPE_1__*,int ) ;

void
FUNC_8(netdissect_options *VAR_0, const u_char *VAR_1, u_int VAR_2,
      const struct lladdr_info *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 uint16_t VAR_8;
 int VAR_9;
 const char *VAR_10 = "Unknown";
 const char *VAR_11 = "Unknown";
 int VAR_12 = -1;

 FUNC_2((VAR_0, "GeoNet "));
 if (VAR_3 != ((void*)0))
  FUNC_2((VAR_0, "src:%s", (VAR_3->addr_string)(VAR_0, VAR_3->addr)));
 FUNC_2((VAR_0, "; "));


 if (VAR_2 < 36)
  goto invalid;

 FUNC_3(*VAR_1, 8);
 VAR_4 = VAR_1[0] >> 4;
 VAR_5 = VAR_1[0] & 0x0f;
 VAR_6 = VAR_1[1] >> 4;
 VAR_7 = VAR_1[1] & 0x0f;
 VAR_8 = FUNC_0(VAR_1+4);
 VAR_9 = VAR_1[7];

 switch (VAR_5) {
  case 0: VAR_10 = "Any"; break;
  case 1: VAR_10 = "BTP-A"; break;
  case 2: VAR_10 = "BTP-B"; break;
  case 3: VAR_10 = "IPv6"; break;
 }

 switch (VAR_6) {
  case 0: VAR_11 = "Any"; break;
  case 1: VAR_11 = "Beacon"; break;
  case 2: VAR_11 = "GeoUnicast"; break;
  case 3: switch (VAR_7) {
    case 0: VAR_11 = "GeoAnycastCircle"; break;
    case 1: VAR_11 = "GeoAnycastRect"; break;
    case 2: VAR_11 = "GeoAnycastElipse"; break;
   }
   break;
  case 4: switch (VAR_7) {
    case 0: VAR_11 = "GeoBroadcastCircle"; break;
    case 1: VAR_11 = "GeoBroadcastRect"; break;
    case 2: VAR_11 = "GeoBroadcastElipse"; break;
   }
   break;
  case 5: switch (VAR_7) {
    case 0: VAR_11 = "TopoScopeBcast-SH"; break;
    case 1: VAR_11 = "TopoScopeBcast-MH"; break;
   }
   break;
  case 6: switch (VAR_7) {
    case 0: VAR_11 = "LocService-Request"; break;
    case 1: VAR_11 = "LocService-Reply"; break;
   }
   break;
 }

 FUNC_2((VAR_0, "v:%d ", VAR_4));
 FUNC_2((VAR_0, "NH:%d-%s ", VAR_5, VAR_10));
 FUNC_2((VAR_0, "HT:%d-%d-%s ", VAR_6, VAR_7, VAR_11));
 FUNC_2((VAR_0, "HopLim:%d ", VAR_9));
 FUNC_2((VAR_0, "Payload:%d ", VAR_8));
 if (FUNC_6(VAR_0, VAR_1 + 8) == -1)
  goto trunc;


 VAR_2 -= 36;
 VAR_1 += 36;


 switch (VAR_6) {
  case 0:
   VAR_12 = 0;
   break;
  case 1:
   VAR_12 = 0;
   break;
  case 2:
   break;
  case 3: switch (VAR_7) {
    case 0:
     break;
    case 1:
     break;
    case 2:
     break;
   }
   break;
  case 4: switch (VAR_7) {
    case 0:
     break;
    case 1:
     break;
    case 2:
     break;
   }
   break;
  case 5: switch (VAR_7) {
    case 0:
     VAR_12 = 0;
     break;
    case 1:
     VAR_12 = 68 - 36;
     break;
   }
   break;
  case 6: switch (VAR_7) {
    case 0:
     break;
    case 1:
     break;
   }
   break;
 }


 if (VAR_12 >= 0) {
  if (VAR_2 < (u_int)VAR_12)
   goto invalid;
  FUNC_3(*VAR_1, VAR_12);
  VAR_2 -= VAR_12;
  VAR_1 += VAR_12;
  switch (VAR_5) {
   case 0:
    break;
   case 1:
   case 2:
    if (VAR_2 < 4)
     goto invalid;
    FUNC_3(*VAR_1, 4);
    FUNC_4(VAR_0, VAR_1);
    VAR_2 -= 4;
    VAR_1 += 4;
    if (VAR_2 >= 2) {







     FUNC_3(*VAR_1, 2);
     FUNC_5(VAR_0, VAR_1);
    }
    break;
   case 3:
    break;
  }
 }


 if (VAR_0->ndo_vflag)
  FUNC_1(VAR_1, VAR_2);
 return;

invalid:
 FUNC_2((VAR_0, " Malformed (small) "));

 return;

trunc:
 FUNC_2((VAR_0, "[|geonet]"));
}
