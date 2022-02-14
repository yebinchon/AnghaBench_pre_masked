
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct resource {int dummy; } ;
struct TYPE_2__ {struct resource* r_irq; } ;
struct mvs_controller {TYPE_1__ irq; int r_mem; int sc_iomem; } ;
struct mvs_channel {int unit; } ;
typedef int rman_res_t ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (int ,int ,int,scalar_t__,int *) ;
 struct mvs_controller* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct resource* FUNC_6 (int *,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_7 (struct resource*,int ) ;
 int FUNC_8 (struct resource*,int ) ;

__attribute__((used)) static struct resource *
FUNC_9(device_t VAR_3, device_t VAR_4, int VAR_5, int *VAR_6,
     rman_res_t VAR_7, rman_res_t VAR_8, rman_res_t VAR_9, u_int VAR_10)
{
 struct mvs_controller *VAR_11 = FUNC_2(VAR_3);
 int VAR_12 = ((struct mvs_channel *)FUNC_2(VAR_4))->unit;
 struct resource *VAR_13 = ((void*)0);
 int VAR_14 = FUNC_0(VAR_12 & 0x03);
 rman_res_t VAR_15;

 switch (VAR_5) {
 case 128:
  VAR_15 = FUNC_5(VAR_11->r_mem);
  VAR_13 = FUNC_6(&VAR_11->sc_iomem, VAR_15 + VAR_14,
      VAR_15 + VAR_14 + VAR_1 - 1, VAR_1, VAR_2, VAR_4);
  if (VAR_13) {
   bus_space_handle_t VAR_16;
   bus_space_tag_t VAR_17;
   VAR_16 = FUNC_3(VAR_11->r_mem);
   VAR_17 = FUNC_4(VAR_11->r_mem);
   FUNC_1(VAR_17, VAR_16, VAR_14, VAR_1, &VAR_16);
   FUNC_7(VAR_13, VAR_16);
   FUNC_8(VAR_13, VAR_17);
  }
  break;
 case 129:
  if (*VAR_6 == VAR_0)
   VAR_13 = VAR_11->irq.r_irq;
  break;
 }
 return (VAR_13);
}
