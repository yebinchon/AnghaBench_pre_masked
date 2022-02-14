
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, const u_int8_t *VAR_2, size_t VAR_3, int VAR_4)
{
 FUNC_1("%s", VAR_1);
 if (VAR_0) {
  const char *VAR_5;
  int VAR_6;

  VAR_2 += 2, VAR_3 -= 2;

  FUNC_1("<v%u", FUNC_0(VAR_2));
  VAR_2 += 2, VAR_3 -= 2;

  FUNC_1(" mc:%s", FUNC_2(VAR_2));
  VAR_2 += 4, VAR_3 -= 4;


  VAR_6 = FUNC_0(VAR_2);
  VAR_2 += 2, VAR_3 -= 2;
  VAR_5 = " uc:";
  for (; VAR_6 > 0; VAR_6--) {
   FUNC_1("%s%s", VAR_5, FUNC_2(VAR_2));
   VAR_2 += 4, VAR_3 -= 4;
   VAR_5 = "+";
  }


  VAR_6 = FUNC_0(VAR_2);
  VAR_2 += 2, VAR_3 -= 2;
  VAR_5 = " km:";
  for (; VAR_6 > 0; VAR_6--) {
   FUNC_1("%s%s", VAR_5, FUNC_3(VAR_2));
   VAR_2 += 4, VAR_3 -= 4;
   VAR_5 = "+";
  }

  if (VAR_3 > 2)
   FUNC_1(", caps 0x%x", FUNC_0(VAR_2));

  FUNC_1(">");
 }
}
