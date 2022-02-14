
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 char* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *,int) ;
 int VAR_1 ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5 (rtx VAR_2)
{
  int VAR_3 = FUNC_2 (VAR_2, 0);
  int VAR_4;

  VAR_1 = 0;

  FUNC_4 ("  insn = ins1;\n");

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
      if (VAR_4 > 0)
 {
   FUNC_4 ("  do { insn = NEXT_INSN (insn);\n");
   FUNC_4 ("       if (insn == 0) goto L%d; }\n",
    VAR_0);
   FUNC_4 ("  while (NOTE_P (insn)\n");
   FUNC_4 ("\t || (NONJUMP_INSN_P (insn)\n");
   FUNC_4 ("\t     && (GET_CODE (PATTERN (insn)) == USE\n");
   FUNC_4 ("\t\t || GET_CODE (PATTERN (insn)) == CLOBBER)));\n");

   FUNC_4 ("  if (LABEL_P (insn)\n      || BARRIER_P (insn))\n    goto L%d;\n",

    VAR_0);
 }

      FUNC_4 ("  pat = PATTERN (insn);\n");




      FUNC_3 (FUNC_1 (VAR_2, 0, VAR_4), ((void*)0), VAR_0);
    }




  if (FUNC_0 (VAR_2, 1) && FUNC_0 (VAR_2, 1)[0])
    FUNC_4 ("  if (! (%s)) goto L%d;\n",
     FUNC_0 (VAR_2, 1), VAR_0);







  FUNC_4 ("  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (%d, operands));\n", VAR_1);



  FUNC_4 ("  INSN_CODE (ins1) = %d;\n",
   VAR_0);


  if (VAR_3 > 1)
    FUNC_4 ("  delete_for_peephole (NEXT_INSN (ins1), insn);\n");



  FUNC_4 ("  return NEXT_INSN (insn);\n");

  FUNC_4 (" L%d:\n\n", VAR_0);
}
