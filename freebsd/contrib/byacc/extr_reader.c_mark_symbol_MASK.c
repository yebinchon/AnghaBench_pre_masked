
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ prec; int assoc; } ;
typedef TYPE_1__ bucket ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 TYPE_1__* FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 size_t VAR_4 ;
 int FUNC_5 () ;
 int * VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_6 (int ,int ,int*) ;

__attribute__((used)) static int
FUNC_7(void)
{
    int VAR_7;
    bucket *VAR_8 = ((void*)0);

    VAR_7 = VAR_1[1];
    if (VAR_7 == '%' || VAR_7 == '\\')
    {
 VAR_1 += 2;
 return (1);
    }

    if (VAR_7 == '=')
 VAR_1 += 2;
    else if ((VAR_7 == 'p' || VAR_7 == 'P') &&
      ((VAR_7 = VAR_1[2]) == 'r' || VAR_7 == 'R') &&
      ((VAR_7 = VAR_1[3]) == 'e' || VAR_7 == 'E') &&
      ((VAR_7 = VAR_1[4]) == 'c' || VAR_7 == 'C') &&
      ((VAR_7 = VAR_1[5], !FUNC_0(VAR_7))))
 VAR_1 += 5;
    else
 FUNC_6(VAR_3, VAR_2, VAR_1);

    VAR_7 = FUNC_4();
    if (FUNC_3(VAR_7) || VAR_7 == '_' || VAR_7 == '.' || VAR_7 == '$')
 VAR_8 = FUNC_2();
    else if (VAR_7 == '\'' || VAR_7 == '"')
 VAR_8 = FUNC_1();
    else
    {
 FUNC_6(VAR_3, VAR_2, VAR_1);

    }

    if (VAR_6[VAR_4] != VAR_0 && VAR_8->prec != VAR_6[VAR_4])
 FUNC_5();

    VAR_6[VAR_4] = VAR_8->prec;
    VAR_5[VAR_4] = VAR_8->assoc;
    return (0);
}
