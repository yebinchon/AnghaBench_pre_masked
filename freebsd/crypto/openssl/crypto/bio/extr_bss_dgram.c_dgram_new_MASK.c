
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bio_dgram_data ;
struct TYPE_3__ {int * ptr; } ;
typedef TYPE_1__ BIO ;


 int * FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(BIO *VAR_0)
{
    bio_dgram_data *VAR_1 = FUNC_0(sizeof(*VAR_1));

    if (VAR_1 == ((void*)0))
        return 0;
    VAR_0->ptr = VAR_1;
    return 1;
}
