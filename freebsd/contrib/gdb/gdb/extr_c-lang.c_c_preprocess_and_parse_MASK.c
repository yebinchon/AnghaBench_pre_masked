
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_scope {int dummy; } ;
struct cleanup {int dummy; } ;


 int FUNC_0 () ;
 struct macro_scope* FUNC_1 () ;
 int FUNC_2 (struct cleanup*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 struct cleanup* FUNC_5 (int ,struct macro_scope**) ;
 int VAR_6 ;
 struct macro_scope* FUNC_6 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_7 (void)
{

  struct macro_scope *VAR_9 = 0;
  struct cleanup *VAR_10 = FUNC_5 (VAR_4, &VAR_9);

  if (VAR_0)
    VAR_9 = FUNC_6 (FUNC_3 (VAR_1, 0));
  else
    VAR_9 = FUNC_1 ();

  if (VAR_9)
    {
      VAR_3 = VAR_8;
      VAR_2 = (void *) VAR_9;
    }
  else
    {
      VAR_3 = VAR_6;
      VAR_2 = 0;
    }

  FUNC_4 (! VAR_5);
  FUNC_5 (VAR_7, 0);

  {
    int VAR_11 = FUNC_0 ();
    FUNC_2 (VAR_10);
    return VAR_11;
  }
}
