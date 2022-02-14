
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct block {int dummy; } ;


 char* FUNC_0 (scalar_t__) ;
 struct type* FUNC_1 (char*,struct block*,int) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;

struct type *
FUNC_4 (char *VAR_0)
{
  struct type *VAR_1;
  char *VAR_2 = FUNC_0 (FUNC_3 (VAR_0) + 8);

  FUNC_2 (VAR_2, "signed ");
  FUNC_2 (VAR_2 + 7, VAR_0);
  VAR_1 = FUNC_1 (VAR_2, (struct block *) ((void*)0), 1);

  if (VAR_1 != ((void*)0))
    return VAR_1;
  return FUNC_1 (VAR_0, (struct block *) ((void*)0), 0);
}
