
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internal_syment {int n_value; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct internal_syment*,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_1 (int VAR_0)
{
  struct internal_syment VAR_1[1];

  FUNC_0 (VAR_1, VAR_0);
  return VAR_1->n_value;
}
