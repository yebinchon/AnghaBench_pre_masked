
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int Char ;


 size_t VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (int *,size_t) ;

__attribute__((used)) static void
FUNC_1(size_t VAR_3)
{
    Char *VAR_4;
    ptrdiff_t VAR_5;

    VAR_0 += VAR_3;
    VAR_4 = FUNC_0(VAR_2, VAR_0 * sizeof(*VAR_2));
    VAR_5 = VAR_4 - VAR_2;
    VAR_2 = VAR_4;
    VAR_1 += VAR_5;
}
