
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ) ;
 int VAR_4 ;
 int FUNC_3 () ;
 scalar_t__ VAR_5 ;

void
FUNC_4(int VAR_6, char *VAR_7[])
{
 int VAR_8;

 if (VAR_6 == 0) {
  FUNC_0("usage: %s\n", VAR_7[0]);
  VAR_2 = -1;
  return;
 }
 VAR_8 = FUNC_1("CDUP");
 if (VAR_8 == VAR_1 && VAR_2 == 500) {
  if (VAR_5)
   FUNC_2("CDUP command not recognized, trying XCUP.\n",
       VAR_4);
  VAR_8 = FUNC_1("XCUP");
 }
 if (VAR_8 == VAR_0) {
  VAR_3 = 1;
  FUNC_3();
 }
}
