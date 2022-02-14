
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int window; int key; int name; } ;
struct authdes_cred {int adc_namekind; int adc_nickname; TYPE_1__ adc_fullname; } ;
typedef int enum_t ;
typedef enum authdes_namekind { ____Placeholder_authdes_namekind } authdes_namekind ;
typedef int des_block ;
typedef int caddr_t ;
typedef int bool_t ;
typedef int XDR ;




 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int *,int ) ;

bool_t
FUNC_4(XDR *VAR_3, struct authdes_cred *VAR_4)
{
 enum authdes_namekind *VAR_5 = &VAR_4->adc_namekind;



 FUNC_0(FUNC_1(VAR_3, (enum_t *) VAR_5));
 switch (VAR_4->adc_namekind) {
 case 129:
  FUNC_0(FUNC_3(VAR_3, &VAR_4->adc_fullname.name,
      VAR_1));
  FUNC_0(FUNC_2(VAR_3, (caddr_t)&VAR_4->adc_fullname.key,
      sizeof(des_block)));
  FUNC_0(FUNC_2(VAR_3, (caddr_t)&VAR_4->adc_fullname.window,
      sizeof(VAR_4->adc_fullname.window)));
  return (VAR_2);
 case 128:
  FUNC_0(FUNC_2(VAR_3, (caddr_t)&VAR_4->adc_nickname,
      sizeof(VAR_4->adc_nickname)));
  return (VAR_2);
 default:
  return (VAR_0);
 }
}
