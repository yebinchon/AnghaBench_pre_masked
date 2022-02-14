
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sock {int dummy; } ;
struct TYPE_3__ {scalar_t__ retry_count; scalar_t__ remote_max_tx; int conn; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,struct sock*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_1)
{
 struct sock *VAR_2 = (void *) VAR_1;
 u16 VAR_3;

 FUNC_1(VAR_2);
 if (FUNC_3(VAR_2)->retry_count >= FUNC_3(VAR_2)->remote_max_tx) {
  FUNC_4(FUNC_3(VAR_2)->conn, VAR_2);
  return;
 }

 FUNC_3(VAR_2)->retry_count++;
 FUNC_0();

 VAR_3 = VAR_0;
 FUNC_5(FUNC_3(VAR_2), VAR_3);
 FUNC_2(VAR_2);
}
