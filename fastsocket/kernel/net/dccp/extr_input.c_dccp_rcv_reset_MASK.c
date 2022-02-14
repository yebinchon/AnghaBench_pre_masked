
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sock {scalar_t__ sk_err; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int dccph_reset_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*,struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sock*,int ,int ) ;
 int FUNC_4 (struct sock*,int ,int ) ;
 int FUNC_5 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 u8 VAR_6 = FUNC_2(FUNC_1(VAR_5)->dccph_reset_code);

 VAR_4->sk_err = VAR_6;


 FUNC_0(VAR_4, VAR_5);

 if (VAR_6 && !FUNC_5(VAR_4, VAR_2))
  FUNC_4(VAR_4, VAR_3, VAR_1);
 FUNC_3(VAR_4, VAR_0, 0);
}
