
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct sock {TYPE_1__ sk_timer; } ;
struct dn_scp {scalar_t__ persist; scalar_t__ keepalive; scalar_t__ state; scalar_t__ stamp; int (* keepalive_fxn ) (struct sock*) ;scalar_t__ (* persist_fxn ) (struct sock*) ;} ;


 scalar_t__ VAR_0 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_4)
{
 struct sock *VAR_5 = (struct sock *)VAR_4;
 struct dn_scp *VAR_6 = FUNC_0(VAR_5);

 FUNC_4(VAR_5);
 FUNC_2(VAR_5);

 if (FUNC_5(VAR_5)) {
  VAR_5->sk_timer.expires = VAR_3 + VAR_1 / 10;
  FUNC_1(&VAR_5->sk_timer);
  goto out;
 }
 if (VAR_6->persist && VAR_6->persist_fxn) {
  if (VAR_6->persist <= VAR_2) {
   VAR_6->persist = 0;

   if (VAR_6->persist_fxn(VAR_5))
    goto out;
  } else {
   VAR_6->persist -= VAR_2;
  }
 }
 if (VAR_6->keepalive && VAR_6->keepalive_fxn && (VAR_6->state == VAR_0)) {
  if ((VAR_3 - VAR_6->stamp) >= VAR_6->keepalive)
   VAR_6->keepalive_fxn(VAR_5);
 }

 VAR_5->sk_timer.expires = VAR_3 + VAR_2;

 FUNC_1(&VAR_5->sk_timer);
out:
 FUNC_3(VAR_5);
 FUNC_6(VAR_5);
}
