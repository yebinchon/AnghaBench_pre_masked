
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ failed; } ;
typedef TYPE_1__ abts_case ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,char const*,char const*) ;
 int VAR_1 ;
 int FUNC_2 (char const*,char const*,size_t) ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;

void FUNC_4(abts_case *VAR_3, const char *VAR_4, const char *VAR_5,
                       size_t VAR_6, int VAR_7)
{
    FUNC_3();
    if (VAR_3->failed) return;

    if (!FUNC_2(VAR_4, VAR_5, VAR_6)) return;

    VAR_3->failed = VAR_0;
    if (VAR_2) {
        FUNC_1(VAR_1, "Line %d: expected something other than <%s>, but saw <%s>\n",
                VAR_7, VAR_4, VAR_5);
        FUNC_0(VAR_1);
    }
}
