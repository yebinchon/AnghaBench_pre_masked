
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {int dummy; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct Strbuf VAR_3 ;
 int FUNC_0 (struct Strbuf*,int ) ;
 int FUNC_1 (struct Strbuf*,int ) ;
 int * FUNC_2 (struct Strbuf*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_7(Char **VAR_5)
{
    struct Strbuf VAR_6 = VAR_3;
    Char *VAR_7;

    if (VAR_5)
 while (*VAR_5) {
     FUNC_0(&VAR_6, *VAR_5++);
     if (*VAR_5 == 0 || FUNC_5(*VAR_5, VAR_2))
  break;
     FUNC_1(&VAR_6, VAR_0);
 }
    VAR_7 = FUNC_2(&VAR_6);
    FUNC_3(VAR_7, VAR_4);
    FUNC_6(VAR_1, VAR_7);
    FUNC_4(VAR_7);
}
