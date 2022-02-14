
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct smp_phy_control_request {int phy; int phy_operation; int prog_min_phys_link_rate; int prog_max_phys_link_rate; int config_bits0; int pp_timeout_value; int attached_device_name; int update_pp_timeout; int expected_exp_chg_cnt; int request_len; int response_len; int function; int frame_type; } ;
struct ccb_smpio {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct smp_phy_control_request*,int) ;
 int FUNC_1 (struct ccb_smpio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int *,scalar_t__,int *,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct ccb_smpio *VAR_11, uint32_t VAR_12,
  void (*VAR_13)(struct cam_periph *, union ccb *),
  struct smp_phy_control_request *VAR_14, int VAR_15,
  uint8_t *VAR_16, int VAR_17, int VAR_18,
  uint32_t VAR_19, int VAR_20, int VAR_21,
  int VAR_22, uint64_t VAR_23,
  int VAR_24, int VAR_25, int VAR_26,
  int VAR_27, uint32_t VAR_28)
{
 FUNC_1(VAR_11,
         VAR_12,
         VAR_13,
                  VAR_0,
         (uint8_t *)VAR_14,
         VAR_15 - VAR_1,
         VAR_16,
         VAR_17,
         VAR_28);

 FUNC_0(VAR_14, sizeof(*VAR_14));

 VAR_14->frame_type = VAR_2;
 VAR_14->function = VAR_3;
 VAR_14->response_len = VAR_18 ? VAR_9 : 0;
 VAR_14->request_len = VAR_18 ? VAR_8 : 0;
 FUNC_3(VAR_19, VAR_14->expected_exp_chg_cnt);
 VAR_14->phy = VAR_20;
 VAR_14->phy_operation = VAR_21;

 if (VAR_22 != 0)
  VAR_14->update_pp_timeout |= VAR_10;

 FUNC_2(VAR_23, VAR_14->attached_device_name);
 VAR_14->prog_min_phys_link_rate = (VAR_24 <<
  VAR_7) & VAR_6;
 VAR_14->prog_max_phys_link_rate = (VAR_25 <<
  VAR_5) & VAR_4;
 VAR_14->config_bits0 = VAR_26;
 VAR_14->pp_timeout_value = VAR_27;
}
