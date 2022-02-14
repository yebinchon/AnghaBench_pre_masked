
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * static_chain_decl; } ;
typedef int FILE ;





 int FUNC_0 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,char*,...) ;
 int FUNC_2 (int *,char*) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,char*,char*,...) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 char** VAR_9 ;
 int FUNC_7 (int ,char*) ;

void
FUNC_8 (FILE *VAR_10, int VAR_11)
{
  char VAR_12[100];

  switch (VAR_0)
    {
    default:
      FUNC_6 ();

    case 128:
      if (!VAR_4)
 {
   FUNC_7 (0, "no profiling of 64-bit code for this ABI");
   return;
 }
      FUNC_0 (VAR_12, "LP", VAR_11);
      FUNC_3 (VAR_10, "\tmflr %s\n", VAR_9[0]);
      if (VAR_1)
 {
   FUNC_1 (VAR_10, "\t{st|stw} %s,4(%s)\n",
         VAR_9[0], VAR_9[1]);
 }
      else if (VAR_6 && VAR_8)
 {
   FUNC_1 (VAR_10, "\tbcl 20,31,1f\n1:\n\t{st|stw} %s,4(%s)\n",
         VAR_9[0], VAR_9[1]);
   FUNC_1 (VAR_10, "\tmflr %s\n", VAR_9[12]);
   FUNC_1 (VAR_10, "\t{cau|addis} %s,%s,",
         VAR_9[12], VAR_9[12]);
   FUNC_2 (VAR_10, VAR_12);
   FUNC_1 (VAR_10, "-1b@ha\n\t{cal|la} %s,", VAR_9[0]);
   FUNC_2 (VAR_10, VAR_12);
   FUNC_1 (VAR_10, "-1b@l(%s)\n", VAR_9[12]);
 }
      else if (VAR_8 == 1)
 {
   FUNC_4 ("\tbl _GLOBAL_OFFSET_TABLE_@local-4\n", VAR_10);
   FUNC_1 (VAR_10, "\t{st|stw} %s,4(%s)\n",
         VAR_9[0], VAR_9[1]);
   FUNC_1 (VAR_10, "\tmflr %s\n", VAR_9[12]);
   FUNC_1 (VAR_10, "\t{l|lwz} %s,", VAR_9[0]);
   FUNC_2 (VAR_10, VAR_12);
   FUNC_1 (VAR_10, "@got(%s)\n", VAR_9[12]);
 }
      else if (VAR_8 > 1)
 {
   FUNC_1 (VAR_10, "\t{st|stw} %s,4(%s)\n",
         VAR_9[0], VAR_9[1]);

   FUNC_4 ("\tbcl 20,31,1f\n\t.long ", VAR_10);
   FUNC_2 (VAR_10, VAR_12);
   FUNC_4 ("-.\n1:", VAR_10);
   FUNC_1 (VAR_10, "\tmflr %s\n", VAR_9[11]);
   FUNC_1 (VAR_10, "\t{l|lwz} %s,0(%s)\n",
         VAR_9[0], VAR_9[11]);
   FUNC_1 (VAR_10, "\t{cax|add} %s,%s,%s\n",
         VAR_9[0], VAR_9[0], VAR_9[11]);
 }
      else
 {
   FUNC_1 (VAR_10, "\t{liu|lis} %s,", VAR_9[12]);
   FUNC_2 (VAR_10, VAR_12);
   FUNC_4 ("@ha\n", VAR_10);
   FUNC_1 (VAR_10, "\t{st|stw} %s,4(%s)\n",
         VAR_9[0], VAR_9[1]);
   FUNC_1 (VAR_10, "\t{cal|la} %s,", VAR_9[0]);
   FUNC_2 (VAR_10, VAR_12);
   FUNC_1 (VAR_10, "@l(%s)\n", VAR_9[12]);
 }


      FUNC_3 (VAR_10, "\tbl %s%s\n",
        VAR_2, VAR_8 ? "@plt" : "");
      break;

    case 130:
    case 129:
      if (!VAR_5)
 {

 }
      else
 {
   FUNC_5 (!VAR_4);

   FUNC_1 (VAR_10, "\tmflr %s\n", VAR_9[0]);
   FUNC_1 (VAR_10, "\tstd %s,16(%s)\n", VAR_9[0], VAR_9[1]);

   if (VAR_7->static_chain_decl != ((void*)0))
     {
       FUNC_1 (VAR_10, "\tstd %s,24(%s)\n",
      VAR_9[VAR_3], VAR_9[1]);
       FUNC_3 (VAR_10, "\tbl %s\n", VAR_2);
       FUNC_1 (VAR_10, "\tld %s,24(%s)\n",
      VAR_9[VAR_3], VAR_9[1]);
     }
   else
     FUNC_3 (VAR_10, "\tbl %s\n", VAR_2);
 }
      break;
    }
}
