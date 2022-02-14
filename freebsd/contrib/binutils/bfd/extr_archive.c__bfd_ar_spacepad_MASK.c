
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*,char,size_t) ;
 int FUNC_2 (char*,int,char const*,long) ;
 size_t FUNC_3 (char*) ;

void
FUNC_4 (char *VAR_0, size_t VAR_1, const char *VAR_2, long VAR_3)
{
  static char VAR_4[20];
  size_t VAR_5;
  FUNC_2 (VAR_4, sizeof (VAR_4), VAR_2, VAR_3);
  VAR_5 = FUNC_3 (VAR_4);
  if (VAR_5 < VAR_1)
    {
      FUNC_0 (VAR_0, VAR_4, VAR_5);
      FUNC_1 (VAR_0 + VAR_5, ' ', VAR_1 - VAR_5);
    }
  else
    FUNC_0 (VAR_0, VAR_4, VAR_1);
}
