
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;

int
FUNC_3(u_char *VAR_1)
{
    int VAR_2, VAR_3, VAR_4 = 0, VAR_5 = 0x6a;

    FUNC_1(VAR_1, sizeof(char) * 9);

    for (VAR_2 = 0; VAR_2 < 72; VAR_2++) {
 VAR_3 = FUNC_2((VAR_0 << 2) | 0x3) == 0x55;
 FUNC_0(250);


 VAR_3 = (FUNC_2((VAR_0 << 2) | 0x3) == 0xaa) && VAR_3;
 FUNC_0(250);

 VAR_4 = VAR_4 || VAR_3;

 if (VAR_2 < 64)
     VAR_5 = (VAR_5 >> 1) |
  (((VAR_5 ^ (VAR_5 >> 1) ^ VAR_3) << 7) & 0xff);

 VAR_1[VAR_2 / 8] = (VAR_1[VAR_2 / 8] >> 1) | (VAR_3 ? 0x80 : 0);
    }

    VAR_4 = VAR_4 && (VAR_1[8] == VAR_5);

    return VAR_4;
}
