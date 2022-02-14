
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lapb_cb {unsigned short va; int mode; unsigned short vs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct lapb_cb *VAR_3, unsigned short VAR_4)
{
 unsigned short VAR_5 = VAR_3->va;
 int VAR_6;

 VAR_6 = (VAR_3->mode & VAR_1) ? VAR_0 : VAR_2;

 while (VAR_5 != VAR_3->vs) {
  if (VAR_4 == VAR_5)
   return 1;
  VAR_5 = (VAR_5 + 1) % VAR_6;
 }

 return VAR_4 == VAR_3->vs;
}
