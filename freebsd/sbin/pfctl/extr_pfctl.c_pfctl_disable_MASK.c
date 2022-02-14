
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int VAR_6 ;

int
FUNC_4(int VAR_7, int VAR_8)
{
 if (FUNC_3(VAR_7, VAR_0)) {
  if (VAR_5 == VAR_2)
   FUNC_1(1, "pf not enabled");
  else
   FUNC_0(1, "DIOCSTOP");
 }
 if ((VAR_8 & VAR_3) == 0)
  FUNC_2(VAR_6, "pf disabled\n");

 if (VAR_4 && FUNC_3(VAR_7, VAR_1))
   if (VAR_5 != VAR_2)
    FUNC_0(1, "DIOCSTOPALTQ");

 return (0);
}
