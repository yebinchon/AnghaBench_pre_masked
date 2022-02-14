
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ version; scalar_t__ hit; scalar_t__ server; } ;
typedef TYPE_1__ SSL ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(SSL *VAR_8, unsigned int VAR_9, unsigned int VAR_10)
{
    int VAR_11;





    if ((VAR_10 & VAR_5) != 0)
        VAR_11 = 1;
    else
        VAR_11 = FUNC_1(VAR_8);

    if ((FUNC_0(VAR_8)
                && (VAR_9 & VAR_7) != 0)
            || (VAR_8->version == VAR_0
                    && (VAR_9 & VAR_3) == 0)
            || (VAR_11 && (VAR_9 & VAR_4) != 0)
            || (!VAR_11 && (VAR_9 & VAR_6) != 0
                && (VAR_10 & VAR_1) == 0)
            || (VAR_8->server && !VAR_11 && (VAR_9 & VAR_6) != 0)
            || (VAR_8->hit && (VAR_9 & VAR_2) != 0))
        return 0;
    return 1;
}
