
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t u_int ;
struct sec_softc {int dummy; } ;
struct sec_hw_desc_ptr {int shdp_j; int shdp_ptr; scalar_t__ shdp_extent; scalar_t__ shdp_length; } ;
struct sec_desc_map_info {TYPE_4__* sdmi_lt_first; scalar_t__ sdmi_lt_used; TYPE_2__* sdmi_lt_last; scalar_t__ sdmi_offset; int member_5; int * member_4; int * member_3; scalar_t__ member_2; scalar_t__ member_1; struct sec_softc* member_0; } ;
struct sec_desc {TYPE_3__* sd_desc; int sd_lt_used; int * sd_ptr_dmem; } ;
typedef scalar_t__ data ;
typedef scalar_t__ bus_size_t ;
struct TYPE_8__ {int sl_lt_paddr; } ;
struct TYPE_7__ {struct sec_hw_desc_ptr* shd_pointer; } ;
struct TYPE_6__ {TYPE_1__* sl_lt; } ;
struct TYPE_5__ {int shl_r; } ;


 int FUNC_0 (struct sec_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sec_softc*,int *,void*,scalar_t__,int,struct sec_desc_map_info*) ;

__attribute__((used)) static int
FUNC_2(struct sec_softc *VAR_2, struct sec_desc *VAR_3,
    u_int VAR_4, void *VAR_5, bus_size_t VAR_6, bus_size_t VAR_7, int VAR_8)
{
 struct sec_desc_map_info VAR_9 = { VAR_2, VAR_7, VAR_6, ((void*)0), ((void*)0), 0 };
 struct sec_hw_desc_ptr *VAR_10;
 int VAR_11;

 FUNC_0(VAR_2, VAR_1);


 if (VAR_8 == VAR_0) {
   VAR_5 = (uint8_t*)(VAR_5) + VAR_6;
   VAR_9.sdmi_offset = 0;
 }

 VAR_11 = FUNC_1(VAR_2, &(VAR_3->sd_ptr_dmem[VAR_4]), VAR_5, VAR_7,
     VAR_8, &VAR_9);

 if (VAR_11)
  return (VAR_11);

 VAR_9.sdmi_lt_last->sl_lt->shl_r = 1;
 VAR_3->sd_lt_used += VAR_9.sdmi_lt_used;

 VAR_10 = &(VAR_3->sd_desc->shd_pointer[VAR_4]);
 VAR_10->shdp_length = VAR_7;
 VAR_10->shdp_extent = 0;
 VAR_10->shdp_j = 1;
 VAR_10->shdp_ptr = VAR_9.sdmi_lt_first->sl_lt_paddr;

 return (0);
}
