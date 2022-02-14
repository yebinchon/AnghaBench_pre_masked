
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct rx_header {int dummy; } ;
typedef int netdissect_options ;
typedef int int32_t ;


 int FUNC_0 () ;
 int FUNC_1 (int const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const,int) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_9(netdissect_options *VAR_2,
           register const u_char *VAR_3)
{
 int VAR_4;
 int32_t VAR_5;
 VAR_4 = FUNC_1(VAR_3 + sizeof(struct rx_header));

 FUNC_3((VAR_2, " ubik call %s", FUNC_8(VAR_1, "op#%d", VAR_4)));





 VAR_3 += sizeof(struct rx_header) + 4;

 switch (VAR_4) {
  case 10000:
   FUNC_4(VAR_3[0], 4);
   VAR_5 = FUNC_1(VAR_3);
   VAR_3 += sizeof(int32_t);
   FUNC_3((VAR_2, " syncsite %s", VAR_5 ? "yes" : "no"));
   FUNC_3((VAR_2, " votestart"));
   FUNC_0();
   FUNC_3((VAR_2, " dbversion"));
   FUNC_6();
   FUNC_3((VAR_2, " tid"));
   FUNC_6();
   break;
  case 10003:
   FUNC_3((VAR_2, " site"));
   FUNC_7();
   break;
  case 20000:
  case 20001:
  case 20007:
  case 20008:
  case 20010:
   FUNC_3((VAR_2, " tid"));
   FUNC_6();
   break;
  case 20002:
   FUNC_3((VAR_2, " tid"));
   FUNC_6();
   FUNC_3((VAR_2, " file"));
   FUNC_2();
   FUNC_3((VAR_2, " pos"));
   FUNC_2();
   FUNC_3((VAR_2, " length"));
   FUNC_2();
   FUNC_5(VAR_3);
   VAR_5 = FUNC_1(VAR_3);
   VAR_3 += sizeof(int32_t);
   FUNC_8(VAR_0, "type %d", VAR_5);
   break;
  case 20003:
   FUNC_3((VAR_2, " tid"));
   FUNC_6();
   FUNC_3((VAR_2, " file"));
   FUNC_2();
   FUNC_3((VAR_2, " pos"));
   FUNC_2();
   break;
  case 20005:
   FUNC_3((VAR_2, " file"));
   FUNC_2();
   break;
  case 20006:
   FUNC_3((VAR_2, " file"));
   FUNC_2();
   FUNC_3((VAR_2, " length"));
   FUNC_2();
   FUNC_3((VAR_2, " dbversion"));
   FUNC_6();
   break;
  case 20009:
   FUNC_3((VAR_2, " tid"));
   FUNC_6();
   FUNC_3((VAR_2, " file"));
   FUNC_2();
   FUNC_3((VAR_2, " length"));
   FUNC_2();
   break;
  case 20012:
   FUNC_3((VAR_2, " tid"));
   FUNC_6();
   FUNC_3((VAR_2, " oldversion"));
   FUNC_6();
   FUNC_3((VAR_2, " newversion"));
   FUNC_6();
   break;
  default:
   ;
 }

 return;

trunc:
 FUNC_3((VAR_2, " [|ubik]"));
}
