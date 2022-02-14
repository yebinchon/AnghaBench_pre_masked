
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct es1968 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct es1968*,int ) ;
 int FUNC_1 (struct es1968*,int ,scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct es1968 *VAR_1, u16 VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 1000; VAR_3++) {
  if (FUNC_0(VAR_1, VAR_0) == VAR_2)
   return;
  FUNC_1(VAR_1, VAR_0, VAR_2);
 }
 FUNC_2("es1968: APU register set probably failed (Timeout)!\n");
}
