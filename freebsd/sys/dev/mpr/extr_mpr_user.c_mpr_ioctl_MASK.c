
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_long ;
struct thread {int dummy; } ;
struct mpr_usr_command {int dummy; } ;
struct mpr_softc {int mpr_mtx; int port_enable_complete; } ;
struct mpr_ext_cfg_page_req {int len; int buf; } ;
struct mpr_cfg_page_req {int len; int buf; } ;
struct cdev {struct mpr_softc* si_drv1; } ;
typedef int mpr_reg_access_t ;
typedef int mpr_pci_info_t ;
typedef int mpr_pass_thru_t ;
typedef int mpr_event_report_t ;
typedef int mpr_event_query_t ;
typedef int mpr_event_enable_t ;
typedef int mpr_diag_action_t ;
typedef int mpr_btdh_mapping_t ;
typedef int mpr_adapter_data_t ;
typedef int MPI2_CONFIG_PAGE_HEADER ;
typedef int MPI2_CONFIG_EXTENDED_PAGE_HEADER ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (void*,int ) ;
 int VAR_6 ;
 void* FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct mpr_softc*,int ,char*,scalar_t__) ;
 int FUNC_5 (struct mpr_softc*) ;
 int FUNC_6 (struct mpr_softc*) ;
 int FUNC_7 (struct mpr_softc*) ;
 int FUNC_8 (struct mpr_softc*,int *) ;
 int FUNC_9 (struct mpr_softc*,struct mpr_usr_command*) ;
 int FUNC_10 (struct mpr_softc*,int *) ;
 int FUNC_11 (struct mpr_softc*,int *) ;
 int FUNC_12 (struct mpr_softc*,int *) ;
 int FUNC_13 (struct mpr_softc*,int *) ;
 int FUNC_14 (struct mpr_softc*,int *) ;
 int FUNC_15 (struct mpr_softc*,int *) ;
 int FUNC_16 (struct mpr_softc*,struct mpr_cfg_page_req*) ;
 int FUNC_17 (struct mpr_softc*,struct mpr_cfg_page_req*,void*) ;
 int FUNC_18 (struct mpr_softc*,struct mpr_ext_cfg_page_req*) ;
 int FUNC_19 (struct mpr_softc*,struct mpr_ext_cfg_page_req*,void*) ;
 int FUNC_20 (struct mpr_softc*,int *) ;
 int FUNC_21 (struct mpr_softc*,int *) ;
 int FUNC_22 (struct mpr_softc*,struct mpr_cfg_page_req*,void*) ;
 int FUNC_23 (int *,int *,int ,char*,int) ;
 int FUNC_24 (char*,int) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_25(struct cdev *VAR_8, u_long VAR_9, void *VAR_10, int VAR_11,
    struct thread *VAR_12)
{
 struct mpr_softc *VAR_13;
 struct mpr_cfg_page_req *VAR_14;
 struct mpr_ext_cfg_page_req *VAR_15;
 void *VAR_16;
 int VAR_17, VAR_18;

 VAR_16 = ((void*)0);
 VAR_13 = VAR_8->si_drv1;
 VAR_14 = (void *)VAR_10;
 VAR_15 = (void *)VAR_10;

