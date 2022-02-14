
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__* insn; int buffer; int fields; } ;
typedef TYPE_2__ mep_insn ;
struct TYPE_9__ {TYPE_1__* base; } ;
struct TYPE_7__ {int num; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ,char*,int *,int ,char**) ;
 int FUNC_8 (TYPE_2__) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static void
FUNC_9 (void)
{
  int VAR_7, VAR_8, VAR_9, VAR_10;




  if ( VAR_5 > 2 )
    FUNC_4("Internally paralled cores and coprocessors not supported.");




  if (VAR_5 == 0)
    return;


  VAR_7 = FUNC_2 (VAR_6[0].insn);
  VAR_9 = FUNC_0 (& VAR_6[0].fields);

  if (VAR_5 == 2)
    {

      VAR_8 = FUNC_2 (VAR_6[1].insn);
      VAR_10 = FUNC_0 (& VAR_6[1].fields);

      if ((VAR_7 && !VAR_8)
          || (VAR_8 && !VAR_7))
 {


   if (VAR_9 + VAR_10 == 32)
     return;
          else
     FUNC_3 ("core and copro insn lengths must total 32 bits.");
 }
      else
        FUNC_3 ("vliw group must consist of 1 core and 1 copro insn.");
    }
  else
    {
      if (VAR_9 > 32)
 FUNC_4 ("Cannot use 48- or 64-bit insns with a 32 bit datapath.");

      if (VAR_9 == 32)
 return;



      if (FUNC_1 (VAR_6[0].insn,
                                VAR_0))
 FUNC_4 ("No valid nop.");





      if (VAR_7)
 {
          char *VAR_11;
          mep_insn VAR_12;




             VAR_12.insn = FUNC_7 (VAR_4, "nop",
                                                 &VAR_12.fields, VAR_12.buffer,
                                                 &VAR_11);
             if (!VAR_12.insn)
               {
                 FUNC_3 ("%s", VAR_11);
                 return;
               }
              VAR_6[1] = VAR_6[0];
              VAR_6[0] = VAR_12;
              VAR_5++;
              FUNC_6 (0);
              FUNC_5 (1);
 }
      else
 {
          char * VAR_13;
          mep_insn VAR_14;
   int VAR_15 = VAR_6[0].insn->base->num;


   if (VAR_15 == VAR_3
       || VAR_15 == VAR_1
       || VAR_15 == VAR_2)
     return;



   VAR_14.insn = FUNC_7 (VAR_4, "cpnop16",
           &VAR_14.fields, VAR_14.buffer,
           &VAR_13);
          if (!VAR_14.insn)
            {
              FUNC_3 ("%s", VAR_13);
              return;
            }


          FUNC_8 (VAR_14);
 }
    }
}
