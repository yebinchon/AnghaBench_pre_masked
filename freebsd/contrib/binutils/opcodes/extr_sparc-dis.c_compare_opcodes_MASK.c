
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long match; unsigned long lose; int architecture; char* name; int flags; int args; } ;
typedef TYPE_1__ sparc_opcode ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,char) ;
 unsigned int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_6 (const void * VAR_3, const void * VAR_4)
{
  sparc_opcode *VAR_5 = * (sparc_opcode **) VAR_3;
  sparc_opcode *VAR_6 = * (sparc_opcode **) VAR_4;
  unsigned long int VAR_7 = VAR_5->match, VAR_8 = VAR_6->match;
  unsigned long int VAR_9 = VAR_5->lose, VAR_10 = VAR_6->lose;
  register unsigned int VAR_11;






  if (VAR_5->architecture & VAR_1)
    {
      if (! (VAR_6->architecture & VAR_1))
 return -1;
    }
  else
    {
      if (VAR_6->architecture & VAR_1)
 return 1;
      else if (VAR_5->architecture != VAR_6->architecture)
 return VAR_5->architecture - VAR_6->architecture;
    }



  if (VAR_7 & VAR_9)
    {
      FUNC_1
 (VAR_2,

  FUNC_0("Internal error:  bad sparc-opcode.h: \"%s\", %#.8lx, %#.8lx\n"),
  VAR_5->name, VAR_7, VAR_9);
      VAR_5->lose &= ~VAR_5->match;
      VAR_9 = VAR_5->lose;
    }

  if (VAR_8 & VAR_10)
    {
      FUNC_1
 (VAR_2,

  FUNC_0("Internal error: bad sparc-opcode.h: \"%s\", %#.8lx, %#.8lx\n"),
  VAR_6->name, VAR_8, VAR_10);
      VAR_6->lose &= ~VAR_6->match;
      VAR_10 = VAR_6->lose;
    }



  for (VAR_11 = 0; VAR_11 < 32; ++VAR_11)
    {
      unsigned long int VAR_12 = 1 << VAR_11;
      int VAR_13 = (VAR_7 & VAR_12) != 0;
      int VAR_14 = (VAR_8 & VAR_12) != 0;

      if (VAR_13 != VAR_14)
 return VAR_14 - VAR_13;
    }

  for (VAR_11 = 0; VAR_11 < 32; ++VAR_11)
    {
      unsigned long int VAR_15 = 1 << VAR_11;
      int VAR_16 = (VAR_9 & VAR_15) != 0;
      int VAR_17 = (VAR_10 & VAR_15) != 0;

      if (VAR_16 != VAR_17)
 return VAR_17 - VAR_16;
    }





  {
    int VAR_18 = (VAR_5->flags & VAR_0) - (VAR_6->flags & VAR_0);

    if (VAR_18 != 0)

      return VAR_18;
  }



  VAR_11 = FUNC_3 (VAR_5->name, VAR_6->name);
  if (VAR_11)
    {
      if (VAR_5->flags & VAR_0)
 return VAR_11;
      else
 FUNC_1 (VAR_2,

   FUNC_0("Internal error: bad sparc-opcode.h: \"%s\" == \"%s\"\n"),
   VAR_5->name, VAR_6->name);
    }


  {
    int VAR_19 = FUNC_4 (VAR_5->args) - FUNC_4 (VAR_6->args);

    if (VAR_19 != 0)

      return VAR_19;
  }


  {
    char *VAR_20 = (char *) FUNC_2 (VAR_5->args, '+');
    char *VAR_21 = (char *) FUNC_2 (VAR_6->args, '+');

    if (VAR_20 && VAR_21)
      {



 if (VAR_20[-1] == 'i' && VAR_21[1] == 'i')

   return 1;
 if (VAR_20[1] == 'i' && VAR_21[-1] == 'i')

   return -1;
      }
  }


  {
    int VAR_22 = FUNC_5 (VAR_5->args, "i,1", 3) == 0;
    int VAR_23 = FUNC_5 (VAR_6->args, "i,1", 3) == 0;

    if (VAR_22 ^ VAR_23)
      return VAR_22 - VAR_23;
  }







  return 0;
}
