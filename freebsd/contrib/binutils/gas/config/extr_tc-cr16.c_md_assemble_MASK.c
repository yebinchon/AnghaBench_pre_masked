
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int inst ;
struct TYPE_8__ {TYPE_1__* arg; } ;
typedef TYPE_2__ ins ;
struct TYPE_7__ {scalar_t__ type; scalar_t__ constant; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char*,TYPE_2__*) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int const* VAR_2 ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (char*,char*) ;

void
FUNC_16 (char *VAR_3)
{
  ins VAR_4;
  char *VAR_5, VAR_6[32];
  char VAR_7;


  FUNC_12 (VAR_3);


  for (VAR_5 = VAR_3; *VAR_5 != 0 && !FUNC_0 (*VAR_5); VAR_5++)
    ;
  VAR_7 = *VAR_5;
  *VAR_5++ = '\0';


  if (FUNC_8 (VAR_3))
    {
      FUNC_14 (VAR_6, FUNC_6 (VAR_3));
      VAR_3 = "b";
      FUNC_13 (VAR_6,",");
      FUNC_13 (VAR_6, VAR_5);
      VAR_5 = (char *) &VAR_6;
    }



  if (FUNC_15 ("cinv", VAR_3))
    {

      FUNC_4 (VAR_5);
      FUNC_13 (VAR_3, VAR_5);
    }




  if ((FUNC_15 ("lshb", VAR_3) || FUNC_15 ("lshw", VAR_3) || FUNC_15 ("lshd", VAR_3))
      && (VAR_5 [0] == '$'))
    {
      FUNC_14 (VAR_6, VAR_5);

      VAR_2 = (const inst *) FUNC_7 (VAR_1, VAR_3);
       FUNC_10 (&VAR_4, VAR_6);
      if (((&VAR_4)->arg[0].type == VAR_0)
   && ((&VAR_4)->arg[0].constant >= 0))
        {
           if (FUNC_15 ("lshb", VAR_3))
      VAR_3 = "ashub";
           else if (FUNC_15 ("lshd", VAR_3))
      VAR_3 = "ashud";
    else
      VAR_3 = "ashuw";
        }
    }


  VAR_2 = (const inst *) FUNC_7 (VAR_1, VAR_3);
  if (VAR_2 == ((void*)0))
    {
      FUNC_2 (FUNC_1("Unknown opcode: `%s'"), VAR_3);
      return;
    }


  FUNC_5 (0);


  FUNC_9 (&VAR_4, VAR_5);


  if (FUNC_3 (VAR_3, &VAR_4) == 0)
    return;


  FUNC_11 (&VAR_4);
}
