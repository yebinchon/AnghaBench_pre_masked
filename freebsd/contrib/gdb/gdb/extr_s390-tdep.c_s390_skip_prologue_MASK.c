
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_prologue_data {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__,struct s390_prologue_data*) ;

__attribute__((used)) static CORE_ADDR
FUNC_1 (CORE_ADDR VAR_1)
{
  struct s390_prologue_data VAR_2;
  CORE_ADDR VAR_3;
  VAR_3 = FUNC_0 (VAR_0, VAR_1, (CORE_ADDR)-1, &VAR_2);
  return VAR_3 ? VAR_3 : VAR_1;
}
