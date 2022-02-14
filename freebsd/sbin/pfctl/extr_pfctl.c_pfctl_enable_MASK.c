
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int VAR_7 ;

int
FUNC_4(int VAR_8, int VAR_9)
{
 if (FUNC_3(VAR_8, VAR_0)) {
  if (VAR_6 == VAR_2)
   FUNC_1(1, "pf already enabled");
  else if (VAR_6 == VAR_3)
   FUNC_1(1, "pfil registeration failed");
  else
   FUNC_0(1, "DIOCSTART");
 }
 if ((VAR_9 & VAR_4) == 0)
  FUNC_2(VAR_7, "pf enabled\n");

 if (VAR_5 && FUNC_3(VAR_8, VAR_1))
  if (VAR_6 != VAR_2)
   FUNC_0(1, "DIOCSTARTALTQ");

 return (0);
}
