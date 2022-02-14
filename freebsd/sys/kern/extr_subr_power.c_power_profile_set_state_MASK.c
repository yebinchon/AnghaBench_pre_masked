
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char*) ;

void
FUNC_2(int VAR_4)
{
 int VAR_5;

 if (VAR_4 != VAR_3) {
  VAR_3 = VAR_4;
  VAR_5 = 1;
  if (VAR_1) {
   FUNC_1("system power profile changed to '%s'\n",
    (VAR_4 == VAR_0) ?
    "performance" : "economy");
  }
 } else {
  VAR_5 = 0;
 }

 if (VAR_5)
  FUNC_0(VAR_2, 0);
}
