
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ISCI_PHY {int led_fault; int index; int led_locate; int handle; } ;


 int FUNC_0 (int ,int,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1)
{
 struct ISCI_PHY *VAR_2 = VAR_0;


 VAR_2->led_fault = VAR_1;
 FUNC_0(VAR_2->handle, 1 << VAR_2->index,
  VAR_2->led_fault, VAR_2->led_locate, 0);
}
