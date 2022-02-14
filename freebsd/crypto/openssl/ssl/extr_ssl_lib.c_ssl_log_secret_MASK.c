
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* s3; } ;
struct TYPE_5__ {int client_random; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int FUNC_0 (char const*,TYPE_2__*,int ,int ,int const*,size_t) ;

int FUNC_1(SSL *VAR_1,
                   const char *VAR_2,
                   const uint8_t *VAR_3,
                   size_t VAR_4)
{
    return FUNC_0(VAR_2,
                          VAR_1,
                          VAR_1->s3->client_random,
                          VAR_0,
                          VAR_3,
                          VAR_4);
}
