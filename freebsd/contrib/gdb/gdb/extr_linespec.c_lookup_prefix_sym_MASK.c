
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int dummy; } ;
struct symbol {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct symbol* FUNC_1 (char*,int ,int ,int ,struct symtab**) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static struct symbol *
FUNC_3 (char **VAR_1, char *VAR_2)
{
  char *VAR_3;
  char *VAR_4;


  VAR_3 = VAR_2;
  while (VAR_2 != *VAR_1 && VAR_2[-1] == ' ')
    --VAR_2;
  VAR_4 = (char *) FUNC_0 (VAR_2 - *VAR_1 + 1);
  FUNC_2 (VAR_4, *VAR_1, VAR_2 - *VAR_1);
  VAR_4[VAR_2 - *VAR_1] = 0;


  VAR_2 = VAR_3 + (VAR_3[0] == ':' ? 2 : 1);
  while (*VAR_2 == ' ' || *VAR_2 == '\t')
    VAR_2++;
  *VAR_1 = VAR_2;




  return FUNC_1 (VAR_4, 0, VAR_0, 0,
   (struct symtab **) ((void*)0));
}
