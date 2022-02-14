
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_channel {TYPE_1__* r_io; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ res; } ;


 int FUNC_0 (struct ata_channel*,size_t) ;
 size_t VAR_0 ;
 struct ata_channel* FUNC_1 (int ) ;

int
FUNC_2(device_t VAR_1, int VAR_2)
{
 struct ata_channel *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3->r_io[VAR_0].res)
  return ((FUNC_0(VAR_3, VAR_0) & 0x0f0) >> 4);
 return (0xff);
}
