
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct htcp {int pkts_acked; int last_cong; int beta; int alpha; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct htcp* FUNC_0 (struct sock*) ;
 int VAR_2 ;
 int FUNC_1 (struct htcp*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_3)
{
 struct htcp *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_4, 0, sizeof(struct htcp));
 VAR_4->alpha = VAR_0;
 VAR_4->beta = VAR_1;
 VAR_4->pkts_acked = 1;
 VAR_4->last_cong = VAR_2;
}
