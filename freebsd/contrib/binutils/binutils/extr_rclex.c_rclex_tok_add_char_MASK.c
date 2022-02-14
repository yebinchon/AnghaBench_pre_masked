
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (int VAR_3)
{
  if (! VAR_0 || VAR_1 <= VAR_2)
    {
      char *VAR_4 = FUNC_3 (VAR_1 + 9);

      if (! VAR_4)
 FUNC_0 ();
      if (VAR_0)
 {
   FUNC_2 (VAR_4, VAR_0, VAR_2 + 1);
   FUNC_1 (VAR_0);
 }
      else
 VAR_2 = 0;
      VAR_1 += 8;
      VAR_0 = VAR_4;
    }
  if (VAR_3 != -1)
    VAR_0[VAR_2++] = (char) VAR_3;
  VAR_0[VAR_2] = 0;
}
