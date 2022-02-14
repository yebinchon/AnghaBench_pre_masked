
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 struct ui_file* FUNC_0 (int ,struct ui_file*) ;
 int FUNC_1 () ;
 struct ui_file* VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_3 (void *VAR_3)
{
  struct ui_file *VAR_4;




  VAR_4 = FUNC_0 (VAR_1, VAR_0);
  if (VAR_4 != VAR_0)
    {
      FUNC_0 (VAR_1, VAR_4);
      VAR_4 = ((void*)0);
    }

  FUNC_1 ();

  if (VAR_4 != ((void*)0))
    FUNC_0 (VAR_1, VAR_0);

  if (VAR_2)
    FUNC_2 ();
  return 1;
}
