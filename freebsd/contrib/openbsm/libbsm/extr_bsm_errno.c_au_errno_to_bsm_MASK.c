
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct bsm_errno {int be_bsm_errno; } ;


 int VAR_0 ;
 struct bsm_errno* FUNC_0 (int) ;

u_char
FUNC_1(int VAR_1)
{
 const struct bsm_errno *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  return (VAR_0);
 return (VAR_2->be_bsm_errno);
}
