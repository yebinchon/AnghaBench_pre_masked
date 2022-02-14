
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int *,int const*,int,int const*,int*,int*) ;
 int FUNC_3 (int *,int const*,int,int,int const*) ;
 int FUNC_4 (int *,int const*,int,int const*) ;

void
FUNC_5(netdissect_options *VAR_0,
       const u_char *VAR_1, u_int VAR_2,
       const u_char *VAR_3)
{
 FUNC_1(VAR_1[0]);
 if(VAR_2 == 1 && VAR_1[0]==0xff) {
  FUNC_0((VAR_0, "isakmp-nat-keep-alive"));
  return;
 }

 if(VAR_2 < 4) {
  goto trunc;
 }
 FUNC_1(VAR_1[3]);




 if(VAR_1[0]==0 && VAR_1[1]==0 && VAR_1[2]==0 && VAR_1[3]==0) {
  FUNC_0((VAR_0, "NONESP-encap: "));
  FUNC_4(VAR_0, VAR_1+4, VAR_2-4, VAR_3);
  return;
 }


 {
  int VAR_4, VAR_5, VAR_6;
  int VAR_7;

  FUNC_0((VAR_0, "UDP-encap: "));

  VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5, &VAR_6);
  if(VAR_7 <= 0)
   return;

  VAR_1 += VAR_7;
  VAR_2 -= VAR_7 + VAR_6;
  VAR_4 = VAR_5 & 0xff;

  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_4, VAR_3);
  return;
 }

trunc:
 FUNC_0((VAR_0,"[|isakmp]"));
 return;
}
