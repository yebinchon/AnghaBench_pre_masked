
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int poly1305_blocks_f ;
struct TYPE_4__ {int blocks; } ;
struct TYPE_5__ {size_t num; unsigned char const* data; int opaque; TYPE_1__ func; } ;
typedef TYPE_2__ POLY1305 ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned char const*,unsigned char const*,size_t) ;
 int FUNC_1 (int ,unsigned char const*,size_t,int) ;

void FUNC_2(POLY1305 *VAR_1, const unsigned char *VAR_2, size_t VAR_3)
{
    size_t VAR_4, VAR_5;

    if ((VAR_5 = VAR_1->num)) {
        VAR_4 = VAR_0 - VAR_5;
        if (VAR_3 >= VAR_4) {
            FUNC_0(VAR_1->data + VAR_5, VAR_2, VAR_4);
            FUNC_1(VAR_1->opaque, VAR_1->data, VAR_0, 1);
            VAR_2 += VAR_4;
            VAR_3 -= VAR_4;
        } else {

            FUNC_0(VAR_1->data + VAR_5, VAR_2, VAR_3);
            VAR_1->num = VAR_5 + VAR_3;
            return;
        }
    }

    VAR_4 = VAR_3 % VAR_0;
    VAR_3 -= VAR_4;

    if (VAR_3 >= VAR_0) {
        FUNC_1(VAR_1->opaque, VAR_2, VAR_3, 1);
        VAR_2 += VAR_3;
    }

    if (VAR_4)
        FUNC_0(VAR_1->data, VAR_2, VAR_4);

    VAR_1->num = VAR_4;
}
