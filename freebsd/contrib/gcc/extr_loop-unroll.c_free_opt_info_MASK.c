
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opt_info {scalar_t__ insns_with_var_to_expand; scalar_t__ insns_to_split; } ;


 int FUNC_0 (struct opt_info*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3 (struct opt_info *VAR_1)
{
  if (VAR_1->insns_to_split)
    FUNC_1 (VAR_1->insns_to_split);
  if (VAR_1->insns_with_var_to_expand)
    {
      FUNC_2 (VAR_1->insns_with_var_to_expand,
                     VAR_0, ((void*)0));
      FUNC_1 (VAR_1->insns_with_var_to_expand);
    }
  FUNC_0 (VAR_1);
}
