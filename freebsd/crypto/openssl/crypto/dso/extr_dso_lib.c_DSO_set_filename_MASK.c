
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* filename; scalar_t__ loaded_filename; } ;
typedef TYPE_1__ DSO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;

int FUNC_3(DSO *VAR_4, const char *VAR_5)
{
    char *VAR_6;

    if ((VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0))) {
        FUNC_0(VAR_0, VAR_3);
        return 0;
    }
    if (VAR_4->loaded_filename) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    VAR_6 = FUNC_2(VAR_5);
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    FUNC_1(VAR_4->filename);
    VAR_4->filename = VAR_6;
    return 1;
}
