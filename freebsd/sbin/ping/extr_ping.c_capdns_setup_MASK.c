
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cap_channel_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int*,int) ;
 scalar_t__ FUNC_2 (int *,char const**,int) ;
 int * FUNC_3 () ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int,char*) ;

__attribute__((used)) static cap_channel_t *
FUNC_6(void)
{
 cap_channel_t *VAR_1, *VAR_2;




 VAR_1 = FUNC_3();
 if (VAR_1 == ((void*)0))
  FUNC_5(1, "unable to create casper process");
 VAR_2 = FUNC_4(VAR_1, "system.dns");

 FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  FUNC_5(1, "unable to open system.dns service");
 return (VAR_2);
}
