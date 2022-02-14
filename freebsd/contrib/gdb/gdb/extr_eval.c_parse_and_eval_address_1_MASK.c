
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expression {int dummy; } ;
struct cleanup {int dummy; } ;
struct block {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (struct expression*) ;
 int VAR_0 ;
 struct cleanup* FUNC_2 (int ,struct expression**) ;
 struct expression* FUNC_3 (char**,struct block*,int ) ;
 int FUNC_4 (int ) ;

CORE_ADDR
FUNC_5 (char **VAR_1)
{
  struct expression *VAR_2 = FUNC_3 (VAR_1, (struct block *) 0, 0);
  CORE_ADDR VAR_3;
  struct cleanup *VAR_4 =
    FUNC_2 (VAR_0, &VAR_2);

  VAR_3 = FUNC_4 (FUNC_1 (VAR_2));
  FUNC_0 (VAR_4);
  return VAR_3;
}
