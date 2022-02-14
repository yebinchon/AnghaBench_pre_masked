
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (char const*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_4)
{
  int VAR_5, VAR_6;


  VAR_5 = FUNC_1 (VAR_4, FUNC_2 (VAR_4)) % VAR_0;
  VAR_6 = VAR_5;
  if (VAR_2[VAR_5] != 0)
    {
      VAR_1++;
      for (;;)
 {
   VAR_5 = (VAR_5+1) % VAR_0;
   FUNC_0 (VAR_5 != VAR_6);
   if (VAR_2[VAR_5] == 0)
     break;
 }
    }
  VAR_2[VAR_5] = VAR_3;

  VAR_3++;
}
