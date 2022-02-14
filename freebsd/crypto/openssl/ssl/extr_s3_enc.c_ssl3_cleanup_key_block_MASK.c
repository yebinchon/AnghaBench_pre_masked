
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* s3; } ;
struct TYPE_5__ {scalar_t__ key_block_length; int * key_block; } ;
struct TYPE_6__ {TYPE_1__ tmp; } ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (int *,scalar_t__) ;

void FUNC_1(SSL *VAR_0)
{
    FUNC_0(VAR_0->s3->tmp.key_block, VAR_0->s3->tmp.key_block_length);
    VAR_0->s3->tmp.key_block = ((void*)0);
    VAR_0->s3->tmp.key_block_length = 0;
}
