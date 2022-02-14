
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cmdll; char* cmdl; char* cmdw; char* cmdb; int term_cmd; scalar_t__ term; scalar_t__ resp_delim; } ;
struct TYPE_4__ {int flags; TYPE_1__ getmem; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int,int,char*,int ) ;
 int FUNC_3 (scalar_t__,int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int,unsigned int) ;
 unsigned int FUNC_9 (char*,char**,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_10 (CORE_ADDR VAR_4, char *VAR_5, int VAR_6)
{
  unsigned int VAR_7;
  char VAR_8[sizeof (int) * 2 + 1];
  char *VAR_9;
  char *VAR_10;

  FUNC_1 ("MON read single\n");
  if ((VAR_4 & 0x3) == 0 && VAR_6 >= 4 && VAR_1->getmem.cmdl)
    {
      VAR_6 = 4;
      VAR_10 = VAR_1->getmem.cmdl;
    }
  else if ((VAR_4 & 0x1) == 0 && VAR_6 >= 2 && VAR_1->getmem.cmdw)
    {
      VAR_6 = 2;
      VAR_10 = VAR_1->getmem.cmdw;
    }
  else
    {
      VAR_6 = 1;
      VAR_10 = VAR_1->getmem.cmdb;
    }



  FUNC_6 (VAR_10, VAR_4);





  if (VAR_1->getmem.resp_delim)
    {
      FUNC_1 ("EXP getmem.resp_delim\n");
      FUNC_5 (&VAR_2, ((void*)0), 0);
    }





  if (VAR_1->flags & VAR_0)
    {
      int VAR_11;

      VAR_11 = FUNC_7 (VAR_3);
      while (VAR_11 == ' ')
 VAR_11 = FUNC_7 (VAR_3);
      if ((VAR_11 == '0') && ((VAR_11 = FUNC_7 (VAR_3)) == 'x'))
 ;
      else
 FUNC_2 ("monitor_read_memory_single",
         "bad response from monitor",
         VAR_4, 0, ((void*)0), 0);
    }

  {
    int VAR_12;
    for (VAR_12 = 0; VAR_12 < VAR_6 * 2; VAR_12++)
      {
 int VAR_13;

 while (1)
   {
     VAR_13 = FUNC_7 (VAR_3);
     if (FUNC_0 (VAR_13))
       break;
     if (VAR_13 == ' ')
       continue;

     FUNC_2 ("monitor_read_memory_single",
      "bad response from monitor",
      VAR_4, VAR_12, VAR_8, 0);
   }
      VAR_8[VAR_12] = VAR_13;
    }
    VAR_8[VAR_12] = '\000';
  }





  if (VAR_1->getmem.term)
    {
      FUNC_3 (VAR_1->getmem.term, ((void*)0), 0);

      if (VAR_1->getmem.term_cmd)
 {
   FUNC_6 (VAR_1->getmem.term_cmd);
   FUNC_4 (((void*)0), 0);
 }
    }
  else
    FUNC_4 (((void*)0), 0);

  VAR_9 = VAR_8;
  VAR_7 = FUNC_9 (VAR_8, &VAR_9, 16);

  if (VAR_7 == 0 && VAR_8 == VAR_9)
    FUNC_2 ("monitor_read_memory_single",
     "bad value from monitor",
     VAR_4, 0, VAR_8, 0);



  FUNC_8 (VAR_5, VAR_6, VAR_7);

  return VAR_6;
}
