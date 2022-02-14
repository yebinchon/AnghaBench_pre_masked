
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdb_client_data ;
typedef int buf ;


 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_2 (int VAR_2, gdb_client_data VAR_3)
{
  int VAR_4;
  char VAR_5[256];

  VAR_4 = FUNC_0 (VAR_1[0], VAR_5, sizeof (VAR_5) - 1);
  if (VAR_4 > 0 && VAR_0)
    {
      VAR_5[VAR_4] = 0;
      FUNC_1 (VAR_5);
    }
}
