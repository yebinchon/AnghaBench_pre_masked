
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct objfile {int dummy; } ;
struct field {struct type* type; } ;


 int FUNC_0 (char**,struct objfile*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct field*,int ,int) ;
 struct type* FUNC_3 (char**,struct objfile*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct field *
FUNC_5 (char **VAR_1, int VAR_2, struct objfile *VAR_3, int *VAR_4,
    int *VAR_5)
{

  struct type *VAR_6[1024];
  int VAR_7 = 0, VAR_8;
  struct field *VAR_9;

  while (**VAR_1 != VAR_2)
    {
      if (**VAR_1 != ',')

 return (struct field *) -1;
      (*VAR_1)++;
      FUNC_0 (VAR_1, VAR_3);
      VAR_6[VAR_7++] = FUNC_3 (VAR_1, VAR_3);
    }
  (*VAR_1)++;

  if (FUNC_1 (VAR_6[VAR_7 - 1]) != VAR_0)
    *VAR_5 = 1;
  else
    {
      VAR_7--;
      *VAR_5 = 0;
    }

  VAR_9 = (struct field *) FUNC_4 (VAR_7 * sizeof (struct field));
  FUNC_2 (VAR_9, 0, VAR_7 * sizeof (struct field));
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
    VAR_9[VAR_8].type = VAR_6[VAR_8];
  *VAR_4 = VAR_7;
  return VAR_9;
}
