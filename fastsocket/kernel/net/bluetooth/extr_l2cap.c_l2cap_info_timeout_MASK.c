
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_conn {scalar_t__ info_ident; int info_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct l2cap_conn*) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_1)
{
 struct l2cap_conn *VAR_2 = (void *) VAR_1;

 VAR_2->info_state |= VAR_0;
 VAR_2->info_ident = 0;

 FUNC_0(VAR_2);
}
