
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es1968 {int bobclient; int bob_freq; } ;


 int FUNC_0 (struct es1968*) ;
 int FUNC_1 (struct es1968*) ;

__attribute__((used)) static void FUNC_2(struct es1968 *VAR_0, int VAR_1)
{
 VAR_0->bobclient++;
 if (VAR_0->bobclient == 1) {
  VAR_0->bob_freq = VAR_1;
  FUNC_0(VAR_0);
 } else if (VAR_0->bob_freq < VAR_1) {
  FUNC_1(VAR_0);
  VAR_0->bob_freq = VAR_1;
  FUNC_0(VAR_0);
 }
}
