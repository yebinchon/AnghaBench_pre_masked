
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_page_t ;
typedef int u_int ;
struct sglist {TYPE_1__* sg_segs; } ;
struct agp_i810_softc {TYPE_2__* match; } ;
typedef int device_t ;
typedef int bus_dma_tag_t ;
struct TYPE_4__ {unsigned long long busdma_addr_mask_sz; } ;
struct TYPE_3__ {int ss_len; int ss_paddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,unsigned long long,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 struct agp_i810_softc* FUNC_3 (int ) ;
 struct sglist* FUNC_4 (int,int ) ;
 int FUNC_5 (struct sglist*) ;

int
FUNC_6(device_t VAR_4, vm_page_t *VAR_5, u_int VAR_6,
    struct sglist **VAR_7)
{
 struct agp_i810_softc *VAR_8;
 struct sglist *VAR_9;
 int VAR_10;





 if (*VAR_7 != ((void*)0))
  return (0);
 VAR_8 = FUNC_3(VAR_4);
 VAR_9 = FUNC_4(VAR_6, VAR_2 );
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_9->sg_segs[VAR_10].ss_paddr = FUNC_0(VAR_5[VAR_10]);
  VAR_9->sg_segs[VAR_10].ss_len = VAR_3;
 }
 *VAR_7 = VAR_9;
 return (0);
}
