
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double const,double const) ;

 int FUNC_1 (int ,int ) ;
 double const FUNC_2 (double const,double const) ;
 scalar_t__ FUNC_3 (double const) ;
 unsigned int FUNC_4 (double const*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void)
{
 static const double VAR_0[] = {
  0.0,
  -0.0,
  42.0,
  -42.0,
  128,
  -128,
 };

 unsigned VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_4(VAR_0); VAR_1++) {
  if (FUNC_3(VAR_0[VAR_1])) {
   FUNC_1(FUNC_5(FUNC_0(-128, VAR_0[VAR_1])),
       FUNC_0(0.0, FUNC_2(128, VAR_0[VAR_1])));
   FUNC_1(FUNC_5(FUNC_0(128, VAR_0[VAR_1])),
       FUNC_0(128, FUNC_2(0.0, VAR_0[VAR_1])));
  }
  FUNC_1(FUNC_5(FUNC_0(VAR_0[VAR_1], 128)),
      FUNC_0(128, 128));
  FUNC_1(FUNC_5(FUNC_0(VAR_0[VAR_1], -128)),
      FUNC_0(128, -128));
 }
}
