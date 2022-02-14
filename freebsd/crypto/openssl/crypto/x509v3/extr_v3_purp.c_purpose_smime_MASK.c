
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ex_nscert; int ex_flags; } ;
typedef TYPE_1__ X509 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int ) ;

__attribute__((used)) static int FUNC_2(const X509 *VAR_5, int VAR_6)
{
    if (FUNC_1(VAR_5, VAR_4))
        return 0;
    if (VAR_6) {
        int VAR_7;
        VAR_7 = FUNC_0(VAR_5);
        if (!VAR_7)
            return 0;

        if (VAR_7 != 5 || VAR_5->ex_nscert & VAR_2)
            return VAR_7;
        else
            return 0;
    }
    if (VAR_5->ex_flags & VAR_0) {
        if (VAR_5->ex_nscert & VAR_1)
            return 1;

        if (VAR_5->ex_nscert & VAR_3)
            return 2;
        return 0;
    }
    return 1;
}
