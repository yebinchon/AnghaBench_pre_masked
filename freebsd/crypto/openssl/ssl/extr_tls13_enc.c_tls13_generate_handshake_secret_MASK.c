
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int handshake_secret; int early_secret; } ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,unsigned char const*,size_t,unsigned char*) ;

int FUNC_2(SSL *VAR_0, const unsigned char *VAR_1,
                                size_t VAR_2)
{

    return FUNC_1(VAR_0, FUNC_0(VAR_0), VAR_0->early_secret,
                                 VAR_1, VAR_2,
                                 (unsigned char *)&VAR_0->handshake_secret);
}
