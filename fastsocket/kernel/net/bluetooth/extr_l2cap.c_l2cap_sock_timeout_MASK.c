
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct TYPE_2__ {scalar_t__ sec_level; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,struct sock*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sock*,int) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_6)
{
 struct sock *VAR_7 = (struct sock *) VAR_6;
 int VAR_8;

 FUNC_0("sock %p state %d", VAR_7, VAR_7->sk_state);

 FUNC_2(VAR_7);

 if (VAR_7->sk_state == VAR_2 || VAR_7->sk_state == VAR_0)
  VAR_8 = VAR_4;
 else if (VAR_7->sk_state == VAR_1 &&
    FUNC_4(VAR_7)->sec_level != VAR_3)
  VAR_8 = VAR_4;
 else
  VAR_8 = VAR_5;

 FUNC_1(VAR_7, VAR_8);

 FUNC_3(VAR_7);

 FUNC_5(VAR_7);
 FUNC_6(VAR_7);
}
