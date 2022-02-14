
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;
 int VAR_5 ;

void
FUNC_5 (int VAR_6)
{
  if (VAR_6 && VAR_2 == VAR_1)
    return;

  VAR_2 = VAR_1;
  FUNC_0 ("Current language:  %s\n", VAR_3);
  FUNC_2 ((char *) 0, 1);

  if (!VAR_6)
    {
      FUNC_0 ("Type checking:     %s\n", VAR_5);
      FUNC_4 ((char *) 0, 1);
      FUNC_0 ("Range checking:    %s\n", VAR_4);
      FUNC_3 ((char *) 0, 1);
      FUNC_0 ("Case sensitivity:  %s\n", VAR_0);
      FUNC_1 ((char *) 0, 1);
    }
}
