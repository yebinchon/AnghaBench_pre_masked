
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct rx_header {scalar_t__ type; } ;
typedef int netdissect_options ;
typedef int int32_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_2,
                 register const u_char *VAR_3, int VAR_4, int32_t VAR_5)
{
 const struct rx_header *VAR_6;

 if (VAR_4 < (int)sizeof(struct rx_header))
  return;

 VAR_6 = (const struct rx_header *) VAR_3;






 FUNC_2((VAR_2, " ubik reply %s", FUNC_4(VAR_1, "op#%d", VAR_5)));

 VAR_3 += sizeof(struct rx_header);





 if (VAR_6->type == VAR_0)
  switch (VAR_5) {
  case 10000:
   FUNC_2((VAR_2, " vote no"));
   break;
  case 20004:
   FUNC_2((VAR_2, " dbversion"));
   FUNC_3();
   break;
  default:
   ;
  }







 else
  switch (VAR_5) {
  case 10000:
   FUNC_2((VAR_2, " vote yes until"));
   FUNC_0();
   break;
  default:
   FUNC_2((VAR_2, " errcode"));
   FUNC_1();
  }

 return;

trunc:
 FUNC_2((VAR_2, " [|ubik]"));
}
