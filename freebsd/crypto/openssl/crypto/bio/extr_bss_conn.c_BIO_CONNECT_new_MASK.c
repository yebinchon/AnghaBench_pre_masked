
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int connect_family; int state; } ;
typedef TYPE_1__ BIO_CONNECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int) ;

BIO_CONNECT *FUNC_2(void)
{
    BIO_CONNECT *VAR_4;

    if ((VAR_4 = FUNC_1(sizeof(*VAR_4))) == ((void*)0)) {
        FUNC_0(VAR_2, VAR_3);
        return ((void*)0);
    }
    VAR_4->state = VAR_0;
    VAR_4->connect_family = VAR_1;
    return VAR_4;
}
