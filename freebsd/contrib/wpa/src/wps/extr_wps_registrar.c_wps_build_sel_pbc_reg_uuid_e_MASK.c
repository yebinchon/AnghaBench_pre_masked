
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct wps_registrar {scalar_t__ sel_reg_dev_password_id_override; TYPE_1__* wps; int dualband; int sel_reg_union; scalar_t__ pbc; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int uuid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wpabuf*,int ) ;

__attribute__((used)) static int FUNC_1(struct wps_registrar *VAR_2,
     struct wpabuf *VAR_3)
{
 u16 VAR_4 = VAR_2->pbc ? VAR_1 : VAR_0;
 if (!VAR_2->sel_reg_union)
  return 0;
 if (VAR_2->sel_reg_dev_password_id_override >= 0)
  VAR_4 = VAR_2->sel_reg_dev_password_id_override;
 if (VAR_4 != VAR_1 || !VAR_2->dualband)
  return 0;
 return FUNC_0(VAR_3, VAR_2->wps->uuid);
}
