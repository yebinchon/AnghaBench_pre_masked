
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdac_softc {int flags; int num_sdo; TYPE_1__* codecs; } ;
typedef size_t nid_t ;
typedef int device_t ;
struct TYPE_2__ {uintptr_t vendor_id; uintptr_t device_id; uintptr_t revision_id; uintptr_t stepping_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct hdac_softc* FUNC_1 (int ) ;
 uintptr_t FUNC_2 (int ) ;
 uintptr_t FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, device_t VAR_3, int VAR_4, uintptr_t *VAR_5)
{
 struct hdac_softc *VAR_6 = FUNC_1(VAR_2);
 nid_t VAR_7 = (uintptr_t)FUNC_0(VAR_3);

 switch (VAR_4) {
 case 136:
  *VAR_5 = VAR_7;
  break;
 case 128:
  *VAR_5 = VAR_6->codecs[VAR_7].vendor_id;
  break;
 case 135:
  *VAR_5 = VAR_6->codecs[VAR_7].device_id;
  break;
 case 133:
  *VAR_5 = VAR_6->codecs[VAR_7].revision_id;
  break;
 case 132:
  *VAR_5 = VAR_6->codecs[VAR_7].stepping_id;
  break;
 case 129:
  *VAR_5 = FUNC_3(VAR_2);
  break;
 case 130:
  *VAR_5 = FUNC_2(VAR_2);
  break;
 case 134:
  *VAR_5 = (VAR_6->flags & VAR_1) != 0;
  break;
 case 131:
  *VAR_5 = (1 << (1 << VAR_6->num_sdo)) - 1;
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
