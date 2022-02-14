
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
struct ata_channel {int flags; TYPE_1__ hw; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 struct ata_channel* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3)
{
    struct ata_channel *VAR_4 = FUNC_1(VAR_3);

    if (FUNC_0(VAR_3))
 return VAR_1;

    VAR_4->hw.status = VAR_2;
    VAR_4->flags |= VAR_0;
    return 0;
}
