
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {int mc_maxdelay; scalar_t__ mc_ifc_count; } ;


 int FUNC_0 (struct inet6_dev*) ;
 int FUNC_1 (struct inet6_dev*,int ) ;
 int FUNC_2 (struct inet6_dev*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct inet6_dev *VAR_1 = (struct inet6_dev *)VAR_0;

 FUNC_2(VAR_1);
 if (VAR_1->mc_ifc_count) {
  VAR_1->mc_ifc_count--;
  if (VAR_1->mc_ifc_count)
   FUNC_1(VAR_1, VAR_1->mc_maxdelay);
 }
 FUNC_0(VAR_1);
}
