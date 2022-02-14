
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* br_control; void* br_pribus; void* br_secbus; void* br_subbus; void* br_seclat; } ;
struct TYPE_5__ {int hdrtype; int nummaps; void* subdevice; void* subvendor; TYPE_1__ bridge; void* maxlat; void* mingnt; } ;
typedef TYPE_2__ pcicfgregs ;
typedef int device_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_20, int VAR_21, int VAR_22, int VAR_23, pcicfgregs *VAR_24)
{

 switch (VAR_24->hdrtype & VAR_0) {
 case 128:
  VAR_24->subvendor = FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_15, 2);
  VAR_24->subdevice = FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_13, 2);
  VAR_24->mingnt = FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_4, 1);
  VAR_24->maxlat = FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_3, 1);
  VAR_24->nummaps = VAR_17;
  break;
 case 130:
  VAR_24->bridge.br_seclat = FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_9, 1);
  VAR_24->bridge.br_subbus = FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_11, 1);
  VAR_24->bridge.br_secbus = FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_7, 1);
  VAR_24->bridge.br_pribus = FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_5, 1);
  VAR_24->bridge.br_control = FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_1, 2);
  VAR_24->nummaps = VAR_18;
  break;
 case 129:
  VAR_24->bridge.br_seclat = FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_10, 1);
  VAR_24->bridge.br_subbus = FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_12, 1);
  VAR_24->bridge.br_secbus = FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_8, 1);
  VAR_24->bridge.br_pribus = FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_6, 1);
  VAR_24->bridge.br_control = FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_2, 2);
  VAR_24->subvendor = FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_16, 2);
  VAR_24->subdevice = FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_14, 2);
  VAR_24->nummaps = VAR_19;
  break;
 }

}
