
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct directory {int di_name; struct directory* di_prev; } ;
typedef int Char ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **,int ) ;
 int FUNC_4 (int **) ;
 struct directory VAR_3 ;
 int FUNC_5 (int ,int **,int *,int ) ;
 int VAR_4 ;
 int ** FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(void)
{
    int VAR_5 = 0;
    Char **VAR_6, **VAR_7;
    struct directory *VAR_8;

    if (FUNC_1(VAR_0) == ((void*)0))
     return;

    for (VAR_8 = VAR_3.di_prev; VAR_8 != &VAR_3; VAR_8 = VAR_8->di_prev, VAR_5++)
 continue;
    VAR_7 = VAR_6 = FUNC_6((VAR_5 + 1) * sizeof(Char *));
    for (VAR_8 = VAR_3.di_prev; VAR_8 != &VAR_3; VAR_8 = VAR_8->di_prev, VAR_7++)
  *VAR_7 = FUNC_0(VAR_8->di_name);
    *VAR_7 = ((void*)0);
    FUNC_3(VAR_6, VAR_2);
    FUNC_5(VAR_0, VAR_6, &VAR_4, VAR_1);
    FUNC_2(VAR_6);
    FUNC_4(VAR_6);
}
