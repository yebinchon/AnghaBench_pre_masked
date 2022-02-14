
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; int eax; int ecx; int edx; scalar_t__ ctl; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(void)
{
    int VAR_1, VAR_2, VAR_3;

    VAR_0 = 0;
    VAR_0 = 0x1a;
    VAR_0 = 0x0200;
    FUNC_1();

    VAR_1 = FUNC_0((VAR_0 & 0xff00) >> 8);
    VAR_2 = FUNC_0(VAR_0 & 0xff);
    VAR_3 = FUNC_0((VAR_0 & 0xff00) >> 8);

    return (VAR_1 * 3600 + VAR_2 * 60 + VAR_3);
}
