
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct cleanup {int dummy; } ;


 int FUNC_0 (struct cleanup*) ;
 struct cleanup* FUNC_1 (int ,struct symbol**) ;
 int FUNC_2 (char const*,char const*) ;
 struct symbol** VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct symbol** FUNC_3 (int) ;

struct symbol **
FUNC_4 (const char *VAR_4,
      const char *VAR_5)
{
  struct cleanup *VAR_6;

  VAR_2 = 100;
  VAR_1 = 0;
  VAR_0 = FUNC_3 ((VAR_2 + 1) *
       sizeof (struct symbol *));
  VAR_0[0] = ((void*)0);

  VAR_6 = FUNC_1 (VAR_3, VAR_0);

  FUNC_2 (VAR_4, VAR_5);

  FUNC_0 (VAR_6);

  return VAR_0;
}
