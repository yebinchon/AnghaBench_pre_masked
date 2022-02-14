
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lapb_cb {int condition; } ;


 int VAR_0 ;
 int FUNC_0 (struct lapb_cb*) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_1)
{
 struct lapb_cb *VAR_2 = (struct lapb_cb *)VAR_1;

 if (VAR_2->condition & VAR_0) {
  VAR_2->condition &= ~VAR_0;
  FUNC_0(VAR_2);
 }
}
