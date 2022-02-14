
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct add_to_obstack_info {int first_time; int ob; scalar_t__ check_dir; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void *
FUNC_4 (char *VAR_1, void *VAR_2)
{
  struct add_to_obstack_info *VAR_3 = VAR_2;

  if (VAR_3->check_dir && !FUNC_0 (VAR_1, 0))
    return ((void*)0);

  if (!VAR_3->first_time)
    FUNC_1 (VAR_3->ob, VAR_0);

  FUNC_2 (VAR_3->ob, VAR_1, FUNC_3 (VAR_1));

  VAR_3->first_time = 0;
  return ((void*)0);
}
