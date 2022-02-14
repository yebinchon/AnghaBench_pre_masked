
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* s3; } ;
struct TYPE_4__ {int server_random; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (unsigned char*,int ,size_t) ;

size_t FUNC_1(const SSL *VAR_0, unsigned char *VAR_1, size_t VAR_2)
{
    if (VAR_2 == 0)
        return sizeof(VAR_0->s3->server_random);
    if (VAR_2 > sizeof(VAR_0->s3->server_random))
        VAR_2 = sizeof(VAR_0->s3->server_random);
    FUNC_0(VAR_1, VAR_0->s3->server_random, VAR_2);
    return VAR_2;
}
