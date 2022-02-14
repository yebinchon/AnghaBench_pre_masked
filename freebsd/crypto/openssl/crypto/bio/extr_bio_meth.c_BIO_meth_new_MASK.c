
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; int * name; } ;
typedef TYPE_1__ BIO_METHOD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (int) ;

BIO_METHOD *FUNC_4(int VAR_2, const char *VAR_3)
{
    BIO_METHOD *VAR_4 = FUNC_3(sizeof(BIO_METHOD));

    if (VAR_4 == ((void*)0)
            || (VAR_4->name = FUNC_2(VAR_3)) == ((void*)0)) {
        FUNC_1(VAR_4);
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }
    VAR_4->type = VAR_2;
    return VAR_4;
}
