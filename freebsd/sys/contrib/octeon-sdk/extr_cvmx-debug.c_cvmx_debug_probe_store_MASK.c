
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(unsigned char *VAR_2)
{
    volatile unsigned char *VAR_3 = VAR_2;
    int VAR_4;

    VAR_0 = 1;
    VAR_1 = 0;

    asm volatile (".set push		\n\t"
                  ".set noreorder	\n\t"
                  "nop			\n\t"
                  "sb $0, %0		\n\t"
                  "nop			\n\t"
                  ".set pop" : "=m"(*VAR_3));
    VAR_4 = VAR_1 == 0;

    VAR_0 = 0;
    VAR_1 = 0;
    return VAR_4;
}
