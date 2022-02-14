
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int (* pm_write ) (int ,int,int,int ) ;} ;
struct ata_channel {TYPE_2__* r_io; int dev; TYPE_1__ hw; } ;
struct TYPE_4__ {scalar_t__ res; } ;


 int FUNC_0 (struct ata_channel*,int,int ) ;
 int FUNC_1 (int ,int,int,int ) ;

int
FUNC_2(struct ata_channel *VAR_0, int VAR_1, int VAR_2, uint32_t VAR_3)
{

    if (VAR_0->hw.pm_write != ((void*)0))
 return (VAR_0->hw.pm_write(VAR_0->dev, VAR_1, VAR_2, VAR_3));
    if (VAR_0->r_io[VAR_2].res) {
 FUNC_0(VAR_0, VAR_2, VAR_3);
 return (0);
    }
    return (-1);
}
