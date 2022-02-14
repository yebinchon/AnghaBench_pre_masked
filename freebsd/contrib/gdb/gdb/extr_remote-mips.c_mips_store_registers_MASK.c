
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (char,int ,int ,int*,int ,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5 (int VAR_3)
{
  int VAR_4;

  if (VAR_3 == -1)
    {
      for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 FUNC_5 (VAR_3);
      return;
    }

  FUNC_2 ('R', FUNC_1 (VAR_3),
  FUNC_3 (VAR_3),
  &VAR_4, VAR_2, ((void*)0));
  if (VAR_4)
    FUNC_0 ("Can't write register %d: %s", VAR_3, FUNC_4 (VAR_1));
}
