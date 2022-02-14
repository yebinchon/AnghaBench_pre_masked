
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
typedef TYPE_1__ X509_OBJECT ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

X509_OBJECT *FUNC_2(void)
{
    X509_OBJECT *VAR_3 = FUNC_0(sizeof(*VAR_3));

    if (VAR_3 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_0);
        return ((void*)0);
    }
    VAR_3->type = VAR_2;
    return VAR_3;
}
