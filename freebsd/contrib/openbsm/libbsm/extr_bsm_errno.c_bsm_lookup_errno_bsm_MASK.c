
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct bsm_errno {scalar_t__ be_bsm_errno; } ;


 struct bsm_errno const* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static const struct bsm_errno *
FUNC_0(u_char VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].be_bsm_errno == VAR_2)
   return (&VAR_0[VAR_3]);
 }
 return (((void*)0));
}
