
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_read; int init; } ;
typedef TYPE_1__ BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int,char**) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(BIO *VAR_3, char **VAR_4, int VAR_5)
{
    int VAR_6;

    if (!VAR_3->init) {
        FUNC_1(VAR_1, VAR_2);
        return -2;
    }

    VAR_6 = (int)FUNC_0(VAR_3, VAR_0, VAR_5, VAR_4);
    if (VAR_6 > 0)
        VAR_3->num_read += VAR_6;
    return VAR_6;
}
