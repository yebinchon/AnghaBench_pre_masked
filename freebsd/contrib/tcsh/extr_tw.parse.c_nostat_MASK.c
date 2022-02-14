
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {int ** vec; } ;
typedef int Char ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_3 ;
 struct varent* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(Char *VAR_4)
{
    struct varent *VAR_5;
    Char **VAR_6;

    if ((VAR_5 = FUNC_2(VAR_1)) == ((void*)0) || (VAR_6 = VAR_5->vec) == ((void*)0))
 return VAR_0;
    for (; *VAR_6 != ((void*)0); VAR_6++) {
 if (FUNC_1(*VAR_6, VAR_2) == 0)
     return VAR_3;
 if (FUNC_0(VAR_4, *VAR_6))
     return VAR_3;
    }
    return VAR_0;
}
