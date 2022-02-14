
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Der_type ;
typedef int Der_class ;


 int FUNC_0 (unsigned char const*,size_t,size_t*,size_t*) ;
 int FUNC_1 (unsigned char const*,size_t,int ,int *,unsigned int,size_t*) ;

int
FUNC_2 (const unsigned char *VAR_0, size_t VAR_1,
     Der_class VAR_2, Der_type *VAR_3, unsigned int VAR_4,
     size_t *VAR_5, size_t *VAR_6)
{
    size_t VAR_7, VAR_8 = 0;
    int VAR_9;

    VAR_9 = FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_7);
    if (VAR_9) return VAR_9;
    VAR_0 += VAR_7;
    VAR_1 -= VAR_7;
    VAR_8 += VAR_7;
    VAR_9 = FUNC_0 (VAR_0, VAR_1, VAR_5, &VAR_7);
    if (VAR_9) return VAR_9;
    if(VAR_6) *VAR_6 = VAR_8 + VAR_7;
    return 0;
}
