
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int platform_t ;
typedef int bus_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int,int,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 () ;

void
FUNC_14(platform_t VAR_8)
{
 bus_addr_t VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_11 = FUNC_3(VAR_5, VAR_3, 0x20000, 0, &VAR_10);
 if (VAR_11 != 0)
  FUNC_10("Couldn't map pmu\n");

 if (FUNC_9() == VAR_1)
  VAR_15 = VAR_2;
 else
  VAR_15 = VAR_4;

 VAR_11 = FUNC_3(VAR_5, VAR_15, 0x100, 0, &VAR_9);
 if (VAR_11 != 0)
  FUNC_10("Couldn't map sysram\n");


 for (VAR_12 = 1; VAR_12 < VAR_6; VAR_12++) {
  FUNC_6(VAR_5, VAR_10, FUNC_0(VAR_12),
      VAR_0);

  for (VAR_13 = 10; VAR_13 >= 0; VAR_13--) {
   VAR_14 = FUNC_4(VAR_5, VAR_10,
       FUNC_1(VAR_12));
   if ((VAR_14 & VAR_0) == VAR_0)
    break;
   FUNC_2(10);
   if (VAR_13 == 0)
    FUNC_12("Can't power on CPU%d\n", VAR_12);
  }
 }

 FUNC_6(VAR_5, VAR_9, 0x0,
     FUNC_11((vm_offset_t)VAR_7));

 FUNC_7();

 FUNC_8();
 FUNC_13();
 FUNC_5(VAR_5, VAR_9, 0x100);
 FUNC_5(VAR_5, VAR_10, 0x20000);
}
