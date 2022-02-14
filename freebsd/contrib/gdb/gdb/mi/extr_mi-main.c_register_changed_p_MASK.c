
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int,char*) ;
 scalar_t__ FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int * VAR_2 ;

__attribute__((used)) static int
FUNC_5 (int VAR_3)
{
  char VAR_4[VAR_0];

  if (! FUNC_2 (VAR_1, VAR_3, VAR_4))
    return -1;

  if (FUNC_3 (&VAR_2[FUNC_0 (VAR_3)], VAR_4,
       FUNC_1 (VAR_3)) == 0)
    return 0;



  FUNC_4 (&VAR_2[FUNC_0 (VAR_3)], VAR_4,
   FUNC_1 (VAR_3));

  return 1;
}
