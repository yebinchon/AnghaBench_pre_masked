
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct pccard_ivar {struct resource_list resources; } ;
typedef int device_t ;


 struct pccard_ivar* FUNC_0 (int ) ;
 int FUNC_1 (struct resource_list*,int,int) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, device_t VAR_1, int VAR_2, int VAR_3)
{
 struct pccard_ivar *VAR_4 = FUNC_0(VAR_1);
 struct resource_list *VAR_5 = &VAR_4->resources;
 FUNC_1(VAR_5, VAR_2, VAR_3);
}
