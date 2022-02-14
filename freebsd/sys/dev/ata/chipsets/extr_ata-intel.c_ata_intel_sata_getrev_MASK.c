
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ata_channel {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ata_channel*,int,int ,int*) ;
 struct ata_channel* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, int VAR_2)
{
 struct ata_channel *VAR_3 = FUNC_1(VAR_1);
 uint32_t VAR_4;

 if (FUNC_0(VAR_3, VAR_2, VAR_0, &VAR_4) == 0)
  return ((VAR_4 & 0x0f0) >> 4);
 return (0xff);
}
