
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct hybla {int rho_3ls; int rho; int rho2_7ls; int rho2; } ;
struct TYPE_2__ {int srtt; } ;


 struct hybla* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_4 (struct sock *VAR_2)
{
 struct hybla *VAR_3 = FUNC_0(VAR_2);

 VAR_3->rho_3ls = FUNC_1(VAR_1, FUNC_3(VAR_2)->srtt / FUNC_2(VAR_0), 8);
 VAR_3->rho = VAR_3->rho_3ls >> 3;
 VAR_3->rho2_7ls = (VAR_3->rho_3ls * VAR_3->rho_3ls) << 1;
 VAR_3->rho2 = VAR_3->rho2_7ls >>7;
}
