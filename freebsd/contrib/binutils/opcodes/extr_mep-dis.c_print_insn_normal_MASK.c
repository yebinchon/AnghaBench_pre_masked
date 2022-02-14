
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stream; int (* fprintf_func ) (int ,char*,int ) ;} ;
typedef TYPE_1__ disassemble_info ;
typedef int bfd_vma ;
typedef scalar_t__ CGEN_SYNTAX_CHAR_TYPE ;
typedef int CGEN_SYNTAX ;
typedef int CGEN_INSN ;
typedef int CGEN_FIELDS ;
typedef int CGEN_CPU_DESC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int * FUNC_3 (int const*) ;
 int FUNC_4 (scalar_t__ const) ;
 scalar_t__ FUNC_5 (scalar_t__ const) ;
 int FUNC_6 (scalar_t__ const) ;
 scalar_t__ FUNC_7 (scalar_t__ const) ;
 scalar_t__* FUNC_8 (int const*) ;
 int FUNC_9 (int ,int ,TYPE_1__*,int *,int ,int ,int) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_12 (CGEN_CPU_DESC VAR_0,
     void *VAR_1,
     const CGEN_INSN *VAR_2,
     CGEN_FIELDS *VAR_3,
     bfd_vma VAR_4,
     int VAR_5)
{
  const CGEN_SYNTAX *VAR_6 = FUNC_3 (VAR_2);
  disassemble_info *VAR_7 = (disassemble_info *) VAR_1;
  const CGEN_SYNTAX_CHAR_TYPE *VAR_8;

  FUNC_0 (VAR_0);

  for (VAR_8 = FUNC_8 (VAR_6); *VAR_8; ++VAR_8)
    {
      if (FUNC_7 (*VAR_8))
 {
   (*VAR_7->fprintf_func) (VAR_7->stream, "%s", FUNC_2 (VAR_2));
   continue;
 }
      if (FUNC_5 (*VAR_8))
 {
   (*VAR_7->fprintf_func) (VAR_7->stream, "%c", FUNC_4 (*VAR_8));
   continue;
 }


      FUNC_9 (VAR_0, FUNC_6 (*VAR_8), VAR_7,
     VAR_3, FUNC_1 (VAR_2), VAR_4, VAR_5);
    }
}
