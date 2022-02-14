
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct veno {scalar_t__ basertt; int cntrtt; int minrtt; } ;
struct sock {int dummy; } ;
typedef scalar_t__ s32 ;


 struct veno* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0, u32 VAR_1, s32 VAR_2)
{
 struct veno *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4;

 if (VAR_2 < 0)
  return;


 VAR_4 = VAR_2 + 1;


 if (VAR_4 < VAR_3->basertt)
  VAR_3->basertt = VAR_4;




 VAR_3->minrtt = FUNC_1(VAR_3->minrtt, VAR_4);
 VAR_3->cntrtt++;
}
