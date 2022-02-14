
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* meth; } ;
struct TYPE_5__ {int (* rsa_pub_dec ) (int,unsigned char const*,unsigned char*,TYPE_2__*,int) ;} ;
typedef TYPE_2__ RSA ;


 int FUNC_0 (int,unsigned char const*,unsigned char*,TYPE_2__*,int) ;

int FUNC_1(int VAR_0, const unsigned char *VAR_1, unsigned char *VAR_2,
                       RSA *VAR_3, int VAR_4)
{
    return VAR_3->meth->rsa_pub_dec(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
