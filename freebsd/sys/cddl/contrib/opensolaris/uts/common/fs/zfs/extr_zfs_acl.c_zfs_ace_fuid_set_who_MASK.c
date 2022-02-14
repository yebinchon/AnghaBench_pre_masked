
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ z_flags; } ;
struct TYPE_4__ {int z_fuid; TYPE_1__ z_hdr; } ;
typedef TYPE_2__ zfs_ace_t ;
typedef int uint64_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_0(void *VAR_4, uint64_t VAR_5)
{
 zfs_ace_t *VAR_6 = VAR_4;

 uint16_t VAR_7 = VAR_6->z_hdr.z_flags & VAR_2;

 if (VAR_7 == VAR_1 || VAR_7 == VAR_3 ||
     VAR_7 == VAR_0)
  return;
 VAR_6->z_fuid = VAR_5;
}
