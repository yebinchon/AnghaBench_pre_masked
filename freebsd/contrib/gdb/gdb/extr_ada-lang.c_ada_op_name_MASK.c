
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum exp_opcode { ____Placeholder_exp_opcode } exp_opcode ;
struct TYPE_2__ {int op; char const* demangled; int * mangled; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static const char *
FUNC_1 (enum exp_opcode VAR_1)
{
  int VAR_2;

  for (VAR_2 = 0; VAR_0[VAR_2].mangled != ((void*)0); VAR_2 += 1)
    {
      if (VAR_0[VAR_2].op == VAR_1)
 return VAR_0[VAR_2].demangled;
    }
  FUNC_0 ("Could not find operator name for opcode");
}
