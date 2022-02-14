
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* bytes ) (unsigned char*,int) ;} ;
typedef TYPE_1__ RAND_METHOD ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned char*,int) ;

int FUNC_3(unsigned char *VAR_2, int VAR_3)
{
    const RAND_METHOD *VAR_4 = FUNC_0();

    if (VAR_4->bytes != ((void*)0))
        return VAR_4->bytes(VAR_2, VAR_3);
    FUNC_1(VAR_0, VAR_1);
    return -1;
}
