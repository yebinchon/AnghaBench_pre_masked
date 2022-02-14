
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int platform_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 () ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(platform_t VAR_7)
{
 bus_space_handle_t VAR_8;
 uint32_t VAR_9;

 FUNC_4("Resetting...\n");
 FUNC_0(VAR_6, VAR_1, VAR_5, 0, &VAR_8);

 VAR_9 = FUNC_1(VAR_6, VAR_8, VAR_2);
 VAR_9 &= VAR_4;
 FUNC_2(VAR_6, VAR_8, VAR_2,
    VAR_9 | VAR_3);
 FUNC_1(VAR_6, VAR_8, VAR_2);

 VAR_9 = FUNC_1(VAR_6, VAR_8, VAR_0);
 FUNC_5();
 FUNC_3();
 FUNC_2(VAR_6, VAR_8, VAR_0, VAR_9 | 0x10);
 FUNC_1(VAR_6, VAR_8, VAR_0);
 while(1)
  ;

}
