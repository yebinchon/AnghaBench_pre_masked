
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct validate_replace_src_data {int insn; int to; int from; } ;
typedef int rtx ;


 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1 (rtx *VAR_0, void *VAR_1)
{
  struct validate_replace_src_data *VAR_2
    = (struct validate_replace_src_data *) VAR_1;

  FUNC_0 (VAR_0, VAR_2->from, VAR_2->to, VAR_2->insn);
}
