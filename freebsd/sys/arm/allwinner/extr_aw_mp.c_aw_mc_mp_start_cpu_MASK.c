
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bus_space_handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_7(bus_space_handle_t VAR_2, bus_space_handle_t VAR_3,
    bus_space_handle_t VAR_4, int VAR_5, int VAR_6)
{
 uint32_t VAR_7;
 int VAR_8;


 VAR_7 = FUNC_5(VAR_1, VAR_3, FUNC_2(VAR_5));
 VAR_7 &= ~(1 << VAR_6);
 FUNC_6(VAR_1, VAR_3, FUNC_2(VAR_5), VAR_7);


 VAR_7 = FUNC_5(VAR_1, VAR_2, FUNC_0(VAR_5));
 VAR_7 &= ~(1 << VAR_6);
 FUNC_6(VAR_1, VAR_2, FUNC_0(VAR_5), VAR_7);


 VAR_7 = FUNC_5(VAR_1, VAR_3, FUNC_1(VAR_5));
 VAR_7 &= ~(1 << VAR_6);
 FUNC_6(VAR_1, VAR_3, FUNC_1(VAR_5), VAR_7);


 for (VAR_8 = 0; VAR_8 <= VAR_0; VAR_8++)
  FUNC_6(VAR_1, VAR_4,
      FUNC_4(VAR_5, VAR_6), 0xff >> VAR_8);
 while (FUNC_5(VAR_1, VAR_4,
     FUNC_4(VAR_5, VAR_6)) != 0)
  ;


 VAR_7 = FUNC_5(VAR_1, VAR_4, FUNC_3(VAR_5));
 VAR_7 &= ~(1 << VAR_6);
 FUNC_6(VAR_1, VAR_4, FUNC_3(VAR_5), VAR_7);


 VAR_7 = FUNC_5(VAR_1, VAR_2, FUNC_0(VAR_5));
 VAR_7 |= (1 << VAR_6);
 FUNC_6(VAR_1, VAR_2, FUNC_0(VAR_5), VAR_7);


 VAR_7 = FUNC_5(VAR_1, VAR_3, FUNC_2(VAR_5));
 VAR_7 |= (1 << VAR_6);
 FUNC_6(VAR_1, VAR_3, FUNC_2(VAR_5), VAR_7);
}
