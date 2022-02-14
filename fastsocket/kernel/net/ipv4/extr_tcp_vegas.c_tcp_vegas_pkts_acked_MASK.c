
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vegas {scalar_t__ baseRTT; int cntRTT; int minRTT; } ;
struct sock {int dummy; } ;
typedef scalar_t__ s32 ;


 struct vegas* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct sock *VAR_0, u32 VAR_1, s32 VAR_2)
{
 struct vegas *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4;

 if (VAR_2 < 0)
  return;


 VAR_4 = VAR_2 + 1;


 if (VAR_4 < VAR_3->baseRTT)
  VAR_3->baseRTT = VAR_4;




 VAR_3->minRTT = FUNC_1(VAR_3->minRTT, VAR_4);
 VAR_3->cntRTT++;
}
