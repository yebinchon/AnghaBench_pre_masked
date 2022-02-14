
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparc_arch {scalar_t__ default_arch_size; int arch_type; int opcode_arch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sparc_arch* FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 ()
{
  struct sparc_arch *VAR_7 = FUNC_2 (VAR_1);

  if (VAR_7 == ((void*)0)
      || VAR_7->default_arch_size == 0)
    FUNC_1 (FUNC_0("Invalid default architecture, broken assembler."));

  VAR_5 = FUNC_3 (VAR_7->opcode_arch);
  if (VAR_5 == VAR_0)
    FUNC_1 (FUNC_0("Bad opcode table, broken assembler."));
  VAR_2 = VAR_6 = VAR_7->default_arch_size;
  VAR_4 = 1;
  VAR_3 = VAR_7->arch_type;
}
