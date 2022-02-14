
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CGEN_INSN_INT ;
typedef int CGEN_INSN ;
typedef int CGEN_FIELDS ;
typedef int CGEN_CPU_DESC ;


 int FUNC_0 (int ,int const*,int *,int*) ;
 int * FUNC_1 (int ,int const*,int ,unsigned char*,int,int *,int ) ;

const CGEN_INSN *
FUNC_2 (CGEN_CPU_DESC VAR_0,
          const CGEN_INSN *VAR_1,
          CGEN_INSN_INT VAR_2,

          unsigned char *VAR_3,
          int VAR_4,
          int *VAR_5,
          CGEN_FIELDS *VAR_6)
{


  VAR_1 = FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_6, VAR_1 != ((void*)0));
  if (! VAR_1)
    return ((void*)0);

  FUNC_0 (VAR_0, VAR_1, VAR_6, VAR_5);
  return VAR_1;
}
