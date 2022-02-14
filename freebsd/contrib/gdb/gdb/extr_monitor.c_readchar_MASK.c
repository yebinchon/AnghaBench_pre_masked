
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5 (int VAR_7)
{
  int VAR_8;
  static enum
    {
      last_random, last_nl, last_cr, last_crnl
    }
  VAR_9 = last_random;
  int VAR_10;

  do
    {
      VAR_10 = 0;
      VAR_8 = FUNC_3 (VAR_5, VAR_7);

      if (VAR_8 >= 0)
 {
   VAR_8 &= 0x7f;


   if (VAR_4 || VAR_6)
     {
       char VAR_11[2];
       VAR_11[0] = VAR_8;
       VAR_11[1] = '\0';
       FUNC_2 ("read -->", VAR_11, "<--");
     }

 }


      if ((VAR_2->flags & VAR_0) != 0)
 {
   if ((VAR_8 == '\r' && VAR_9 == last_nl)
       || (VAR_8 == '\n' && VAR_9 == last_cr))
     {
       VAR_9 = last_crnl;
       VAR_10 = 1;
     }
   else if (VAR_8 == '\r')
     VAR_9 = last_cr;
   else if (VAR_8 != '\n')
     VAR_9 = last_random;
   else
     {
       VAR_9 = last_nl;
       VAR_8 = '\r';
     }
 }
    }
  while (VAR_10);

  if (VAR_8 >= 0)
    return VAR_8;

  if (VAR_8 == VAR_1)
      FUNC_0 ("Timeout reading from remote system.");

  FUNC_1 ("remote-monitor");
}
