
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* data; } ;
struct TYPE_4__ {char* init_msg; TYPE_3__* init_buf; } ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_1(SSL *VAR_0, size_t VAR_1) {

    size_t VAR_2 = (char *)VAR_0->init_msg - VAR_0->init_buf->data;

    if (!FUNC_0(VAR_0->init_buf, (int)VAR_1))
        return 0;

    if (VAR_1 < VAR_2)
        return 0;

    VAR_0->init_msg = VAR_0->init_buf->data + VAR_2;

    return 1;
}
