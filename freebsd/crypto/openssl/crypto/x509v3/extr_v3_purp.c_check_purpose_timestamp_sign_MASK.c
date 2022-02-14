
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509_PURPOSE ;
typedef int X509_EXTENSION ;
struct TYPE_6__ {int ex_flags; int ex_kusage; scalar_t__ ex_xkusage; } ;
typedef TYPE_1__ X509 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__ const*,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_4(const X509_PURPOSE *VAR_6, const X509 *VAR_7,
                                        int VAR_8)
{
    int VAR_9;


    if (VAR_8)
        return FUNC_3(VAR_7);







    if ((VAR_7->ex_flags & VAR_0)
        && ((VAR_7->ex_kusage & ~(VAR_3 | VAR_2)) ||
            !(VAR_7->ex_kusage & (VAR_3 | VAR_2))))
        return 0;


    if (!(VAR_7->ex_flags & VAR_1) || VAR_7->ex_xkusage != VAR_5)
        return 0;


    VAR_9 = FUNC_2(VAR_7, VAR_4, -1);
    if (VAR_9 >= 0) {
        X509_EXTENSION *VAR_10 = FUNC_1((X509 *)VAR_7, VAR_9);
        if (!FUNC_0(VAR_10))
            return 0;
    }

    return 1;
}
