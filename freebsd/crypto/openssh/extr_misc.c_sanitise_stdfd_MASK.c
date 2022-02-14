
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_6 ;
 char* FUNC_6 (scalar_t__) ;

void
FUNC_7(void)
{
 int VAR_7, VAR_8;

 if ((VAR_7 = VAR_8 = FUNC_5(VAR_4, VAR_2)) == -1) {
  FUNC_4(VAR_6, "Couldn't open /dev/null: %s\n",
      FUNC_6(VAR_5));
  FUNC_2(1);
 }
 while (++VAR_8 <= VAR_3) {

  if (FUNC_3(VAR_8, VAR_1) == -1 && VAR_5 == VAR_0) {
   if (FUNC_1(VAR_7, VAR_8) == -1) {
    FUNC_4(VAR_6, "dup2: %s\n", FUNC_6(VAR_5));
    FUNC_2(1);
   }
  }
 }
 if (VAR_7 > VAR_3)
  FUNC_0(VAR_7);
}
