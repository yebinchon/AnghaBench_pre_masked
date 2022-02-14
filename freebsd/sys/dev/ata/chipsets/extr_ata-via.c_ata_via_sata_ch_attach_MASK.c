
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pm_write; int pm_read; int status; } ;
struct ata_channel {scalar_t__ unit; int flags; TYPE_1__ hw; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ata_channel*,int,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ata_channel* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_7)
{
 struct ata_channel *VAR_8 = FUNC_2(VAR_7);

 if (FUNC_0(VAR_7))
  return VAR_3;
 if (VAR_8->unit == 0) {
  VAR_8->hw.status = VAR_6;
  VAR_8->hw.pm_read = VAR_4;
  VAR_8->hw.pm_write = VAR_5;
  VAR_8->flags |= VAR_0;
  VAR_8->flags |= VAR_1;
  FUNC_1(VAR_8, 0, VAR_2, 0xffffffff);
  FUNC_1(VAR_8, 1, VAR_2, 0xffffffff);
 }
 return (0);
}
