
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expression {int dummy; } ;
struct cleanup {int dummy; } ;


 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (struct expression*) ;
 int VAR_0 ;
 struct cleanup* FUNC_2 (int ,struct expression**) ;
 struct expression* FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_1, int VAR_2)
{
  struct expression *VAR_3 = FUNC_3 (VAR_1);
  struct cleanup *VAR_4 =
    FUNC_2 (VAR_0, &VAR_3);
  FUNC_1 (VAR_3);
  FUNC_0 (VAR_4);
}
