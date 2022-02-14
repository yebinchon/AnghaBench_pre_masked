
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * gzFile ;
typedef int FILE ;


 int * FUNC_0 (int *,int *,int *,int ,int ) ;
 int * FUNC_1 (char const*,char const*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

FILE *
FUNC_2(const char *VAR_4, const char *VAR_5)
{
    gzFile VAR_6 = FUNC_1(VAR_4, VAR_5);
    if(VAR_6 == ((void*)0))
 return ((void*)0);

    if(*VAR_5 == 'r')
 return (FUNC_0(VAR_6, VAR_1, ((void*)0), VAR_2, VAR_0));
    else
 return (FUNC_0(VAR_6, ((void*)0), VAR_3, VAR_2, VAR_0));
}
