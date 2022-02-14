
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
struct g_raid_subdisk {scalar_t__ sd_offset; TYPE_2__* sd_disk; } ;
typedef scalar_t__ off_t ;
struct TYPE_6__ {scalar_t__ mediaoffset; int * dumper; } ;
struct TYPE_4__ {TYPE_3__ di; } ;
struct TYPE_5__ {TYPE_1__ d_kd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,void*,int ,scalar_t__,size_t) ;

int
FUNC_1(struct g_raid_subdisk *VAR_2,
    void *VAR_3, vm_offset_t VAR_4, off_t VAR_5, size_t VAR_6)
{

 if (VAR_2->sd_disk == ((void*)0))
  return (VAR_0);
 if (VAR_2->sd_disk->d_kd.di.dumper == ((void*)0))
  return (VAR_1);
 return (FUNC_0(&VAR_2->sd_disk->d_kd.di,
     VAR_3, VAR_4,
     VAR_2->sd_disk->d_kd.di.mediaoffset + VAR_2->sd_offset + VAR_5,
     VAR_6));
}
