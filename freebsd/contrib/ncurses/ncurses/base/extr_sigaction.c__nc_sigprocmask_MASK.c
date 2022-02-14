
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(int VAR_3, sigset_t * VAR_4, sigset_t * VAR_5)
{
    sigset_t VAR_6 = FUNC_0(0);

    if (VAR_5)
 *VAR_5 = VAR_6;

    if (VAR_3 == VAR_0)
 VAR_6 |= *VAR_4;
    else if (VAR_3 == VAR_2)
 VAR_6 &= ~*VAR_4;
    else if (VAR_3 == VAR_1)
 VAR_6 = *VAR_4;

    FUNC_0(VAR_6);
    return 0;
}
