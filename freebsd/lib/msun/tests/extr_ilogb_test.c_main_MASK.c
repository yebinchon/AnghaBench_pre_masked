
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long double VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 long double VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (double) ;
 int FUNC_2 (float) ;
 int FUNC_3 (long double) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,int) ;
 double FUNC_6 (char*,char**) ;
 float FUNC_7 (char*,char**) ;
 long double FUNC_8 (char*,char**) ;

int
FUNC_9(void)
{
 char VAR_14[128], *VAR_15;
 double VAR_16;
 float VAR_17;
 long double VAR_18;
 int VAR_19, VAR_20;

 FUNC_4("1..3\n");
 FUNC_0(FUNC_1(0) == VAR_6);
 FUNC_0(FUNC_1(VAR_13) == VAR_7);
 FUNC_0(FUNC_1(VAR_8) == VAR_9);
 for (VAR_19 = VAR_2 - VAR_0; VAR_19 < VAR_1; VAR_19++) {
  FUNC_5(VAR_14, sizeof(VAR_14), "0x1.p%d", VAR_19);
  VAR_16 = FUNC_6(VAR_14, &VAR_15);
  FUNC_0(*VAR_15 == '\0');
  VAR_20 = FUNC_1(VAR_16);
  FUNC_0(VAR_20 == VAR_19);
 }
 FUNC_4("ok 1 - ilogb\n");

 FUNC_0(FUNC_2(0) == VAR_6);
 FUNC_0(FUNC_2(VAR_13) == VAR_7);
 FUNC_0(FUNC_2(VAR_8) == VAR_9);
 for (VAR_19 = VAR_5 - VAR_3; VAR_19 < VAR_4; VAR_19++) {
  FUNC_5(VAR_14, sizeof(VAR_14), "0x1.p%d", VAR_19);
  VAR_17 = FUNC_7(VAR_14, &VAR_15);
  FUNC_0(*VAR_15 == '\0');
  VAR_20 = FUNC_2(VAR_17);
  FUNC_0(VAR_20 == VAR_19);
 }
 FUNC_4("ok 2 - ilogbf\n");

 FUNC_0(FUNC_3(0) == VAR_6);
 FUNC_0(FUNC_3(VAR_13) == VAR_7);
 FUNC_0(FUNC_3(VAR_8) == VAR_9);
 for (VAR_19 = VAR_12 - VAR_10; VAR_19 < VAR_11; VAR_19++) {
  FUNC_5(VAR_14, sizeof(VAR_14), "0x1.p%d", VAR_19);
  VAR_18 = FUNC_8(VAR_14, &VAR_15);
  FUNC_0(*VAR_15 == '\0');
  VAR_20 = FUNC_3(VAR_18);
  FUNC_0(VAR_20 == VAR_19);
 }
 FUNC_4("ok 3 - ilogbl\n");

 return (0);
}
