
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbus_ivar {scalar_t__ addr; int rl; } ;
typedef int device_t ;


 struct iicbus_ivar* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int *,char*,int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, device_t VAR_2)
{
 struct iicbus_ivar *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = 0;

 VAR_4 += FUNC_2(VAR_1, VAR_2);
 if (VAR_3->addr != 0)
  VAR_4 += FUNC_3(" at addr %#x", VAR_3->addr);
 FUNC_4(&VAR_3->rl, "irq", VAR_0, "%jd");
 VAR_4 += FUNC_1(VAR_1, VAR_2);

 return (VAR_4);
}
