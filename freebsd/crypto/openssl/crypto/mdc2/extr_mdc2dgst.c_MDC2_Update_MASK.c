
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t num; unsigned char const* data; } ;
typedef TYPE_1__ MDC2_CTX ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char const*,size_t) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,size_t) ;

int FUNC_2(MDC2_CTX *VAR_1, const unsigned char *VAR_2, size_t VAR_3)
{
    size_t VAR_4, VAR_5;

    VAR_4 = VAR_1->num;
    if (VAR_4 != 0) {
        if (VAR_3 < VAR_0 - VAR_4) {

            FUNC_1(&(VAR_1->data[VAR_4]), VAR_2, VAR_3);
            VAR_1->num += (int)VAR_3;
            return 1;
        } else {

            VAR_5 = VAR_0 - VAR_4;
            FUNC_1(&(VAR_1->data[VAR_4]), VAR_2, VAR_5);
            VAR_3 -= VAR_5;
            VAR_2 += VAR_5;
            VAR_1->num = 0;
            FUNC_0(VAR_1, &(VAR_1->data[0]), VAR_0);
        }
    }
    VAR_4 = VAR_3 & ~((size_t)VAR_0 - 1);
    if (VAR_4 > 0)
        FUNC_0(VAR_1, VAR_2, VAR_4);
    VAR_5 = VAR_3 - VAR_4;
    if (VAR_5 > 0) {
        FUNC_1(&(VAR_1->data[0]), &(VAR_2[VAR_4]), VAR_5);
        VAR_1->num = (int)VAR_5;
    }
    return 1;
}
