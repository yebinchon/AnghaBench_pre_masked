
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,char const) ;
 int FUNC_1 (char const*,int,char*) ;

__attribute__((used)) static int
FUNC_2 (const char *VAR_2, ssize_t VAR_3)
{
    if (VAR_3 <= 0 || *VAR_2++ != '%')
 return VAR_0;
    VAR_3 -= 1;


    ssize_t VAR_4 = FUNC_1(VAR_2, VAR_3, "0123456789.*+ -");
    if (VAR_4 >= VAR_3)
 return VAR_0;

    VAR_2 += VAR_4;
    VAR_3 -= VAR_4;


    VAR_4 = FUNC_1(VAR_2, VAR_3, "hljtqz");
    if (VAR_4 >= VAR_3)
 return VAR_0;

    VAR_2 += VAR_4;
    VAR_3 -= VAR_4;

    if (VAR_3 != 1)
 return VAR_0;

    return (FUNC_0("diouDOUeEfFgG", *VAR_2) == ((void*)0)) ? VAR_0 : VAR_1;
}
