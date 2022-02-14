
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {struct resource* r_irq; } ;
struct siis_controller {TYPE_1__ irq; int r_mem; int sc_iomem; } ;
struct siis_channel {int unit; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int ,int,int,int *) ;
 struct siis_controller* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct resource* FUNC_5 (int *,int ,int ,int,int ,int ) ;
 int FUNC_6 (struct resource*,int ) ;
 int FUNC_7 (struct resource*,int ) ;

__attribute__((used)) static struct resource *
FUNC_8(device_t VAR_2, device_t VAR_3, int VAR_4, int *VAR_5,
      rman_res_t VAR_6, rman_res_t VAR_7, rman_res_t VAR_8, u_int VAR_9)
{
 struct siis_controller *VAR_10 = FUNC_1(VAR_2);
 int VAR_11 = ((struct siis_channel *)FUNC_1(VAR_3))->unit;
 struct resource *VAR_12 = ((void*)0);
 int VAR_13 = VAR_11 << 13;
 rman_res_t VAR_14;

 switch (VAR_4) {
 case 128:
  VAR_14 = FUNC_4(VAR_10->r_mem);
  VAR_12 = FUNC_5(&VAR_10->sc_iomem, VAR_14 + VAR_13,
      VAR_14 + VAR_13 + 0x2000, 0x2000, VAR_1, VAR_3);
  if (VAR_12) {
   bus_space_handle_t VAR_15;
   bus_space_tag_t VAR_16;
   VAR_15 = FUNC_2(VAR_10->r_mem);
   VAR_16 = FUNC_3(VAR_10->r_mem);
   FUNC_0(VAR_16, VAR_15, VAR_13, 0x2000, &VAR_15);
   FUNC_6(VAR_12, VAR_15);
   FUNC_7(VAR_12, VAR_16);
  }
  break;
 case 129:
  if (*VAR_5 == VAR_0)
   VAR_12 = VAR_10->irq.r_irq;
  break;
 }
 return (VAR_12);
}
