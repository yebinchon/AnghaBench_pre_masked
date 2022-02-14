
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void
FUNC_1(netdissect_options *VAR_2, u_char VAR_3)
{
 switch (VAR_3) {

 case 128:
  FUNC_0((VAR_2, "void "));
  break;

 case 133:
  FUNC_0((VAR_2, "nrt "));
  break;

 case 132:
  FUNC_0((VAR_2, "rt "));
  break;

 case 130:
  FUNC_0((VAR_2, "info "));
  break;

 case 129:
  FUNC_0((VAR_2, "nsa "));
  break;

 case 135:
  FUNC_0((VAR_2, "beacon "));
  break;

 case 134:
  FUNC_0((VAR_2, "claim "));
  break;

 default:
  switch (VAR_3 & VAR_0) {

  case 136:
   FUNC_0((VAR_2, "mac%1x ", VAR_3 & VAR_1));
   break;

  case 131:
   FUNC_0((VAR_2, "smt%1x ", VAR_3 & VAR_1));
   break;

  case 138:
   FUNC_0((VAR_2, "async%1x ", VAR_3 & VAR_1));
   break;

  case 137:
   FUNC_0((VAR_2, "sync%1x ", VAR_3 & VAR_1));
   break;

  case 140:
   FUNC_0((VAR_2, "imp_async%1x ", VAR_3 & VAR_1));
   break;

  case 139:
   FUNC_0((VAR_2, "imp_sync%1x ", VAR_3 & VAR_1));
   break;

  default:
   FUNC_0((VAR_2, "%02x ", VAR_3));
   break;
  }
 }
}
