
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct resource {int dummy; } ;
struct ahci_controller {int remap_size; int emloc; int capsem; TYPE_1__* irqs; int r_mem; int sc_iomem; int remap_offset; scalar_t__ channels; } ;
typedef int rman_res_t ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
struct TYPE_2__ {struct resource* r_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_0 (int ,int ,int,int,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 struct ahci_controller* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct resource* FUNC_6 (int *,int ,int ,int,int ,int ) ;
 int FUNC_7 (struct resource*,int ) ;
 int FUNC_8 (struct resource*,int ) ;

struct resource *
FUNC_9(device_t VAR_9, device_t VAR_10, int VAR_11, int *VAR_12,
    rman_res_t VAR_13, rman_res_t VAR_14, rman_res_t VAR_15, u_int VAR_16)
{
 struct ahci_controller *VAR_17 = FUNC_2(VAR_9);
 struct resource *VAR_18;
 rman_res_t VAR_19;
 int VAR_20, VAR_21, VAR_22;
 bool VAR_23, VAR_24;

 VAR_22 = (intptr_t)FUNC_1(VAR_10);
 VAR_23 = VAR_24 = 0;
 if (VAR_22 & VAR_5) {
  VAR_22 &= VAR_6;
  VAR_22 -= VAR_17->channels;
  VAR_24 = 1;
 } else if (VAR_22 & VAR_2) {
  VAR_22 &= VAR_6;
  VAR_23 = 1;
 }
 VAR_18 = ((void*)0);
 switch (VAR_11) {
 case 128:
  if (VAR_24) {
   VAR_20 = VAR_17->remap_offset + VAR_22 * VAR_17->remap_size;
   VAR_21 = VAR_17->remap_size;
  } else if (!VAR_23) {
   VAR_20 = VAR_4 + (VAR_22 << 7);
   VAR_21 = 128;
  } else if (*VAR_12 == 0) {
   VAR_20 = VAR_0;
   VAR_21 = 4;
  } else {
   VAR_20 = (VAR_17->emloc & 0xffff0000) >> 14;
   VAR_21 = (VAR_17->emloc & 0x0000ffff) << 2;
   if (*VAR_12 != 1) {
    if (*VAR_12 == 2 && (VAR_17->capsem &
        (VAR_3 | VAR_1)) == 0)
     VAR_20 += VAR_21;
    else
     break;
   }
  }
  VAR_19 = FUNC_5(VAR_17->r_mem);
  VAR_18 = FUNC_6(&VAR_17->sc_iomem, VAR_19 + VAR_20,
      VAR_19 + VAR_20 + VAR_21 - 1, VAR_21, VAR_8, VAR_10);
  if (VAR_18) {
   bus_space_handle_t VAR_25;
   bus_space_tag_t VAR_26;
   VAR_25 = FUNC_3(VAR_17->r_mem);
   VAR_26 = FUNC_4(VAR_17->r_mem);
   FUNC_0(VAR_26, VAR_25, VAR_20, 128, &VAR_25);
   FUNC_7(VAR_18, VAR_25);
   FUNC_8(VAR_18, VAR_26);
  }
  break;
 case 129:
  if (*VAR_12 == VAR_7)
   VAR_18 = VAR_17->irqs[0].r_irq;
  break;
 }
 return (VAR_18);
}
