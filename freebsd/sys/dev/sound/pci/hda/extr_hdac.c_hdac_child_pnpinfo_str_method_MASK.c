
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdac_softc {TYPE_1__* codecs; } ;
typedef size_t nid_t ;
typedef int device_t ;
struct TYPE_2__ {int vendor_id; int device_id; int revision_id; int stepping_id; } ;


 int FUNC_0 (int ) ;
 struct hdac_softc* FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,char*,int,int,int,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
 struct hdac_softc *VAR_4 = FUNC_1(VAR_0);
 nid_t VAR_5 = (uintptr_t)FUNC_0(VAR_1);

 FUNC_2(VAR_2, VAR_3, "vendor=0x%04x device=0x%04x revision=0x%02x "
     "stepping=0x%02x",
     VAR_4->codecs[VAR_5].vendor_id, VAR_4->codecs[VAR_5].device_id,
     VAR_4->codecs[VAR_5].revision_id, VAR_4->codecs[VAR_5].stepping_id);
 return (0);
}
