
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (char const*,char const*,char const*,char*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int*) ;
 scalar_t__ VAR_2 ;

void
FUNC_6(int VAR_3, const char *VAR_4, int VAR_5)
{
 int VAR_6[2];
 const char *VAR_7;

 if (FUNC_5(VAR_6) < 0)
  FUNC_2(1, "could not pipe");
 VAR_2 = FUNC_4();
 if (VAR_2 < 0)
  FUNC_2(1, "could not fork");


 if (VAR_2) {
  if (VAR_5)
   FUNC_1(VAR_6[1], VAR_3);
  else
   FUNC_1(VAR_6[0], VAR_3);
  FUNC_0(VAR_6[0]);
  FUNC_0(VAR_6[1]);
 } else {
  if (VAR_5) {
   FUNC_1(VAR_6[0], VAR_0);
   FUNC_1(VAR_3, VAR_1);
   VAR_7 = "-c";
  } else {
   FUNC_1(VAR_6[1], VAR_1);
   FUNC_1(VAR_3, VAR_0);
   VAR_7 = "-dc";
  }
  FUNC_0(VAR_6[0]);
  FUNC_0(VAR_6[1]);
  if (FUNC_3(VAR_4, VAR_4, VAR_7,
      (char *)((void*)0)) < 0)
   FUNC_2(1, "could not exec");

 }
}
