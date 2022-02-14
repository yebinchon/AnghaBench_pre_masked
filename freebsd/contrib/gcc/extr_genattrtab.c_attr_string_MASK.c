
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* str; } ;
struct attr_hash {int hashcode; TYPE_1__ u; struct attr_hash* next; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct attr_hash** VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (int ,int) ;
 int FUNC_3 (char const*,char const*,int) ;

__attribute__((used)) static char *
FUNC_4 (const char *VAR_3, int VAR_4)
{
  struct attr_hash *VAR_5;
  int VAR_6;
  int VAR_7;
  char *VAR_8;


  VAR_6 = (VAR_4 + 1) * 613 + (unsigned) VAR_3[0];
  for (VAR_7 = 1; VAR_7 < VAR_4; VAR_7 += 2)
    VAR_6 = ((VAR_6 * 613) + (unsigned) VAR_3[VAR_7]);
  if (VAR_6 < 0)
    VAR_6 = -VAR_6;


  for (VAR_5 = VAR_1[VAR_6 % VAR_0]; VAR_5; VAR_5 = VAR_5->next)
    if (VAR_5->hashcode == -VAR_6 && VAR_5->u.str[0] == VAR_3[0]
 && !FUNC_3 (VAR_5->u.str, VAR_3, VAR_4))
      return VAR_5->u.str;


  VAR_8 = FUNC_2 (VAR_2, VAR_4 + 1);
  FUNC_1 (VAR_8, VAR_3, VAR_4);
  VAR_8[VAR_4] = '\0';
  FUNC_0 (VAR_6, VAR_8);

  return VAR_8;
}
