
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int ,char*,int const) ;
 int FUNC_2 (char*,char*,int,long double,long double,char*) ;
 int VAR_1 ;
 int FUNC_3 (long double,long double) ;

__attribute__((used)) static void
FUNC_4(int VAR_2, long double VAR_3, long double VAR_4)
{
 static const int VAR_5[] = {
  130, 128, 131, 129
 };
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  FUNC_0(VAR_5[VAR_6]);
  if (!FUNC_3(VAR_3, VAR_4)) {
   FUNC_1(VAR_1, "FAILURE in rounding mode %d\n",
    VAR_5[VAR_6]);
   break;
  }
 }
 FUNC_2("%sok %d - big = %.20Lg, small = %.20Lg%s\n",
        (VAR_6 == 4) ? "" : "not ", VAR_2, VAR_3, VAR_4,
        VAR_0 == ((void*)0) ? "" : VAR_0);
}
