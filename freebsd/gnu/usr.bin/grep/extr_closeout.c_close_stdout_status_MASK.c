
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int,char*,char const*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 char* FUNC_5 (scalar_t__) ;
 int VAR_2 ;

void
FUNC_6 (int VAR_3)
{
  int VAR_4 = FUNC_4 (VAR_2) ? 0 : -1;






  if (FUNC_3 (VAR_2) != 0)
    VAR_4 = VAR_0;

  if (0 < VAR_4)
    {
      char const *VAR_5 = FUNC_0("write error");
      if (VAR_1)
 FUNC_2 (VAR_3, VAR_4, "%s: %s", FUNC_5 (VAR_1), VAR_5);
      else
 FUNC_2 (VAR_3, VAR_4, "%s", VAR_5);
    }
}
