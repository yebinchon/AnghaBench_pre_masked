
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lapb_cb {unsigned short vs; unsigned short va; scalar_t__ n2count; } ;


 int FUNC_0 (struct lapb_cb*,unsigned short) ;
 int FUNC_1 (struct lapb_cb*) ;
 int FUNC_2 (struct lapb_cb*) ;

void FUNC_3(struct lapb_cb *VAR_0, unsigned short VAR_1)
{
 if (VAR_0->vs == VAR_1) {
  FUNC_0(VAR_0, VAR_1);
  FUNC_2(VAR_0);
  VAR_0->n2count = 0;
 } else if (VAR_0->va != VAR_1) {
  FUNC_0(VAR_0, VAR_1);
  FUNC_1(VAR_0);
 }
}
