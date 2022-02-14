
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int const*) ;

void
FUNC_6(netdissect_options *VAR_0, const u_char *VAR_1)
{
 int VAR_2;




 FUNC_2(*VAR_1, 2);
 VAR_2 = FUNC_0(VAR_1);
 switch (VAR_2) {

 case 1:
  FUNC_3(VAR_0, VAR_1);
  break;

 case 5:
  FUNC_4(VAR_0, VAR_1);
  break;

 case 6:
  FUNC_5(VAR_0, VAR_1);
  break;

 default:
  FUNC_1((VAR_0, "NetFlow v%x", VAR_2));
  break;
 }
 return;

trunc:
 FUNC_1((VAR_0, "[|cnfp]"));
 return;
}
