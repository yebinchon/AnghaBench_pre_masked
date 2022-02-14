
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int ** gr_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct group* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,int *) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_4, const char *VAR_5)
{
    struct group *VAR_6;
    int VAR_7;
    VAR_6 = FUNC_0(VAR_4);
    if(VAR_6 == ((void*)0))
 return VAR_2;
    if(VAR_6->gr_mem[0] == ((void*)0))
 return VAR_0;
    for(VAR_7 = 0; VAR_6->gr_mem[VAR_7] != ((void*)0); VAR_7++)
 if(FUNC_1(VAR_5, VAR_6->gr_mem[VAR_7]) == 0)
     return VAR_1;
    return VAR_3;
}
