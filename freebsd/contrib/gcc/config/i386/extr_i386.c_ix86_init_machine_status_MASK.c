
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine_function {int use_fast_prologue_epilogue_nregs; scalar_t__ tls_descriptor_call_expanded_p; } ;


 struct machine_function* FUNC_0 (int) ;

__attribute__((used)) static struct machine_function *
FUNC_1 (void)
{
  struct machine_function *VAR_0;

  VAR_0 = FUNC_0 (sizeof (struct machine_function));
  VAR_0->use_fast_prologue_epilogue_nregs = -1;
  VAR_0->tls_descriptor_call_expanded_p = 0;

  return VAR_0;
}
