
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* value; int object; } ;
typedef TYPE_1__ X509_NAME_ENTRY ;
struct TYPE_6__ {int type; } ;


 int FUNC_0 (unsigned char const*,int) ;
 int FUNC_1 (TYPE_3__*,unsigned char const*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__**,unsigned char const*,int,int,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char const*) ;

int FUNC_5(X509_NAME_ENTRY *VAR_3, int VAR_4,
                             const unsigned char *VAR_5, int VAR_6)
{
    int VAR_7;

    if ((VAR_3 == ((void*)0)) || ((VAR_5 == ((void*)0)) && (VAR_6 != 0)))
        return 0;
    if ((VAR_4 > 0) && (VAR_4 & VAR_0))
        return FUNC_2(&VAR_3->value, VAR_5,
                                      VAR_6, VAR_4,
                                      FUNC_3(VAR_3->object)) ? 1 : 0;
    if (VAR_6 < 0)
        VAR_6 = FUNC_4((const char *)VAR_5);
    VAR_7 = FUNC_1(VAR_3->value, VAR_5, VAR_6);
    if (!VAR_7)
        return 0;
    if (VAR_4 != VAR_2) {
        if (VAR_4 == VAR_1)
            VAR_3->value->type = FUNC_0(VAR_5, VAR_6);
        else
            VAR_3->value->type = VAR_4;
    }
    return 1;
}
