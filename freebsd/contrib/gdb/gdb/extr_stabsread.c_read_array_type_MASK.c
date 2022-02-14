
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct objfile {int dummy; } ;


 struct type* FUNC_0 (struct type*,struct type*,struct type*) ;
 struct type* FUNC_1 (struct type*,struct type*,int,int) ;
 struct type* FUNC_2 (char**,struct objfile*) ;
 int FUNC_3 (char**,char,int*) ;
 struct type* FUNC_4 (char**,struct objfile*) ;

__attribute__((used)) static struct type *
FUNC_5 (char **VAR_0, struct type *VAR_1,
   struct objfile *VAR_2)
{
  struct type *VAR_3, *VAR_4, *VAR_5;
  int VAR_6, VAR_7;
  int VAR_8 = 0;
  int VAR_9;
    {
      VAR_3 = FUNC_4 (VAR_0, VAR_2);
      if (**VAR_0 != ';')

 return FUNC_2 (VAR_0, VAR_2);
      ++*VAR_0;
    }

  if (!(**VAR_0 >= '0' && **VAR_0 <= '9') && **VAR_0 != '-')
    {
      (*VAR_0)++;
      VAR_8 = 1;
    }
  VAR_6 = FUNC_3 (VAR_0, ';', &VAR_9);

  if (VAR_9 != 0)
    return FUNC_2 (VAR_0, VAR_2);

  if (!(**VAR_0 >= '0' && **VAR_0 <= '9') && **VAR_0 != '-')
    {
      (*VAR_0)++;
      VAR_8 = 1;
    }
  VAR_7 = FUNC_3 (VAR_0, ';', &VAR_9);
  if (VAR_9 != 0)
    return FUNC_2 (VAR_0, VAR_2);

  VAR_4 = FUNC_4 (VAR_0, VAR_2);

  if (VAR_8)
    {
      VAR_6 = 0;
      VAR_7 = -1;
    }

  VAR_5 =
    FUNC_1 ((struct type *) ((void*)0), VAR_3, VAR_6, VAR_7);
  VAR_1 = FUNC_0 (VAR_1, VAR_4, VAR_5);

  return VAR_1;
}
