
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint32_t ;
typedef int platform_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 () ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

void
FUNC_8(platform_t VAR_11)
{
 bus_space_handle_t VAR_12;
 bus_space_handle_t VAR_13;
 int VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16;

 if (FUNC_0(VAR_8, VAR_1, VAR_4, 0, &VAR_12) != 0)
  FUNC_5("Couldn't map the PMC\n");
 if (FUNC_0(VAR_8, VAR_5,
     VAR_6, 0, &VAR_13) != 0)
  FUNC_5("Couldn't map the exception vectors\n");

 FUNC_3(VAR_8, VAR_13 , VAR_7,
     FUNC_6((vm_offset_t)VAR_10));
 FUNC_1(VAR_8, VAR_13 , VAR_7);



 do {
  VAR_15 = FUNC_1(VAR_8, VAR_12,
      VAR_3);
 } while ((VAR_15 & VAR_0) != 0);

 for (VAR_14 = 1; VAR_14 < VAR_9; VAR_14++) {
  VAR_15 = FUNC_1(VAR_8, VAR_12, VAR_2);
  VAR_16 = 1 << (VAR_14 + 8);
  if ((VAR_15 & VAR_16) == 0) {

   do {
    VAR_15 = FUNC_1(VAR_8, VAR_12,
    VAR_3);
   } while ((VAR_15 & VAR_0) != 0);
   FUNC_3(VAR_8, VAR_12,
       VAR_3,
       VAR_0 | (8 + VAR_14));


   do {
    VAR_15 = FUNC_1(VAR_8, VAR_12,
        VAR_2);
   } while ((VAR_15 & VAR_16) == 0);
  }

 }
 FUNC_4();
 FUNC_7();
 FUNC_2(VAR_8, VAR_12, VAR_4);
 FUNC_2(VAR_8, VAR_13, VAR_6);
}
