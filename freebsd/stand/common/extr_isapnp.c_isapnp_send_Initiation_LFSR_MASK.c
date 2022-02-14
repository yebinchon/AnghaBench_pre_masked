
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(void)
{
    int VAR_1, VAR_2;


    FUNC_0(VAR_0, 0);
    FUNC_0(VAR_0, 0);

    VAR_1 = 0x6a;
    FUNC_0(VAR_0, VAR_1);

    for (VAR_2 = 1; VAR_2 < 32; VAR_2++) {
 VAR_1 = (VAR_1 >> 1) | (((VAR_1 ^ (VAR_1 >> 1)) << 7) & 0xff);
 FUNC_0(VAR_0, VAR_1);
    }
}
