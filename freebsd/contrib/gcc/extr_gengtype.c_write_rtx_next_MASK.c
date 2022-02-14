
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int outf_p ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int* VAR_1 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  outf_p VAR_2 = FUNC_0 (((void*)0));
  int VAR_3;

  FUNC_1 (VAR_2, "\n/* Used to implement the RTX_NEXT macro.  */\n");
  FUNC_1 (VAR_2, "const unsigned char rtx_next[NUM_RTX_CODE] = {\n");
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    if (VAR_1[VAR_3] == -1)
      FUNC_1 (VAR_2, "  0,\n");
    else
      FUNC_1 (VAR_2,
        "  RTX_HDR_SIZE + %d * sizeof (rtunion),\n",
        VAR_1[VAR_3]);
  FUNC_1 (VAR_2, "};\n");
}
