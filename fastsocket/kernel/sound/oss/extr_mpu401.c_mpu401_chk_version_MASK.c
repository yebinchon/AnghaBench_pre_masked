
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu_config {int version; int revision; } ;


 int FUNC_0 (int,int,int ) ;

__attribute__((used)) static void FUNC_1(int VAR_0, struct mpu_config *VAR_1)
{
 int VAR_2;

 VAR_1->version = VAR_1->revision = 0;

 VAR_2 = FUNC_0(VAR_0, 0xAC, 0);
 if (VAR_2 < 0)
  return;
 if ((VAR_2 & 0xf0) > 0x20)
  return;
 VAR_1->version = VAR_2;

 if ((VAR_2 = FUNC_0(VAR_0, 0xAD, 0)) < 0) {
  VAR_1->version = 0;
  return;
 }
 VAR_1->revision = VAR_2;
}
