
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct limit {int * name; } ;


 struct limit* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *) ;

__attribute__((used)) static struct limit *
FUNC_1(const char *VAR_1)
{
    struct limit *VAR_2;
    for(VAR_2 = VAR_0; VAR_2->name != ((void*)0); VAR_2++)
 if(FUNC_0(VAR_1, VAR_2->name) == 0)
     return VAR_2;
    return ((void*)0);
}
