
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int const FUNC_0 (int const*) ;
 int const FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int const,int) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;


 int const VAR_2 ;



 int VAR_3 ;
 int FUNC_9 (TYPE_1__*,int const*) ;
 int VAR_4 ;
 int FUNC_10 (TYPE_1__*,int const*) ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (TYPE_1__*,int const*,char*,int) ;
 int FUNC_12 (int ,char*,int const) ;

__attribute__((used)) static int
FUNC_13(netdissect_options *VAR_9,
                         const u_char *VAR_10, int VAR_11)
{
 int VAR_12, VAR_13;

 if (VAR_11 < 2)
  return 0;
 FUNC_5(*VAR_10, 2);
 VAR_12 = VAR_10[1];
 VAR_13 = VAR_10[0];
 if (VAR_11 < VAR_12)
  return 0;
 if (VAR_12 < 2) {
  if ((VAR_13 >= VAR_1) && (VAR_13 <= VAR_0))
   FUNC_3((VAR_9, "\n\t  %s Option (0x%02x), length %u (length bogus, should be >= 2)",
             VAR_5[VAR_13], VAR_13, VAR_12));
  else
   FUNC_3((VAR_9, "\n\tunknown LCP option 0x%02x", VAR_13));
  return 0;
 }
 if ((VAR_13 >= VAR_1) && (VAR_13 <= VAR_0))
  FUNC_3((VAR_9, "\n\t  %s Option (0x%02x), length %u", VAR_5[VAR_13], VAR_13, VAR_12));
 else {
  FUNC_3((VAR_9, "\n\tunknown LCP option 0x%02x", VAR_13));
  return VAR_12;
 }

 switch (VAR_13) {
 case 139:
  if (VAR_12 < 6) {
   FUNC_3((VAR_9, " (length bogus, should be >= 6)"));
   return VAR_12;
  }
  FUNC_7(VAR_10 + 2);
  FUNC_3((VAR_9, ": Vendor: %s (%u)",
   FUNC_12(VAR_6,"Unknown",FUNC_1(VAR_10+2)),
   FUNC_1(VAR_10 + 2)));
  break;
 case 148:
  if (VAR_12 != 4) {
   FUNC_3((VAR_9, " (length bogus, should be = 4)"));
   return VAR_12;
  }
  FUNC_6(VAR_10 + 2);
  FUNC_3((VAR_9, ": %u", FUNC_0(VAR_10 + 2)));
  break;
 case 169:
  if (VAR_12 != 6) {
   FUNC_3((VAR_9, " (length bogus, should be = 6)"));
   return VAR_12;
  }
  FUNC_8(VAR_10 + 2);
  FUNC_3((VAR_9, ": 0x%08x", FUNC_2(VAR_10 + 2)));
  break;
 case 167:
  if (VAR_12 < 4) {
   FUNC_3((VAR_9, " (length bogus, should be >= 4)"));
   return VAR_12;
  }
  FUNC_6(VAR_10 + 2);
  FUNC_3((VAR_9, ": %s", FUNC_12(VAR_8, "Unknown Auth Proto (0x04x)", FUNC_0(VAR_10 + 2))));

  switch (FUNC_0(VAR_10+2)) {
  case 132:
   FUNC_4(VAR_10[4]);
   FUNC_3((VAR_9, ", %s", FUNC_12(VAR_3, "Unknown Auth Alg %u", VAR_10[4])));
   break;
  case 130:
  case 131:
  case 129:
  case 128:
                        break;
  default:
   FUNC_11(VAR_9, VAR_10, "\n\t", VAR_12);
  }
  break;
 case 142:
  if (VAR_12 < 4) {
   FUNC_3((VAR_9, " (length bogus, should be >= 4)"));
   return 0;
  }
  FUNC_6(VAR_10+2);
  if (FUNC_0(VAR_10+2) == VAR_2)
   FUNC_3((VAR_9, ": LQR"));
  else
   FUNC_3((VAR_9, ": unknown"));
  break;
 case 150:
  if (VAR_12 != 6) {
   FUNC_3((VAR_9, " (length bogus, should be = 6)"));
   return 0;
  }
  FUNC_8(VAR_10 + 2);
  FUNC_3((VAR_9, ": 0x%08x", FUNC_2(VAR_10 + 2)));
  break;
 case 145:
  break;
 case 168:
  break;
 case 155:
  if (VAR_12 != 4) {
   FUNC_3((VAR_9, " (length bogus, should be = 4)"));
   return 0;
  }
  FUNC_6(VAR_10 + 2);
  FUNC_3((VAR_9, ": 0x%04x", FUNC_0(VAR_10 + 2)));
  break;
 case 166:
  if (VAR_12 < 3) {
   FUNC_3((VAR_9, " (length bogus, should be >= 3)"));
   return 0;
  }
  FUNC_3((VAR_9, ": "));
  FUNC_4(VAR_10[2]);
  FUNC_3((VAR_9, ": Callback Operation %s (%u)",
                       FUNC_12(VAR_7, "Unknown", VAR_10[2]),
                       VAR_10[2]));
  break;
 case 152:
  if (VAR_12 != 4) {
   FUNC_3((VAR_9, " (length bogus, should be = 4)"));
   return 0;
  }
  FUNC_6(VAR_10 + 2);
  FUNC_3((VAR_9, ": %u", FUNC_0(VAR_10 + 2)));
  break;
 case 154:
  if (VAR_12 < 3) {
   FUNC_3((VAR_9, " (length bogus, should be >= 3)"));
   return 0;
  }
  FUNC_4(VAR_10[2]);
  switch (VAR_10[2]) {
  case 134:
   FUNC_3((VAR_9, ": Null"));
   break;
  case 137:
   FUNC_3((VAR_9, ": Local"));
   break;
  case 138:
   if (VAR_12 != 7) {
    FUNC_3((VAR_9, " (length bogus, should be = 7)"));
    return 0;
   }
   FUNC_5(*(VAR_10 + 3), 4);
   FUNC_3((VAR_9, ": IPv4 %s", FUNC_10(VAR_9, VAR_10 + 3)));
   break;
  case 136:
   if (VAR_12 != 9) {
    FUNC_3((VAR_9, " (length bogus, should be = 9)"));
    return 0;
   }
   FUNC_5(*(VAR_10 + 3), 6);
   FUNC_3((VAR_9, ": MAC %s", FUNC_9(VAR_9, VAR_10 + 3)));
   break;
  case 135:
   FUNC_3((VAR_9, ": Magic-Num-Block"));
   break;
  case 133:
   FUNC_3((VAR_9, ": PSNDN"));
   break;
  default:
   FUNC_3((VAR_9, ": Unknown class %u", VAR_10[2]));
   break;
  }
  break;
 default:




  if (VAR_9->ndo_vflag < 2)
   FUNC_11(VAR_9, &VAR_10[2], "\n\t    ", VAR_12 - 2);
  break;
 }

 if (VAR_9->ndo_vflag > 1)
  FUNC_11(VAR_9, &VAR_10[2], "\n\t    ", VAR_12 - 2);

 return VAR_12;

trunc:
 FUNC_3((VAR_9, "[|lcp]"));
 return 0;
}
