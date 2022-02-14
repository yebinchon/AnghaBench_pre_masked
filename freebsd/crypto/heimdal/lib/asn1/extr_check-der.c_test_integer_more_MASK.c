
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1 (void)
{
    int VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

    VAR_2 = 0;
    for (VAR_0 = 0; VAR_0 < (sizeof(int) * 8); VAR_0++) {
 VAR_1 = 0x01 << VAR_0;
 VAR_2 = VAR_2 | VAR_1;
 VAR_3 = ~VAR_1;
 VAR_4 = ~VAR_2;
 VAR_5 = (-1) & ~(0x3f << VAR_0);
 VAR_6 = (-1) & ~(0x7f << VAR_0);

 FUNC_0(VAR_1);
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 FUNC_0(VAR_6);
    }
    return 0;
}
