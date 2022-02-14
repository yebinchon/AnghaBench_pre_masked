
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int heim_general_string ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int const,size_t) ;
 size_t FUNC_1 (int const) ;

int
FUNC_2 (unsigned char *VAR_1, size_t VAR_2,
   const heim_general_string *VAR_3, size_t *VAR_4)
{
    size_t VAR_5 = FUNC_1(*VAR_3);

    if (VAR_2 < VAR_5)
 return VAR_0;
    VAR_1 -= VAR_5;
    FUNC_0 (VAR_1+1, *VAR_3, VAR_5);
    *VAR_4 = VAR_5;
    return 0;
}
