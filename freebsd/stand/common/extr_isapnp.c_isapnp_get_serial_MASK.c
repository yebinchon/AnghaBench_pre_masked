
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(uint8_t *VAR_4)
{
    int VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0x6a;

    FUNC_0(VAR_4, VAR_2);
    FUNC_3(VAR_1, VAR_0);
    for (VAR_5 = 0; VAR_5 < 72; VAR_5++) {
 VAR_6 = FUNC_2(VAR_3) == 0x55;
 FUNC_1(250);


 VAR_6 = (FUNC_2(VAR_3) == 0xaa) && VAR_6;
 FUNC_1(250);

 VAR_7 = VAR_7 || VAR_6;

 if (VAR_5 < 64)
     VAR_8 = (VAR_8 >> 1) |
  (((VAR_8 ^ (VAR_8 >> 1) ^ VAR_6) << 7) & 0xff);

 VAR_4[VAR_5 / 8] = (VAR_4[VAR_5 / 8] >> 1) | (VAR_6 ? 0x80 : 0);
    }

    VAR_7 = VAR_7 && (VAR_4[8] == VAR_8);

    return VAR_7;
}
