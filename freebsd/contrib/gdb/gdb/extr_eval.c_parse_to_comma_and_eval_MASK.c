
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct expression {int dummy; } ;
struct cleanup {int dummy; } ;
struct block {int dummy; } ;


 int FUNC_0 (struct cleanup*) ;
 struct value* FUNC_1 (struct expression*) ;
 int VAR_0 ;
 struct cleanup* FUNC_2 (int ,struct expression**) ;
 struct expression* FUNC_3 (char**,struct block*,int) ;

struct value *
FUNC_4 (char **VAR_1)
{
  struct expression *VAR_2 = FUNC_3 (VAR_1, (struct block *) 0, 1);
  struct value *VAR_3;
  struct cleanup *VAR_4 =
    FUNC_2 (VAR_0, &VAR_2);

  VAR_3 = FUNC_1 (VAR_2);
  FUNC_0 (VAR_4);
  return VAR_3;
}
