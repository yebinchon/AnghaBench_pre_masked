
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_char ;
typedef int netdissect_options ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__ const*) ;
 size_t VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__ const) ;
 size_t VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,scalar_t__ const) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_6,
          const u_char *VAR_7)
{
 uint32_t VAR_8;

 FUNC_2(VAR_7[VAR_2]);
 if (VAR_7[VAR_2] == VAR_3) {




  FUNC_1((VAR_6, "Q.2931"));
  FUNC_2(VAR_7[VAR_1]);
  FUNC_1((VAR_6, ":%s ",
      FUNC_3(VAR_4, "msgtype#%d", VAR_7[VAR_1])));







  VAR_8 = FUNC_0(&VAR_7[VAR_0]);
  FUNC_1((VAR_6, "CALL_REF:0x%06x", VAR_8));
 } else {

  FUNC_1((VAR_6, "SSCOP, proto %d ", VAR_7[VAR_2]));
 }
 return;

trunc:
 FUNC_1((VAR_6, " %s", VAR_5));
}
