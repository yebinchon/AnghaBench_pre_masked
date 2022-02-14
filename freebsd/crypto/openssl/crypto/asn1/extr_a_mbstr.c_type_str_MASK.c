
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_6, void *VAR_7)
{
    unsigned long VAR_8 = *((unsigned long *)VAR_7);
    const int VAR_9 = VAR_6 > VAR_5 ? VAR_5 : FUNC_0(VAR_6);

    if ((VAR_8 & VAR_2) && !(FUNC_3(VAR_9)
                                            || VAR_9 == ' '))
        VAR_8 &= ~VAR_2;
    if ((VAR_8 & VAR_3) && !FUNC_2(VAR_9))
        VAR_8 &= ~VAR_3;
    if ((VAR_8 & VAR_1) && !FUNC_1(VAR_9))
        VAR_8 &= ~VAR_1;
    if ((VAR_8 & VAR_4) && (VAR_6 > 0xff))
        VAR_8 &= ~VAR_4;
    if ((VAR_8 & VAR_0) && (VAR_6 > 0xffff))
        VAR_8 &= ~VAR_0;
    if (!VAR_8)
        return -1;
    *((unsigned long *)VAR_7) = VAR_8;
    return 1;
}
