
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct block {int dummy; } ;


 char* FUNC_0 (scalar_t__) ;
 struct type* FUNC_1 (char*,struct block*,int ) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;

struct type *
FUNC_4 (char *VAR_0)
{
  char *VAR_1 = FUNC_0 (FUNC_3 (VAR_0) + 10);

  FUNC_2 (VAR_1, "unsigned ");
  FUNC_2 (VAR_1 + 9, VAR_0);
  return (FUNC_1 (VAR_1, (struct block *) ((void*)0), 0));
}
