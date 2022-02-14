
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* filename; char* appname; unsigned long flags; } ;
typedef TYPE_1__ OPENSSL_INIT_SETTINGS ;


 int FUNC_0 (char const*,char const*,unsigned long) ;
 unsigned long VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,char const*,char const*,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_5(const OPENSSL_INIT_SETTINGS *VAR_3)
{
    int VAR_4 = 0;
    const char *VAR_5;
    const char *VAR_6;
    unsigned long VAR_7;

    if (VAR_1)
        return 1;

    VAR_5 = VAR_3 ? VAR_3->filename : ((void*)0);
    VAR_6 = VAR_3 ? VAR_3->appname : ((void*)0);
    VAR_7 = VAR_3 ? VAR_3->flags : VAR_0;






    FUNC_3();


    FUNC_1();

    FUNC_2();

    VAR_4 = FUNC_0(VAR_5, VAR_6, VAR_7);

    VAR_1 = 1;
    return VAR_4;
}
