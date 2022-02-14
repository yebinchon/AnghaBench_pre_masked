
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct reg {scalar_t__ r_rsp; int r_r9; int r_r8; int r_rcx; int r_rdx; int r_rsi; int r_rdi; } ;
struct TYPE_2__ {scalar_t__ p_model; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (uintptr_t*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static uint64_t
FUNC_4(struct reg *VAR_4, int VAR_5, int VAR_6)
{
 uint64_t VAR_7 = 0;
 int VAR_8 = VAR_5 ? 1 : 0;


 if (VAR_3->p_model == VAR_2) {
  uintptr_t *VAR_9;





  if (VAR_6 < 6)
   switch (VAR_6) {
   case 0:
    return (VAR_4->r_rdi);
   case 1:
    return (VAR_4->r_rsi);
   case 2:
    return (VAR_4->r_rdx);
   case 3:
    return (VAR_4->r_rcx);
   case 4:
    return (VAR_4->r_r8);
   case 5:
    return (VAR_4->r_r9);
   }

  VAR_9 = (uintptr_t *)VAR_4->r_rsp;
  FUNC_1(VAR_1);
  VAR_7 = FUNC_2(&VAR_9[VAR_6 - 6 + VAR_8]);
  FUNC_0(VAR_1 | VAR_0);
 } else {

  uint32_t *VAR_10 = (uint32_t *)VAR_4->r_rsp;
  FUNC_1(VAR_1);
  VAR_7 = FUNC_3(&VAR_10[VAR_6 + VAR_8]);
  FUNC_0(VAR_1 | VAR_0);

 }


 return (VAR_7);
}
