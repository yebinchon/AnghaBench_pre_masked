
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cmdll; char* cmdl; char* cmdw; char* cmdb; int term_cmd; scalar_t__ term; scalar_t__ resp_delim; } ;
struct TYPE_4__ {int flags; TYPE_1__ setmem; scalar_t__ fill; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 unsigned int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (scalar_t__,int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_9 (CORE_ADDR VAR_6, char *VAR_7, int VAR_8)
{
  unsigned int VAR_9, VAR_10;
  char *VAR_11;
  int VAR_12;

  FUNC_2 ("MON write %d %s\n", VAR_8, FUNC_8 (VAR_6));

  if (VAR_4->flags & VAR_0)
    VAR_6 = FUNC_0 (VAR_6);



  if (VAR_4->fill)
    {
      for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
 if (VAR_7[VAR_12] != 0)
   break;

      if (VAR_12 > 4)
 {
   FUNC_2 ("MON FILL %d\n", VAR_12);
   if (VAR_4->flags & VAR_1)
     FUNC_6 (VAR_4->fill, VAR_6, (VAR_6 + VAR_12) - 1, 0);
   else
     FUNC_6 (VAR_4->fill, VAR_6, VAR_12, 0);

   FUNC_4 (((void*)0), 0);

   return VAR_12;
 }
    }
  if ((VAR_6 & 0x3) == 0 && VAR_8 >= 4 && VAR_4->setmem.cmdl)
    {
      VAR_8 = 4;
      VAR_11 = VAR_4->setmem.cmdl;
    }
  else if ((VAR_6 & 0x1) == 0 && VAR_8 >= 2 && VAR_4->setmem.cmdw)
    {
      VAR_8 = 2;
      VAR_11 = VAR_4->setmem.cmdw;
    }
  else
    {
      VAR_8 = 1;
      VAR_11 = VAR_4->setmem.cmdb;
    }

  VAR_9 = FUNC_1 (VAR_7, VAR_8);

  if (VAR_8 == 4)
    {
      VAR_10 = *(unsigned int *) VAR_7;
      FUNC_2 ("Hostval(%08x) val(%08x)\n", VAR_10, VAR_9);
    }


  if (VAR_4->flags & VAR_2)
    FUNC_7 (VAR_11, VAR_6, VAR_9);
  else if (VAR_4->flags & VAR_3)
    {

      FUNC_7 (VAR_11, VAR_6);

      if (VAR_4->setmem.resp_delim)
        {
          FUNC_2 ("EXP setmem.resp_delim");
          FUNC_5 (&VAR_5, ((void*)0), 0);
   FUNC_6 ("%x\r", VAR_9);
       }
      if (VAR_4->setmem.term)
 {
   FUNC_2 ("EXP setmem.term");
   FUNC_3 (VAR_4->setmem.term, ((void*)0), 0);
   FUNC_6 ("%x\r", VAR_9);
 }
      if (VAR_4->setmem.term_cmd)
 {
   FUNC_6 ("%s", VAR_4->setmem.term_cmd);

 }
    }
  else
    FUNC_6 (VAR_11, VAR_6, VAR_9);

  FUNC_4 (((void*)0), 0);

  return VAR_8;
}
