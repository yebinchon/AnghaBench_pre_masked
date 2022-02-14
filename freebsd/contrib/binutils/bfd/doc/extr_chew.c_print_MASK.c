
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 () ;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4 ()
{
  if (*VAR_0 == 1)
    FUNC_3 (VAR_4, VAR_3);
  else if (*VAR_0 == 2)
    FUNC_3 (VAR_4, VAR_2);
  else
    FUNC_1 (VAR_2, "print: illegal print destination `%d'\n", *VAR_0);
  VAR_0--;
  VAR_4--;
  FUNC_2 ();
  FUNC_0 ();
  VAR_1++;
}
