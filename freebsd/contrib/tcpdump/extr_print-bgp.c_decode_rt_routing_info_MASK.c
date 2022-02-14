
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
typedef int route_target ;
typedef int netdissect_options ;
typedef int astostr ;
typedef int asbuf ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int *,char*,int,int ) ;
 char* FUNC_5 (int *,int*) ;
 int FUNC_6 (int **,int const*,int) ;
 int FUNC_7 (int **,int ,int) ;
 int FUNC_8 (char*,int,char*,...) ;

__attribute__((used)) static int
FUNC_9(netdissect_options *VAR_0,
                       const u_char *VAR_1, char *VAR_2, u_int VAR_3)
{
 uint8_t VAR_4[8];
 u_int VAR_5;
 char VAR_6[sizeof(astostr)];


 FUNC_1(VAR_1[0]);
 VAR_5 = VAR_1[0];





 if (0 == VAR_5) {

  FUNC_8(VAR_2, VAR_3, "default route target");
  return 1;
 }

 if (32 > VAR_5)
  return -1;


 FUNC_3(VAR_1 + 1);
 FUNC_4(VAR_0, VAR_6, sizeof(VAR_6), FUNC_0(VAR_1 + 1));

        VAR_5-=32;

 if (64 < VAR_5)
  return -1;





 FUNC_7(&VAR_4, 0, sizeof(VAR_4));
 FUNC_2(VAR_1[5], (VAR_5 + 7) / 8);
 FUNC_6(&VAR_4, &VAR_1[5], (VAR_5 + 7) / 8);

 if (VAR_5 % 8) {
  ((u_char *)&VAR_4)[(VAR_5 + 7) / 8 - 1] &=
   ((0xff00 >> (VAR_5 % 8)) & 0xff);
 }
 FUNC_8(VAR_2, VAR_3, "origin AS: %s, route target %s",
     VAR_6,
     FUNC_5(VAR_0, (u_char *)&VAR_4));

 return 5 + (VAR_5 + 7) / 8;

trunc:
 return -2;
}
