
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct limits {scalar_t__ limconst; int limname; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct limits* VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct limits *
FUNC_3(Char *VAR_4)
{
    struct limits *VAR_5, *VAR_6;

    VAR_6 = ((void*)0);
    for (VAR_5 = VAR_3; VAR_5->limconst >= 0; VAR_5++)
 if (FUNC_0(VAR_4, FUNC_2(VAR_5->limname))) {
     if (VAR_6)
  FUNC_1(VAR_2 | VAR_0);
     VAR_6 = VAR_5;
 }
    if (VAR_6)
 return (VAR_6);
    FUNC_1(VAR_2 | VAR_1);

    return (0);
}
