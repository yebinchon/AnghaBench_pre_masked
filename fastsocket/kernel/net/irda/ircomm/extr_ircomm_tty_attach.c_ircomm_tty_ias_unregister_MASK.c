
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ircomm_tty_cb {int * ckey; int * obj; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ircomm_tty_cb *VAR_0)
{
 if (VAR_0->obj) {
  FUNC_0(VAR_0->obj);
  VAR_0->obj = ((void*)0);
 }
}
