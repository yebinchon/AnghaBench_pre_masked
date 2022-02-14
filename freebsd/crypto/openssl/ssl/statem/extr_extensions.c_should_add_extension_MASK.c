
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;

int FUNC_2(SSL *VAR_3, unsigned int VAR_4, unsigned int VAR_5,
                         int VAR_6)
{

    if ((VAR_4 & VAR_5) == 0)
        return 0;


    if (!FUNC_1(VAR_3, VAR_4, VAR_5)
            || ((VAR_4 & VAR_1) != 0
                && (VAR_5 & VAR_0) != 0
                && (FUNC_0(VAR_3) || VAR_6 < VAR_2)))
        return 0;

    return 1;
}
