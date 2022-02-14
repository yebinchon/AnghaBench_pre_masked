
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct block {int dummy; } ;
typedef int domain_enum ;


 int FUNC_0 (char const*,struct block*,int ,struct symbol***,struct block***) ;
 int FUNC_1 (struct symbol**,struct block**,int,int) ;

struct symbol *
FUNC_2 (const char *VAR_0, struct block *VAR_1,
     domain_enum VAR_2)
{
  struct symbol **VAR_3;
  struct block **VAR_4;
  int VAR_5;

  VAR_5 = FUNC_0 (VAR_0,
      VAR_1, VAR_2,
      &VAR_3, &VAR_4);

  if (VAR_5 == 0)
    return ((void*)0);
  else if (VAR_5 != 1)
    FUNC_1 (VAR_3, VAR_4, VAR_5, 1);

  return VAR_3[0];
}
