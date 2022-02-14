
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vpd ;
typedef void* u8 ;
typedef int u32 ;
struct vpd_params {int* port_type; int* eth_base; void** xauicfg; int ec; int sn; void* mem_timing; void* mdc; void* uclk; void* mclk; void* cclk; } ;
struct t3_vpd {int id_tag; int * na_data; int xaui1cfg_data; int xaui0cfg_data; int * port3_data; int * port2_data; int * port1_data; int * port0_data; int ec_data; int sn_data; int mt_data; int mdc_data; int uclk_data; int mclk_data; int cclk_data; } ;
struct TYPE_6__ {scalar_t__ rev; } ;
struct TYPE_7__ {TYPE_1__ params; } ;
typedef TYPE_2__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 void* FUNC_2 (int ,int *,int) ;
 int FUNC_3 (TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(adapter_t *VAR_3, struct vpd_params *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct t3_vpd VAR_8;





 VAR_7 = FUNC_3(VAR_3, VAR_2, (u32 *)&VAR_8);
 if (VAR_7)
  return VAR_7;
 VAR_6 = VAR_8.id_tag == 0x82 ? VAR_2 : 0;

 for (VAR_5 = 0; VAR_5 < sizeof(VAR_8); VAR_5 += 4) {
  VAR_7 = FUNC_3(VAR_3, VAR_6 + VAR_5,
          (u32 *)((u8 *)&VAR_8 + VAR_5));
  if (VAR_7)
   return VAR_7;
 }

 VAR_4->cclk = FUNC_2(VAR_8.cclk_data, ((void*)0), 10);
 VAR_4->mclk = FUNC_2(VAR_8.mclk_data, ((void*)0), 10);
 VAR_4->uclk = FUNC_2(VAR_8.uclk_data, ((void*)0), 10);
 VAR_4->mdc = FUNC_2(VAR_8.mdc_data, ((void*)0), 10);
 VAR_4->mem_timing = FUNC_2(VAR_8.mt_data, ((void*)0), 10);
 FUNC_1(VAR_4->sn, VAR_8.sn_data, VAR_1);
 FUNC_1(VAR_4->ec, VAR_8.ec_data, VAR_0);


 if (VAR_3->params.rev == 0 && !VAR_8.port0_data[0]) {
  VAR_4->port_type[0] = FUNC_4(VAR_3) ? 1 : 2;
  VAR_4->port_type[1] = FUNC_4(VAR_3) ? 6 : 2;
 } else {
  VAR_4->port_type[0] = (u8)FUNC_0(VAR_8.port0_data[0]);
  VAR_4->port_type[1] = (u8)FUNC_0(VAR_8.port1_data[0]);
  VAR_4->port_type[2] = (u8)FUNC_0(VAR_8.port2_data[0]);
  VAR_4->port_type[3] = (u8)FUNC_0(VAR_8.port3_data[0]);
  VAR_4->xauicfg[0] = FUNC_2(VAR_8.xaui0cfg_data, ((void*)0), 16);
  VAR_4->xauicfg[1] = FUNC_2(VAR_8.xaui1cfg_data, ((void*)0), 16);
 }

 for (VAR_5 = 0; VAR_5 < 6; VAR_5++)
  VAR_4->eth_base[VAR_5] = FUNC_0(VAR_8.na_data[2 * VAR_5]) * 16 +
     FUNC_0(VAR_8.na_data[2 * VAR_5 + 1]);
 return 0;
}
