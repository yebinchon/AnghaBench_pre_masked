
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct objfile {struct type** fundamental_types; int objfile_obstack; } ;


 int VAR_0 ;
 int FUNC_0 (struct objfile*,int) ;
 struct type* FUNC_1 (struct objfile*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,int) ;

struct type *
FUNC_5 (struct objfile *VAR_2, int VAR_3)
{
  struct type **VAR_4;
  int VAR_5;

  if (VAR_3 < 0 || VAR_3 >= VAR_0)
    {
      FUNC_2 ("internal error - invalid fundamental type id %d", VAR_3);
    }




  if (VAR_2->fundamental_types == ((void*)0))
    {
      VAR_5 = VAR_0 * sizeof (struct type *);
      VAR_2->fundamental_types = (struct type **)
 FUNC_4 (&VAR_2->objfile_obstack, VAR_5);
      FUNC_3 ((char *) VAR_2->fundamental_types, 0, VAR_5);
      FUNC_0 (VAR_2, VAR_1 += VAR_0);
    }




  VAR_4 = VAR_2->fundamental_types + VAR_3;
  if (*VAR_4 == ((void*)0))
    {
      *VAR_4 = FUNC_1 (VAR_2, VAR_3);
    }

  return (*VAR_4);
}
