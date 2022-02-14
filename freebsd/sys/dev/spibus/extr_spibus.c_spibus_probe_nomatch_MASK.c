
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spibus_ivar {int mode; int cs; } ;
typedef int device_t ;


 struct spibus_ivar* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, device_t VAR_1)
{
 struct spibus_ivar *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_0, "<unknown card> at cs %d mode %d\n", VAR_2->cs,
     VAR_2->mode);
 return;
}
