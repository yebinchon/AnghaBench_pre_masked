
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int teken_unit_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(teken_unit_t VAR_7, teken_unit_t VAR_8, bool VAR_9)
{
        uint16_t VAR_10;
        uint8_t VAR_11, VAR_12, VAR_13;

        VAR_11 = FUNC_0(VAR_6, VAR_5) & 0x1f;
        VAR_12 = FUNC_0(VAR_6, VAR_4) & 0xC0;
        VAR_13 = FUNC_0(VAR_6, VAR_1);

        if (VAR_9 == 1) {
                VAR_10 = VAR_7 * VAR_0 + VAR_8;
                FUNC_1(VAR_6, VAR_2, VAR_10 >> 8);
                FUNC_1(VAR_6, VAR_3,
      VAR_10 & 0xff);
                VAR_13 = VAR_11;
        } else {
                VAR_12 |= (1<<5);
        }
        FUNC_1(VAR_6, VAR_4, VAR_12);
        FUNC_1(VAR_6, VAR_1, VAR_13);
}