 switch (VAR_9) {
 case 142:
  FUNC_5(VAR_13);
  VAR_17 = FUNC_16(VAR_13, VAR_14);
  FUNC_7(VAR_13);
  break;
 case 141:
  VAR_16 = FUNC_3(VAR_14->len, VAR_2, VAR_3 | VAR_4);
  VAR_17 = FUNC_0(VAR_14->buf, VAR_16,
      sizeof(MPI2_CONFIG_PAGE_HEADER));
  if (VAR_17)
   break;
  FUNC_5(VAR_13);
  VAR_17 = FUNC_17(VAR_13, VAR_14, VAR_16);
  FUNC_7(VAR_13);
  if (VAR_17)
   break;
  VAR_17 = FUNC_1(VAR_16, VAR_14->buf, VAR_14->len);
  break;
 case 140:
  FUNC_5(VAR_13);
  VAR_17 = FUNC_18(VAR_13, VAR_15);
  FUNC_7(VAR_13);
  break;
 case 139:
  VAR_16 = FUNC_3(VAR_15->len, VAR_2,
      VAR_3 | VAR_4);
  VAR_17 = FUNC_0(VAR_15->buf, VAR_16,
      sizeof(MPI2_CONFIG_EXTENDED_PAGE_HEADER));
  if (VAR_17)
   break;
  FUNC_5(VAR_13);
  VAR_17 = FUNC_19(VAR_13, VAR_15, VAR_16);
  FUNC_7(VAR_13);
  if (VAR_17)
   break;
  VAR_17 = FUNC_1(VAR_16, VAR_15->buf, VAR_15->len);
  break;
 case 138:
  VAR_16 = FUNC_3(VAR_14->len, VAR_2, VAR_3|VAR_4);
  VAR_17 = FUNC_0(VAR_14->buf, VAR_16, VAR_14->len);
  if (VAR_17)
   break;
  FUNC_5(VAR_13);
  VAR_17 = FUNC_22(VAR_13, VAR_14, VAR_16);
  FUNC_7(VAR_13);
  break;
 case 143:
  VAR_17 = FUNC_9(VAR_13, (struct mpr_usr_command *)VAR_10);
  break;
 case 130:





  VAR_17 = FUNC_15(VAR_13, (mpr_pass_thru_t *)VAR_10);
  break;
 case 132:




  VAR_17 = 0;
  FUNC_14(VAR_13, (mpr_adapter_data_t *)VAR_10);
  break;
 case 131:




  FUNC_5(VAR_13);
  VAR_17 = 0;
  FUNC_20(VAR_13, (mpr_pci_info_t *)VAR_10);
  FUNC_7(VAR_13);
  break;
 case 128:
  FUNC_5(VAR_13);
  VAR_13->port_enable_complete = 0;
  uint32_t VAR_19 = VAR_7;
  VAR_17 = FUNC_6(VAR_13);

  VAR_18 = FUNC_23(&VAR_13->port_enable_complete, &VAR_13->mpr_mtx,
      VAR_5, "mpr_porten", 300 * VAR_6);
  FUNC_7(VAR_13);
  if (VAR_18)
   FUNC_24("Port Enable did not complete after Diag "
       "Reset msleep error %d.\n", VAR_18);
  else
   FUNC_4(VAR_13, VAR_1, "Hard Reset with Port Enable "
       "completed in %d seconds.\n",
       (uint32_t)(VAR_7 - VAR_19));
  break;
 case 136:




  FUNC_5(VAR_13);
  VAR_17 = FUNC_10(VAR_13, (mpr_diag_action_t *)VAR_10);
  FUNC_7(VAR_13);
  break;
 case 134:




  VAR_17 = 0;
  FUNC_12(VAR_13, (mpr_event_query_t *)VAR_10);
  break;
 case 135:




  VAR_17 = 0;
  FUNC_11(VAR_13, (mpr_event_enable_t *)VAR_10);
  break;
 case 133:




  VAR_17 = FUNC_13(VAR_13, (mpr_event_report_t *)VAR_10);
  break;
 case 129:




  FUNC_5(VAR_13);
  VAR_17 = FUNC_21(VAR_13, (mpr_reg_access_t *)VAR_10);
  FUNC_7(VAR_13);
  break;
 case 137:





  VAR_17 = FUNC_8(VAR_13, (mpr_btdh_mapping_t *)VAR_10);
  break;
 default:
  VAR_17 = VAR_0;
  break;
 }

 if (VAR_16 != ((void*)0))
  FUNC_2(VAR_16, VAR_2);

 return (VAR_17);
}
