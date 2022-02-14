
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ failed; } ;
typedef TYPE_1__ abts_case ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int const,int const) ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;

void FUNC_3(abts_case *VAR_3, const int VAR_4, const int VAR_5, int VAR_6)
{
    FUNC_2();
    if (VAR_3->failed) return;

    if (VAR_4 == VAR_5) return;

    VAR_3->failed = VAR_0;
    if (VAR_2) {
        FUNC_1(VAR_1, "Line %d: expected <%d>, but saw <%d>\n", VAR_6, VAR_4, VAR_5);
        FUNC_0(VAR_1);
    }
}
