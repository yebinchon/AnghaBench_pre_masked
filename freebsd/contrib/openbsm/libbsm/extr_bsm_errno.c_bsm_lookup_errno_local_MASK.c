
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsm_errno {int be_local_errno; } ;


 struct bsm_errno const* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static const struct bsm_errno *
FUNC_0(int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].be_local_errno == VAR_2)
   return (&VAR_0[VAR_3]);
 }
 return (((void*)0));
}
