
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Der_type ;
typedef int Der_class ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const*,size_t,int ,scalar_t__*,unsigned int,size_t*) ;

int
FUNC_1 (const unsigned char *VAR_1, size_t VAR_2,
        Der_class VAR_3, Der_type VAR_4,
        unsigned int VAR_5, size_t *VAR_6)
{
    Der_type VAR_7;
    int VAR_8;

    VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_7, VAR_5, VAR_6);
    if (VAR_8) return VAR_8;
    if (VAR_7 != VAR_4) return VAR_0;
    return 0;
}
