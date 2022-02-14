
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(unsigned char *VAR_2, unsigned char *VAR_3)
{
    volatile unsigned char *VAR_4 = VAR_2;
    int VAR_5;
    unsigned char VAR_6;

    {
        VAR_0 = 1;
        VAR_1 = 0;

        asm volatile (".set push		\n\t"
                      ".set noreorder	\n\t"
                      "nop			\n\t"
                      "lbu %0, %1		\n\t"
                      "nop			\n\t"
                      ".set pop" : "=r"(VAR_6) : "m"(*VAR_4));
        VAR_5 = VAR_1 == 0;
        VAR_0 = 0;
        VAR_1 = 0;
 *VAR_3 = VAR_6;
    }
    return VAR_5;
}
