
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spibus_ivar {int cs; int mode; } ;
typedef int device_t ;


 struct spibus_ivar* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, device_t VAR_1)
{
 struct spibus_ivar *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = 0;

 VAR_3 += FUNC_2(VAR_0, VAR_1);
 VAR_3 += FUNC_3(" at cs %d", VAR_2->cs);
 VAR_3 += FUNC_3(" mode %d", VAR_2->mode);
 VAR_3 += FUNC_1(VAR_0, VAR_1);

 return (VAR_3);
}
