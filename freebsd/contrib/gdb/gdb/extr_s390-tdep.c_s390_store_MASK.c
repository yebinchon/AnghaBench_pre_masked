
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_prologue_data {int dummy; } ;
struct prologue_value {int dummy; } ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct prologue_value*,int ,struct s390_prologue_data*,struct prologue_value**) ;

__attribute__((used)) static void
FUNC_1 (struct prologue_value *VAR_1,
            CORE_ADDR VAR_2,
            struct prologue_value *VAR_3,
     struct s390_prologue_data *VAR_4)
{
  struct prologue_value *VAR_5;


  if (FUNC_0 (VAR_1, VAR_2, VAR_4, &VAR_5) == VAR_0)
    {
      *VAR_5 = *VAR_3;
      return;
    }
}
