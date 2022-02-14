
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint16_t ;
typedef int u8 ;
struct fw_vi_mac_exact {int valid_to_idx; int macaddr; } ;
struct TYPE_4__ {struct fw_vi_mac_exact* exact; } ;
struct fw_vi_mac_cmd {void* op_to_viid; void* freemacs_to_len16; TYPE_1__ u; } ;
struct TYPE_6__ {scalar_t__ viid_smt_extn_support; } ;
struct adapter {TYPE_3__ params; TYPE_2__* chip_params; } ;
typedef int c ;
struct TYPE_5__ {unsigned int mps_tcam_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (struct adapter*) ;
 int FUNC_10 (int) ;
 void* FUNC_11 (int) ;
 int FUNC_12 (int ,int const*,int) ;
 int FUNC_13 (struct fw_vi_mac_cmd*,int ,int) ;
 int FUNC_14 (struct adapter*,unsigned int,struct fw_vi_mac_cmd*,int,struct fw_vi_mac_cmd*) ;

int FUNC_15(struct adapter *VAR_11, unsigned int VAR_12, unsigned int VAR_13,
    int VAR_14, const u8 *VAR_15, bool VAR_16, uint16_t *VAR_17)
{
 int VAR_18, VAR_19;
 struct fw_vi_mac_cmd VAR_20;
 struct fw_vi_mac_exact *VAR_21 = VAR_20.u.exact;
 unsigned int VAR_22 = VAR_11->chip_params->mps_tcam_size;

 if (VAR_14 < 0)
  VAR_14 = VAR_16 ? VAR_3 : VAR_2;
 VAR_19 = VAR_17 ? VAR_6 : VAR_5;

 FUNC_13(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.op_to_viid = FUNC_11(FUNC_3(VAR_4) |
       VAR_7 | VAR_8 |
       FUNC_6(VAR_13));
 VAR_20.freemacs_to_len16 = FUNC_11(FUNC_2(1));
 VAR_21->valid_to_idx = FUNC_10(VAR_9 |
          FUNC_5(VAR_19) |
          FUNC_4(VAR_14));
 FUNC_12(VAR_21->macaddr, VAR_15, sizeof(VAR_21->macaddr));

 VAR_18 = FUNC_14(VAR_11, VAR_12, &VAR_20, sizeof(VAR_20), &VAR_20);
 if (VAR_18 == 0) {
  VAR_18 = FUNC_0(FUNC_7(VAR_21->valid_to_idx));
  if (VAR_18 >= VAR_22)
   VAR_18 = -VAR_1;
  if (VAR_17) {
   if (VAR_11->params.viid_smt_extn_support)
    *VAR_17 = FUNC_1(FUNC_8(VAR_20.op_to_viid));
   else {
    if (FUNC_9(VAR_11) <= VAR_0)
     *VAR_17 = (VAR_13 & VAR_10) << 1;
    else
     *VAR_17 = VAR_13 & VAR_10;
   }
  }
 }
 return VAR_18;
}
