
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct objfile {int dummy; } ;


 struct type* FUNC_0 (struct objfile*) ;
 struct type** FUNC_1 (int*) ;

__attribute__((used)) static struct type *
FUNC_2 (int VAR_0[2], struct objfile *VAR_1)
{
  struct type **VAR_2;

  if (VAR_0[0] == -1)
    {
      return (FUNC_0 (VAR_1));
    }

  VAR_2 = FUNC_1 (VAR_0);




  if (*VAR_2 == 0)
    {
      *VAR_2 = FUNC_0 (VAR_1);
    }

  return (*VAR_2);
}
