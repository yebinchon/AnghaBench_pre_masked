
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_7 ;

int
FUNC_5 (char *VAR_8, int VAR_9, char *VAR_10, int VAR_11)
{
  int VAR_12;

  FUNC_3 ();
  VAR_3 = 0;
  VAR_12 = FUNC_2 (VAR_8, VAR_9);
  if (VAR_6)
    {
      if (VAR_4)
 FUNC_1 (VAR_5 ? VAR_5 : VAR_7,
   "%s:%d -- ", VAR_10, VAR_11);

      if (VAR_3)
 {
   FUNC_1 (VAR_5 ? VAR_5 : VAR_7,
     "[open FAILED! (%s) line %d]\\n",
     FUNC_4 (VAR_3), VAR_11);
 }
      else
 {
   FUNC_1 (VAR_5 ? VAR_5 : VAR_7,
     "%d = open (%s, ", VAR_12, VAR_8);
   if (VAR_9 == VAR_0)
     FUNC_1 (VAR_5 ? VAR_5 : VAR_7, "O_RDONLY) %d\n",
       VAR_11);
   else if (VAR_9 == VAR_2)
     FUNC_1 (VAR_5 ? VAR_5 : VAR_7, "O_WRONLY) %d\n",
       VAR_11);
   else if (VAR_9 == VAR_1)
     FUNC_1 (VAR_5 ? VAR_5 : VAR_7, "O_RDWR)   %d\n",
       VAR_11);
 }
      if (VAR_5)
 FUNC_0 (VAR_5);
    }

  return VAR_12;
}
