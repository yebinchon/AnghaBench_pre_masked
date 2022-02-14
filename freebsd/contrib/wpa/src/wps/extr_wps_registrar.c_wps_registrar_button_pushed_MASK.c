
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_registrar {int selected_registrar; int pbc; int wps; int p2p_dev_addr; scalar_t__ force_pbc_overlap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct wps_registrar*,int *) ;
 int FUNC_1 (int ,int ,int ,struct wps_registrar*,int *) ;
 int FUNC_2 (int ,int const*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct wps_registrar*,int *) ;
 scalar_t__ FUNC_8 (struct wps_registrar*,int *,int *) ;
 int VAR_3 ;
 int FUNC_9 (struct wps_registrar*,int ) ;
 int VAR_4 ;

int FUNC_10(struct wps_registrar *VAR_5,
    const u8 *VAR_6)
{
 if (VAR_6 == ((void*)0) &&
     FUNC_8(VAR_5, ((void*)0), ((void*)0))) {
  FUNC_4(VAR_1, "WPS: PBC overlap - do not start PBC "
      "mode");
  FUNC_6(VAR_5->wps);
  return -2;
 }
 FUNC_4(VAR_1, "WPS: Button pushed - PBC mode started");
 VAR_5->force_pbc_overlap = 0;
 VAR_5->selected_registrar = 1;
 VAR_5->pbc = 1;
 if (VAR_6)
  FUNC_2(VAR_5->p2p_dev_addr, VAR_6, VAR_0);
 else
  FUNC_3(VAR_5->p2p_dev_addr, 0, VAR_0);
 FUNC_7(VAR_5,
      (u8 *) "\xff\xff\xff\xff\xff\xff");
 FUNC_9(VAR_5, 0);

 FUNC_5(VAR_5->wps);
 FUNC_0(VAR_4, VAR_5, ((void*)0));
 FUNC_0(VAR_3, VAR_5, ((void*)0));
 FUNC_1(VAR_2, 0, VAR_3,
          VAR_5, ((void*)0));
 return 0;
}
