
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct held_lock {int acquire_ip; } ;


 int FUNC_0 (struct held_lock*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct held_lock *VAR_0)
{
 FUNC_2(FUNC_0(VAR_0));
 FUNC_3(", at: ");
 FUNC_1(VAR_0->acquire_ip);
}
