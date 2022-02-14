
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
struct TYPE_6__ {char* name; char* section; char* value; } ;
typedef TYPE_1__ CONF_VALUE ;
typedef TYPE_2__ CONF ;


 TYPE_1__* FUNC_0 (int ,TYPE_1__*) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

char *FUNC_3(const CONF *VAR_0, const char *VAR_1,
                       const char *VAR_2)
{
    CONF_VALUE *VAR_3, VAR_4;
    char *VAR_5;

    if (VAR_2 == ((void*)0))
        return ((void*)0);
    if (VAR_0 != ((void*)0)) {
        if (VAR_1 != ((void*)0)) {
            VAR_4.name = (char *)VAR_2;
            VAR_4.section = (char *)VAR_1;
            VAR_3 = FUNC_0(VAR_0->data, &VAR_4);
            if (VAR_3 != ((void*)0))
                return VAR_3->value;
            if (FUNC_2(VAR_1, "ENV") == 0) {
                VAR_5 = FUNC_1(VAR_2);
                if (VAR_5 != ((void*)0))
                    return VAR_5;
            }
        }
        VAR_4.section = "default";
        VAR_4.name = (char *)VAR_2;
        VAR_3 = FUNC_0(VAR_0->data, &VAR_4);
        if (VAR_3 != ((void*)0))
            return VAR_3->value;
        else
            return ((void*)0);
    } else
        return FUNC_1(VAR_2);
}
