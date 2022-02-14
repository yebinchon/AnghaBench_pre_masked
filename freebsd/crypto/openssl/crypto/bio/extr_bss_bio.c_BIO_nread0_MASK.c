
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int init; } ;
typedef TYPE_1__ BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (TYPE_1__*,int ,int ,char**) ;
 int FUNC_1 (int ,int ) ;
 long VAR_3 ;

int FUNC_2(BIO *VAR_4, char **VAR_5)
{
    long VAR_6;

    if (!VAR_4->init) {
        FUNC_1(VAR_1, VAR_2);
        return -2;
    }

    VAR_6 = FUNC_0(VAR_4, VAR_0, 0, VAR_5);
    if (VAR_6 > VAR_3)
        return VAR_3;
    else
        return (int)VAR_6;
}
