
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,char*,int) ;

__attribute__((used)) static int
FUNC_1(unsigned char *VAR_0, unsigned char *VAR_1)
{
    int VAR_2, VAR_3;
    char VAR_4[11];

    FUNC_0(VAR_0, VAR_4, 8);
    FUNC_0(VAR_1, VAR_4+8, 3);
    VAR_2 = 0;
    for (VAR_3 = 0; VAR_3 < 11; VAR_3++) {
 VAR_2 = ((VAR_2 & 1) << 7) | (VAR_2 >> 1);
 VAR_2 += VAR_4[VAR_3];
 VAR_2 &= 0xff;
    }
    return (VAR_2);
}
