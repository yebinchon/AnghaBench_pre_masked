
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buffer; void* insn; int fields; } ;
typedef TYPE_1__ mep_insn ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (void*,int ) ;
 int VAR_0 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ,char*,int *,char*,char**) ;
 int FUNC_8 (TYPE_1__) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_9 (void)
{
  int VAR_4, VAR_5, VAR_6, VAR_7;




  if (VAR_2 > 2)
    FUNC_4 ("Internally parallel cores of coprocessors not supported.");




  if (VAR_2 == 0)
    return;


  VAR_4 = FUNC_2 (VAR_3[0].insn);
  VAR_6 = FUNC_0 (& VAR_3[0].fields);

  if (VAR_2 == 2)
    {

      VAR_5 = FUNC_2 (VAR_3[1].insn);
      VAR_7 = FUNC_0 (& VAR_3[1].fields);

      if ((VAR_4 && !VAR_5)
   || (VAR_5 && !VAR_4))
 {


   if (VAR_6 + VAR_7 == 64)
            return;
   else
            FUNC_3 ("core and copro insn lengths must total 64 bits.");
 }
      else
        FUNC_3 ("vliw group must consist of 1 core and 1 copro insn.");
    }
  else
    {
      if (VAR_6 == 64)
        return;



      if (FUNC_1 (VAR_3[0].insn,
    VAR_0))
 FUNC_4 ("No valid nop.");

      if (VAR_4)
 {
   char *VAR_8;
   mep_insn VAR_9;
          int VAR_10;


          for (VAR_10 = 0; VAR_10 < 64; VAR_10++)
             VAR_9.buffer[VAR_10] = '\0';
   if (VAR_6 == 48)
     {


       VAR_9.insn = FUNC_7 (VAR_1, "nop",
        & VAR_9.fields, VAR_9.buffer,
        & VAR_8);
     }
          else
            {
              FUNC_4 ("Assembler expects a non-existent core nop.");
            }

  if (!VAR_9.insn)
    {
      FUNC_3 ("%s", VAR_8);
      return;
    }
         VAR_3[1] = VAR_3[0];
         VAR_3[0] = VAR_9;
         VAR_2++;
         FUNC_6(0);
         FUNC_5(1);

 }
      else
 {
   char * VAR_11;
   mep_insn VAR_12;
          int VAR_13;


          for (VAR_13 = 0; VAR_13 < 64; VAR_13++)
             VAR_12.buffer[VAR_13] = '\0';
   if (VAR_6 == 16)
     {


       VAR_12.insn = FUNC_7 (VAR_1, "cpnop48",
        &VAR_12.fields, VAR_12.buffer,
        &VAR_11);
     }
   else if (VAR_6 == 32)
     {

       VAR_12.insn = FUNC_7 (VAR_1, "cpnop32",
        &VAR_12.fields, VAR_12.buffer,
        &VAR_11);
     }
   else if (VAR_6 == 48)
     {

       VAR_12.insn = FUNC_7 (VAR_1, "cpnop16",
        &VAR_12.fields, VAR_12.buffer,
        &VAR_11);
     }
   else

     FUNC_4 ("Core insn has invalid length!  Something is wrong!");

   if (!VAR_12.insn)
     {
       FUNC_3 ("%s", VAR_11);
       return;
     }


   FUNC_8 (VAR_12);
 }
    }
}
