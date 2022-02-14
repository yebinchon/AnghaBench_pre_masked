
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

void
FUNC_3 (char *VAR_0, char *VAR_1, unsigned char *VAR_2)
{
  if (FUNC_2 (VAR_0, "vCont;", 6) == 0)
    {
      FUNC_0 (VAR_0, VAR_1, VAR_2);
      return;
    }

  if (FUNC_2 (VAR_0, "vCont?", 6) == 0)
    {
      FUNC_1 (VAR_0, "vCont;c;C;s;S");
      return;
    }



  VAR_0[0] = 0;
  return;
}
