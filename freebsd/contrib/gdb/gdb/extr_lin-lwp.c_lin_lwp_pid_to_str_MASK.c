
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;
typedef int buf ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,int ) ;

__attribute__((used)) static char *
FUNC_4 (ptid_t VAR_0)
{
  static char VAR_1[64];

  if (FUNC_1 (VAR_0))
    {
      FUNC_3 (VAR_1, sizeof (VAR_1), "LWP %ld", FUNC_0 (VAR_0));
      return VAR_1;
    }

  return FUNC_2 (VAR_0);
}
