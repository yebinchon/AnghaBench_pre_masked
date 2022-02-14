
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sock {int dummy; } ;
struct TYPE_3__ {int retry_count; int conn_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_2)
{
 struct sock *VAR_3 = (void *) VAR_2;
 u16 VAR_4;

 FUNC_1(VAR_3);
 FUNC_3(VAR_3)->retry_count = 1;
 FUNC_0();

 FUNC_3(VAR_3)->conn_state |= VAR_0;

 VAR_4 = VAR_1;
 FUNC_4(FUNC_3(VAR_3), VAR_4);
 FUNC_2(VAR_3);
}
