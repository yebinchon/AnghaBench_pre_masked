
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int ,int *,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*) ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 () ;
 int VAR_9 ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,char*,...) ;

void FUNC_9(const char *VAR_10)
{
 FUNC_3(VAR_7);
 if (VAR_10)
  VAR_7 = FUNC_4(VAR_10);
 else
  VAR_7 = ((void*)0);
 FUNC_5();


 if (VAR_8 >= 0)
  return;
 VAR_8 = FUNC_2("/dev/random", VAR_5 | VAR_4);
 if (VAR_8 < 0) {
  FUNC_8(VAR_3, "random: Cannot open /dev/random: %s",
      FUNC_7(VAR_6));
  return;
 }
 FUNC_8(VAR_2, "random: Trying to read entropy from "
     "/dev/random");

 FUNC_0(VAR_8, VAR_9, ((void*)0), ((void*)0));


 FUNC_6();
}
