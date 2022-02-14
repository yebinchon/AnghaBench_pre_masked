
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t left; scalar_t__ offset; int buf; } ;
typedef TYPE_1__ SSL3_BUFFER ;


 int FUNC_0 (int ,unsigned char const*,size_t) ;

void FUNC_1(SSL3_BUFFER *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
    if (VAR_1 != ((void*)0))
        FUNC_0(VAR_0->buf, VAR_1, VAR_2);
    VAR_0->left = VAR_2;
    VAR_0->offset = 0;
}
