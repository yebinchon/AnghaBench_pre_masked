
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int settings ;
struct TYPE_4__ {int flags; int appname; } ;
typedef TYPE_1__ OPENSSL_INIT_SETTINGS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (char const*) ;

void FUNC_3(const char *VAR_2)
{
    OPENSSL_INIT_SETTINGS VAR_3;

    FUNC_1(&VAR_3, 0, sizeof(VAR_3));
    if (VAR_2 != ((void*)0))
        VAR_3.appname = FUNC_2(VAR_2);
    VAR_3.flags = VAR_0;
    FUNC_0(VAR_1, &VAR_3);
}
