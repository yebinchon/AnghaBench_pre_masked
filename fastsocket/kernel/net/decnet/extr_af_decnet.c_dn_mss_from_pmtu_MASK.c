
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct dn_dev* dn_ptr; } ;
struct dn_dev {scalar_t__ use_long; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;

unsigned FUNC_1(struct net_device *VAR_1, int VAR_2)
{
 unsigned VAR_3 = 230 - VAR_0;
 if (VAR_1) {
  struct dn_dev *VAR_4 = VAR_1->dn_ptr;
  VAR_2 -= FUNC_0(VAR_1);
  if (VAR_4->use_long)
   VAR_2 -= 21;
  else
   VAR_2 -= 6;
  VAR_2 -= VAR_0;
 } else {



  VAR_2 -= (21 + VAR_0 + 16);
 }
 if (VAR_2 > VAR_3)
  VAR_3 = VAR_2;
 return VAR_3;
}
