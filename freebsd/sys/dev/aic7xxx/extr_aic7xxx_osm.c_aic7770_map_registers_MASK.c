
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct resource {int dummy; } ;
struct ahc_softc {int bsh; int tag; TYPE_1__* platform_data; int dev_softc; } ;
struct TYPE_2__ {int regs_res_id; struct resource* regs; int regs_res_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (struct resource*) ;

int
FUNC_4(struct ahc_softc *VAR_3, u_int VAR_4)
{
 struct resource *VAR_5;
 int VAR_6;

 VAR_6 = 0;
 VAR_5 = FUNC_0(VAR_3->dev_softc, VAR_2, &VAR_6,
          VAR_1);
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_3->dev_softc, "Unable to map I/O space?!\n");
  return VAR_0;
 }
 VAR_3->platform_data->regs_res_type = VAR_2;
 VAR_3->platform_data->regs_res_id = VAR_6;
 VAR_3->platform_data->regs = VAR_5;
 VAR_3->tag = FUNC_3(VAR_5);
 VAR_3->bsh = FUNC_2(VAR_5);
 return (0);
}
