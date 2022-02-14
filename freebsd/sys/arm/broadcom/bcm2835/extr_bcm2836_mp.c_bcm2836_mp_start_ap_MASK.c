
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ uint32_t ;
typedef int platform_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ,int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 () ;
 int FUNC_15 () ;

void
FUNC_16(platform_t VAR_7)
{
 uint32_t VAR_8;
 int VAR_9, VAR_10;

 FUNC_4("platform_mp_start_ap\n");


 if (FUNC_8(VAR_4, VAR_0, VAR_1,
     0, &VAR_3) != 0)
  FUNC_11("can't map local peripheral\n");
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {

  FUNC_1(FUNC_5(VAR_9), 0xffffffff);
  FUNC_1(FUNC_6(VAR_9), 0xffffffff);
 }
 FUNC_15();
 FUNC_9();


 for (VAR_9 = 1; VAR_9 < VAR_5; VAR_9++) {

  FUNC_1(FUNC_7(VAR_9),
      (uint32_t)FUNC_12((vm_offset_t)VAR_6));

  FUNC_10();
  FUNC_14();


  VAR_10 = 1000;
  do {

   VAR_8 = FUNC_0(FUNC_6(VAR_9));
   if (VAR_8 == 0)
    break;
   FUNC_3(100);
   VAR_10--;
   if (VAR_10 <= 0) {
    FUNC_13("can't start for CPU%d\n", VAR_9);
    break;
   }
  } while (1);


  FUNC_10();
  FUNC_14();


  FUNC_2(VAR_9, &VAR_2);
 }
}
