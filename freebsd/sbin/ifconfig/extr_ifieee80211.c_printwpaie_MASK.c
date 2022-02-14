
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 char* FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, const u_int8_t *VAR_2, size_t VAR_3, int VAR_4)
{
 u_int8_t VAR_5 = VAR_2[1];

 FUNC_1("%s", VAR_1);
 if (VAR_0) {
  const char *VAR_6;
  int VAR_7;

  VAR_2 += 6, VAR_5 -= 4;

  FUNC_1("<v%u", FUNC_0(VAR_2));
  VAR_2 += 2, VAR_5 -= 2;

  FUNC_1(" mc:%s", FUNC_2(VAR_2));
  VAR_2 += 4, VAR_5 -= 4;


  VAR_7 = FUNC_0(VAR_2);
  VAR_2 += 2, VAR_5 -= 2;
  VAR_6 = " uc:";
  for (; VAR_7 > 0; VAR_7--) {
   FUNC_1("%s%s", VAR_6, FUNC_2(VAR_2));
   VAR_2 += 4, VAR_5 -= 4;
   VAR_6 = "+";
  }


  VAR_7 = FUNC_0(VAR_2);
  VAR_2 += 2, VAR_5 -= 2;
  VAR_6 = " km:";
  for (; VAR_7 > 0; VAR_7--) {
   FUNC_1("%s%s", VAR_6, FUNC_3(VAR_2));
   VAR_2 += 4, VAR_5 -= 4;
   VAR_6 = "+";
  }

  if (VAR_5 > 2)
   FUNC_1(", caps 0x%x", FUNC_0(VAR_2));
  FUNC_1(">");
 }
}
