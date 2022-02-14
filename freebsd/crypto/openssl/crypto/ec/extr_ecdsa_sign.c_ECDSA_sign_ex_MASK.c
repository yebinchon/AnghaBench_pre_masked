
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* meth; } ;
struct TYPE_5__ {int (* sign ) (int,unsigned char const*,int,unsigned char*,unsigned int*,int const*,int const*,TYPE_2__*) ;} ;
typedef TYPE_2__ EC_KEY ;
typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,unsigned char const*,int,unsigned char*,unsigned int*,int const*,int const*,TYPE_2__*) ;

int FUNC_2(int VAR_2, const unsigned char *VAR_3, int VAR_4,
                  unsigned char *VAR_5, unsigned int *VAR_6, const BIGNUM *VAR_7,
                  const BIGNUM *VAR_8, EC_KEY *VAR_9)
{
    if (VAR_9->meth->sign != ((void*)0))
        return VAR_9->meth->sign(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    FUNC_0(VAR_0, VAR_1);
    return 0;
}
