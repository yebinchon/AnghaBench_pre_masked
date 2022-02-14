
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static inline int FUNC_3(unsigned int VAR_0)
{
    return FUNC_0(VAR_0)
        && ((FUNC_2() == 0) ||
            ((FUNC_1(FUNC_2()) & VAR_0) == 0));
}
