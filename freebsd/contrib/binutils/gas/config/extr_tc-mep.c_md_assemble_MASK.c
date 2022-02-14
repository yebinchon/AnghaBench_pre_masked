
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* buffer; int fields; void* insn; } ;
typedef TYPE_1__ mep_insn ;
struct TYPE_8__ {int * isas; } ;
typedef int CGEN_BITSET ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *) ;
 TYPE_4__* VAR_5 ;
 int FUNC_8 (void*,char*,int ,int,int *) ;
 int FUNC_9 () ;
 void* FUNC_10 (TYPE_4__*,char*,int *,char*,void*) ;
 void* FUNC_11 (TYPE_4__*,char*,int *,char*,char**) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_1__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

void
FUNC_15 (char * VAR_9)
{
  static CGEN_BITSET* VAR_10 = ((void*)0);
  char * VAR_11;


  FUNC_9 ();
  if (VAR_10 == ((void*)0))
    VAR_10 = FUNC_6 (& VAR_3);
  else
    {
      FUNC_5 (VAR_10);
      FUNC_7 (VAR_10, & VAR_3, VAR_10);
    }
  VAR_5->isas = VAR_10;

  if (VAR_6 == VAR_4)
    {


      int VAR_12 = 0;
      mep_insn VAR_13;
      int VAR_14;



      if (! VAR_0)
         for (VAR_14=0; VAR_14 < VAR_1; VAR_14++)
            VAR_13.buffer[VAR_14]='\0';


      FUNC_7 (VAR_10, & VAR_2, VAR_10);


      VAR_13.insn = FUNC_11 (VAR_5, VAR_9,
       &VAR_13.fields, VAR_13.buffer,
       &VAR_11);
      if (!VAR_13.insn)
 {
   FUNC_3 ("%s", VAR_11);
   return;
 }
      FUNC_12 (&VAR_13);


      VAR_12 = FUNC_1 (VAR_13.insn);

      if (!VAR_12)
 {
   VAR_13.insn = FUNC_10 (VAR_5, VAR_9,
        &VAR_13.fields, VAR_13.buffer,
        VAR_13.insn);
   VAR_12 = FUNC_1 (VAR_13.insn);
   FUNC_12 (&VAR_13);
 }

      if (VAR_8)
 {


   if (!VAR_12)
     {
       FUNC_4("A core insn cannot be preceeded by a +.\n");
       return;
     }

   if (VAR_7 > 0)
     {

       FUNC_14 (VAR_13);
     }
   else
     {



       FUNC_3 (FUNC_2("Invalid use of parallelization operator."));
       return;
     }
 }
      else
 {

   if (VAR_7 > 0)
     {




       FUNC_13 ();
       VAR_7 = 0;

     }
   FUNC_14 (VAR_13);
 }

      VAR_8 = 0;
    }
  else
    {



      mep_insn VAR_15;



      if (VAR_8)
 {
   FUNC_3 (FUNC_2("Leading plus sign not allowed in core mode"));
   return;
 }

      VAR_15.insn = FUNC_11
 (VAR_5, VAR_9, & VAR_15.fields, VAR_15.buffer, & VAR_11);

      if (!VAR_15.insn)
 {
   FUNC_3 ("%s", VAR_11);
   return;
 }
      FUNC_8 (VAR_15.insn, VAR_15.buffer,
       FUNC_0 (& VAR_15.fields), 1, ((void*)0));
      FUNC_12 (&VAR_15);
    }
}
