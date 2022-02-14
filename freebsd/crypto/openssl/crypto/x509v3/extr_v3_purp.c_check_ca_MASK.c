
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ex_flags; int ex_nscert; } ;
typedef TYPE_1__ X509 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int ) ;

__attribute__((used)) static int FUNC_1(const X509 *VAR_7)
{

    if (FUNC_0(VAR_7, VAR_4))
        return 0;
    if (VAR_7->ex_flags & VAR_0) {
        if (VAR_7->ex_flags & VAR_1)
            return 1;

        else
            return 0;
    } else {

        if ((VAR_7->ex_flags & VAR_6) == VAR_6)
            return 3;



        else if (VAR_7->ex_flags & VAR_2)
            return 4;

        else if (VAR_7->ex_flags & VAR_3 && VAR_7->ex_nscert & VAR_5)
            return 5;

        return 0;
    }
}
