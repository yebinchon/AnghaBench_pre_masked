
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,int) ;

void
FUNC_4 (int VAR_3)
{
  register char *VAR_4;
  int VAR_5;


  if ((VAR_4 = FUNC_0 (&VAR_5)) != 0)
    {
      int VAR_6
 = (!FUNC_2 (VAR_4, -1, 1) && VAR_3);



      if (VAR_0
   && *VAR_1 == '\''
   && VAR_2[(unsigned char) VAR_1[1]])
 ++VAR_1;

      FUNC_1 ();
      if (!VAR_6)
 FUNC_3 (VAR_4, VAR_3);
    }
}
