
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sfxge_softc {int vpd_size; int vpd_data; int enp; } ;
struct TYPE_8__ {int op; int len; int payload; int keyword; int tag; } ;
struct TYPE_9__ {TYPE_1__ vpd; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
typedef TYPE_3__ sfxge_ioc_t ;
struct TYPE_11__ {int evv_length; int evv_value; int evv_keyword; int evv_tag; } ;
typedef TYPE_4__ efx_vpd_value_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;


 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,TYPE_4__*) ;
 int FUNC_4 (int ,int ,int ,TYPE_4__*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct sfxge_softc *VAR_2, sfxge_ioc_t *VAR_3)
{
 efx_vpd_value_t VAR_4;
 int VAR_5 = 0;

 switch (VAR_3->u.vpd.op) {
 case 129:
  VAR_4.evv_tag = VAR_3->u.vpd.tag;
  VAR_4.evv_keyword = VAR_3->u.vpd.keyword;
  VAR_5 = FUNC_3(VAR_2->enp, VAR_2->vpd_data, VAR_2->vpd_size, &VAR_4);
  if (VAR_5 != 0)
   break;
  VAR_3->u.vpd.len = FUNC_0(VAR_3->u.vpd.len, VAR_4.evv_length);
  if (VAR_3->u.vpd.payload != 0) {
   VAR_5 = FUNC_2(VAR_4.evv_value, VAR_3->u.vpd.payload,
         VAR_3->u.vpd.len);
  }
  break;
 case 128:
  if (VAR_3->u.vpd.len > sizeof(VAR_4.evv_value))
   return (VAR_0);
  VAR_4.evv_tag = VAR_3->u.vpd.tag;
  VAR_4.evv_keyword = VAR_3->u.vpd.keyword;
  VAR_4.evv_length = VAR_3->u.vpd.len;
  VAR_5 = FUNC_1(VAR_3->u.vpd.payload, VAR_4.evv_value, VAR_4.evv_length);
  if (VAR_5 != 0)
   break;
  VAR_5 = FUNC_4(VAR_2->enp, VAR_2->vpd_data, VAR_2->vpd_size, &VAR_4);
  if (VAR_5 != 0)
   break;
  VAR_5 = FUNC_5(VAR_2->enp, VAR_2->vpd_data, VAR_2->vpd_size);
  if (VAR_5 != 0)
   break;
  VAR_5 = FUNC_6(VAR_2->enp, VAR_2->vpd_data, VAR_2->vpd_size);
  break;
 default:
  VAR_5 = VAR_1;
  break;
 }

 return (VAR_5);
}
