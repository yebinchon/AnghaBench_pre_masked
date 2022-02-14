
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t length; char* data; size_t max; int flags; } ;
typedef TYPE_1__ BUF_MEM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 char* FUNC_1 (char*,size_t,size_t) ;
 int FUNC_2 (char*,int ,size_t) ;
 char* FUNC_3 (TYPE_1__*,size_t) ;

size_t FUNC_4(BUF_MEM *VAR_4, size_t VAR_5)
{
    char *VAR_6;
    size_t VAR_7;

    if (VAR_4->length >= VAR_5) {
        if (VAR_4->data != ((void*)0))
            FUNC_2(&VAR_4->data[VAR_5], 0, VAR_4->length - VAR_5);
        VAR_4->length = VAR_5;
        return VAR_5;
    }
    if (VAR_4->max >= VAR_5) {
        FUNC_2(&VAR_4->data[VAR_4->length], 0, VAR_5 - VAR_4->length);
        VAR_4->length = VAR_5;
        return VAR_5;
    }

    if (VAR_5 > VAR_3) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    VAR_7 = (VAR_5 + 3) / 3 * 4;
    if ((VAR_4->flags & VAR_1))
        VAR_6 = FUNC_3(VAR_4, VAR_7);
    else
        VAR_6 = FUNC_1(VAR_4->data, VAR_4->max, VAR_7);
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        VAR_5 = 0;
    } else {
        VAR_4->data = VAR_6;
        VAR_4->max = VAR_7;
        FUNC_2(&VAR_4->data[VAR_4->length], 0, VAR_5 - VAR_4->length);
        VAR_4->length = VAR_5;
    }
    return VAR_5;
}
