
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4 (int VAR_1)
{
  char VAR_2[10];
  int VAR_3 = FUNC_0 ();

  if (VAR_0 > 0)
    {
      if (VAR_1)
 FUNC_2 (VAR_2, "[%02x]", VAR_3 & 0xff);
      else if (VAR_3 == '\0')
 FUNC_3 (VAR_2, "\\0");
      else
 {
   VAR_2[0] = VAR_3;
   VAR_2[1] = '\0';
 }
      FUNC_1 ("Read -->", VAR_2, "<--");
    }
  return VAR_3;
}
