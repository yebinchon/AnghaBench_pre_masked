
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t length; int * data; } ;
typedef TYPE_1__ heim_any ;
typedef int Der_type ;
typedef int Der_class ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char const*,size_t,size_t*,size_t*) ;
 int FUNC_1 (unsigned char const*,size_t,int *,int *,unsigned int*,size_t*) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,unsigned char const*,size_t) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

int
FUNC_5(const unsigned char *VAR_3, size_t VAR_4,
  heim_any *VAR_5, size_t *VAR_6)
{
    size_t VAR_7, VAR_8, VAR_9;
    Der_class VAR_10;
    Der_type VAR_11;
    unsigned int VAR_12;
    int VAR_13;

    FUNC_4(VAR_5, 0, sizeof(*VAR_5));

    VAR_13 = FUNC_1 (VAR_3, VAR_4, &VAR_10, &VAR_11, &VAR_12, &VAR_9);
    if (VAR_13) return VAR_13;
    if (VAR_9 > VAR_4)
 return VAR_1;
    VAR_13 = FUNC_0(VAR_3 + VAR_9, VAR_4 - VAR_9, &VAR_8, &VAR_7);
    if (VAR_13) return VAR_13;
    if (VAR_8 == VAR_0) {
        if (VAR_4 < VAR_7 + VAR_9)
     return VAR_1;
 VAR_8 = VAR_4 - (VAR_7 + VAR_9);
    } else {
 if (VAR_4 < VAR_8 + VAR_7 + VAR_9)
     return VAR_1;
    }

    VAR_5->data = FUNC_2(VAR_8 + VAR_7 + VAR_9);
    if (VAR_5->data == ((void*)0))
 return VAR_2;
    VAR_5->length = VAR_8 + VAR_7 + VAR_9;
    FUNC_3(VAR_5->data, VAR_3, VAR_8 + VAR_7 + VAR_9);

    if (VAR_6)
 *VAR_6 = VAR_8 + VAR_7 + VAR_9;

    return 0;
}
