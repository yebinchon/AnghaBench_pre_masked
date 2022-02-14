
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 struct ui_file* FUNC_0 (int ,struct ui_file*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 struct ui_file* VAR_1 ;

__attribute__((used)) static int
FUNC_2 (void *VAR_2)
{
  struct ui_file *VAR_3;






  VAR_3 = FUNC_0 (VAR_0, VAR_1);
  if (VAR_3 != VAR_1)
    {
      FUNC_0 (VAR_0, VAR_3);
      VAR_3 = ((void*)0);
    }

  FUNC_1 ();

  if (VAR_3 != ((void*)0))
    FUNC_0 (VAR_0, VAR_1);

  return 1;
}
