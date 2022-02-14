
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct mips_arg_info {scalar_t__ stack_words; int reg_words; } ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int CUMULATIVE_ARGS ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int,struct mips_arg_info*) ;

__attribute__((used)) static int
FUNC_1 (CUMULATIVE_ARGS *VAR_1,
   enum machine_mode VAR_2, tree VAR_3, bool VAR_4)
{
  struct mips_arg_info VAR_5;

  FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4, &VAR_5);
  return VAR_5.stack_words > 0 ? VAR_5.reg_words * VAR_0 : 0;
}
