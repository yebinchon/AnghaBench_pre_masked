
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sock {int dummy; } ;
struct illinois {scalar_t__ rtt_above; scalar_t__ rtt_low; int beta; int alpha; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct illinois* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_3, u8 VAR_4)
{
 struct illinois *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4 == VAR_2) {
  VAR_5->alpha = VAR_0;
  VAR_5->beta = VAR_1;
  VAR_5->rtt_low = 0;
  VAR_5->rtt_above = 0;
  FUNC_1(VAR_3);
 }
}
