
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_channel {scalar_t__ unit; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 struct ata_channel* FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, int VAR_1)
{
 device_t VAR_2 = FUNC_0(VAR_0);
 struct ata_channel *VAR_3 = FUNC_1(VAR_0);

 if (VAR_3->unit == 0) {
  if (FUNC_2(VAR_2, 0xa0 + VAR_1, 1) & 0x10)
   return (2);
  else
   return (1);
 }
 return (0);
}
