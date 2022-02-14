
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;
typedef int buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4 (ptid_t VAR_0)
{
  int VAR_1 = FUNC_0 (VAR_0);
  char VAR_2[16];

  if (VAR_1 < 0)
    FUNC_3 (VAR_2, "T-%08x", -VAR_1);
  else
    FUNC_3 (VAR_2, "T%08x", VAR_1);
  FUNC_2 (VAR_2);
  FUNC_1 (VAR_2, sizeof (VAR_2), 0);
  return (VAR_2[0] == 'O' && VAR_2[1] == 'K');
}
