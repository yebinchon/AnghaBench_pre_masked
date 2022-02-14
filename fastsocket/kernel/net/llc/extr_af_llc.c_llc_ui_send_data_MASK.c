
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_sock {scalar_t__ p_flag; scalar_t__ remote_busy_flag; int state; } ;


 int FUNC_0 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct llc_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,long) ;
 long FUNC_4 (struct sock*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct sock* VAR_0, struct sk_buff *VAR_1, int VAR_2)
{
 struct llc_sock* VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = 0;

 if (FUNC_5(FUNC_1(VAR_3->state) ||
       VAR_3->remote_busy_flag ||
       VAR_3->p_flag)) {
  long VAR_5 = FUNC_4(VAR_0, VAR_2);

  VAR_4 = FUNC_3(VAR_0, VAR_5);
 }
 if (FUNC_5(!VAR_4))
  VAR_4 = FUNC_0(VAR_0, VAR_1);
 return VAR_4;
}
