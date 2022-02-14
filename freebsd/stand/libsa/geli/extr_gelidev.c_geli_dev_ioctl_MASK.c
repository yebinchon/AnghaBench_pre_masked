
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_long ;
typedef int u_int ;
struct open_file {scalar_t__ f_devdata; } ;
struct geli_devdesc {TYPE_1__* gdev; } ;
struct g_eli_metadata {int md_sectorsize; int md_provsize; } ;
struct TYPE_2__ {struct g_eli_metadata md; } ;




 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct open_file *VAR_1, u_long VAR_2, void *VAR_3)
{
 struct geli_devdesc *VAR_4;
 struct g_eli_metadata *VAR_5;

 VAR_4 = (struct geli_devdesc *)VAR_1->f_devdata;
 VAR_5 = &VAR_4->gdev->md;

 switch (VAR_2) {
 case 128:
  *(u_int *)VAR_3 = VAR_5->md_sectorsize;
  break;
 case 129:
  *(uint64_t *)VAR_3 = VAR_5->md_sectorsize * VAR_5->md_provsize;
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
