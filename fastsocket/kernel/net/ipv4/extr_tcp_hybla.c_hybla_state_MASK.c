
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sock {int dummy; } ;
struct hybla {int hybla_en; } ;


 scalar_t__ VAR_0 ;
 struct hybla* FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_1, u8 VAR_2)
{
 struct hybla *VAR_3 = FUNC_0(VAR_1);
 VAR_3->hybla_en = (VAR_2 == VAR_0);
}
