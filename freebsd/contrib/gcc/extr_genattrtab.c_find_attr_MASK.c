
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_desc {char const* name; struct attr_desc* next; scalar_t__ is_special; scalar_t__ is_const; scalar_t__ is_numeric; int * default_val; int first_value; } ;


 char* FUNC_0 (char const*) ;
 int VAR_0 ;
 char const* VAR_1 ;
 struct attr_desc** VAR_2 ;
 struct attr_desc* FUNC_1 (int) ;
 int FUNC_2 (char const*,char const*) ;

__attribute__((used)) static struct attr_desc *
FUNC_3 (const char **VAR_3, int VAR_4)
{
  struct attr_desc *VAR_5;
  int VAR_6;
  const char *VAR_7 = *VAR_3;



  if (VAR_7 == VAR_1)
    return ((void*)0);

  VAR_6 = VAR_7[0] & (VAR_0 - 1);
  for (VAR_5 = VAR_2[VAR_6]; VAR_5; VAR_5 = VAR_5->next)
    if (VAR_7 == VAR_5->name)
      return VAR_5;


  for (VAR_5 = VAR_2[VAR_6]; VAR_5; VAR_5 = VAR_5->next)
    if (VAR_7[0] == VAR_5->name[0] && ! FUNC_2 (VAR_7, VAR_5->name))
      {
 *VAR_3 = VAR_5->name;
 return VAR_5;
      }

  if (! VAR_4)
    return ((void*)0);

  VAR_5 = FUNC_1 (sizeof (struct attr_desc));
  VAR_5->name = FUNC_0 (VAR_7);
  VAR_5->first_value = *(VAR_5->default_val = ((void*)0));
  VAR_5->is_numeric = VAR_5->is_const = VAR_5->is_special = 0;
  VAR_5->next = VAR_2[VAR_6];
  VAR_2[VAR_6] = VAR_5;

  *VAR_3 = VAR_5->name;

  return VAR_5;
}
