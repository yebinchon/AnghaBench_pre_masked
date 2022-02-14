
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_extended_frozen {int dummy; } ;
struct net_device {scalar_t__ reg_state; char* ifalias; int padded; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 struct net_device_extended_frozen* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_3(VAR_1);
 struct net_device_extended_frozen *VAR_3;

 FUNC_0(VAR_2->reg_state != VAR_0);

 FUNC_1(VAR_2->ifalias);
 VAR_3 = FUNC_2(VAR_2);
 FUNC_1((char *)VAR_3 - VAR_2->padded);
}
