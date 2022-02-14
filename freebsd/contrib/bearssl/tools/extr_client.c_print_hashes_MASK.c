
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*) ;
 char* FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(unsigned VAR_1, unsigned VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3 ++) {
  const char *VAR_4;

  VAR_4 = FUNC_1(VAR_3);
  if (((VAR_1 >> VAR_3) & 1) != 0) {
   FUNC_0(VAR_0, " %s", VAR_4);
  } else if (((VAR_2 >> VAR_3) & 1) != 0) {
   FUNC_0(VAR_0, " (%s)", VAR_4);
  }
 }
}
