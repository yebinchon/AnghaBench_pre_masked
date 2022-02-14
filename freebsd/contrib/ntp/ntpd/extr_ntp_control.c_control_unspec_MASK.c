
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct recvbuf {int dummy; } ;
struct peer {int dummy; } ;
struct TYPE_2__ {void* status; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct peer*) ;
 int FUNC_3 () ;
 struct peer* FUNC_4 (scalar_t__) ;
 void* FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_6(
 struct recvbuf *VAR_3,
 int VAR_4
 )
{
 struct peer *VAR_5;






 if (VAR_1) {
  VAR_5 = FUNC_4(VAR_1);
  if (((void*)0) == VAR_5) {
   FUNC_0(VAR_0);
   return;
  }
  VAR_2.status = FUNC_5(FUNC_2(VAR_5));
 } else
  VAR_2.status = FUNC_5(FUNC_3());
 FUNC_1(0);
}
