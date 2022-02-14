
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sds_dsobj; } ;
typedef TYPE_1__ scan_ds_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const scan_ds_t *VAR_2 = VAR_0, *VAR_3 = VAR_1;

 if (VAR_2->sds_dsobj < VAR_3->sds_dsobj)
  return (-1);
 if (VAR_2->sds_dsobj == VAR_3->sds_dsobj)
  return (0);
 return (1);
}
