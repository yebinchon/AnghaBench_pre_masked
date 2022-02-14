
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dn_scp {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_1 ;
 int FUNC_1 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_2)
{
 struct dn_scp *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->state == VAR_0)
  FUNC_1(VAR_2, VAR_1);

 return 0;
}
