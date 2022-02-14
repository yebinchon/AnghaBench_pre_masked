
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct westwood {int rtt; } ;
struct sock {int dummy; } ;
typedef scalar_t__ s32 ;


 struct westwood* FUNC_0 (struct sock*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0, u32 VAR_1, s32 VAR_2)
{
 struct westwood *VAR_3 = FUNC_0(VAR_0);

 if (VAR_2 > 0)
  VAR_3->rtt = FUNC_1(VAR_2);
}
