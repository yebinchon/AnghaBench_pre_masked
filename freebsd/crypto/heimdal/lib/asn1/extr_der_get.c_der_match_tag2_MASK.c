
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Der_type ;
typedef scalar_t__ Der_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char const*,size_t,scalar_t__*,int *,unsigned int*,size_t*) ;

int
FUNC_1 (const unsigned char *VAR_3, size_t VAR_4,
  Der_class VAR_5, Der_type *VAR_6,
  unsigned int VAR_7, size_t *VAR_8)
{
    size_t VAR_9;
    Der_class VAR_10;
    unsigned int VAR_11;
    int VAR_12;

    VAR_12 = FUNC_0 (VAR_3, VAR_4, &VAR_10, VAR_6, &VAR_11, &VAR_9);
    if (VAR_12) return VAR_12;
    if (VAR_5 != VAR_10)
 return VAR_0;
    if(VAR_7 > VAR_11)
 return VAR_1;
    if(VAR_7 < VAR_11)
 return VAR_2;
    if(VAR_8) *VAR_8 = VAR_9;
    return 0;
}
