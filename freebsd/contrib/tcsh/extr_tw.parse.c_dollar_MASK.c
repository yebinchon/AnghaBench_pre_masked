
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {int s; } ;
typedef char Char ;


 int VAR_0 ;
 struct Strbuf VAR_1 ;
 int FUNC_0 (struct Strbuf*,int ) ;
 char* FUNC_1 (struct Strbuf*) ;
 scalar_t__ FUNC_2 (struct Strbuf*,char const**,int ) ;
 int FUNC_3 (int ) ;

Char *
FUNC_4(const Char *VAR_2)
{
    struct Strbuf VAR_3 = VAR_1;

    while (*VAR_2) {
 if (*VAR_2 != '$')
     FUNC_0(&VAR_3, *VAR_2++);
 else {
     if (FUNC_2(&VAR_3, &VAR_2, VAR_0) == 0) {
  FUNC_3(VAR_3.s);
  return ((void*)0);
     }
 }
    }
    return FUNC_1(&VAR_3);
}
