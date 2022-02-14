
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(SSL *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{

    if ((VAR_4 & VAR_3) == 0)
        return 0;

    if (FUNC_0(VAR_2)) {
        if ((VAR_3 & VAR_1) != 0)
            return 0;
    } else if ((VAR_3 & VAR_0) != 0) {
        return 0;
    }

    return 1;
}
