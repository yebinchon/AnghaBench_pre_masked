
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* suite; } ;
typedef TYPE_2__ abts_case ;
struct TYPE_4__ {int not_impl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,char const*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;

void FUNC_3(abts_case *VAR_2, const char *VAR_3, int VAR_4)
{
    FUNC_2();

    VAR_2->suite->not_impl++;
    if (VAR_1) {
        FUNC_1(VAR_0, "Line %d: %s\n", VAR_4, VAR_3);
        FUNC_0(VAR_0);
    }
}
