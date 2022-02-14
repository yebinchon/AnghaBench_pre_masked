
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int,int ,int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_3)
{
 device_t VAR_4;
 uint32_t VAR_5;
 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_3, "Unable to find parent root port\n");
  return;
 }

 VAR_5 = FUNC_3(VAR_4, VAR_2,
     VAR_1 | VAR_0, 0, 2);
 if ((VAR_5 & (VAR_1 | VAR_0)) !=
     0)
  FUNC_1(VAR_3, "Disabled No Snoop/Relaxed Ordering on %s\n",
      FUNC_0(VAR_4));
}
