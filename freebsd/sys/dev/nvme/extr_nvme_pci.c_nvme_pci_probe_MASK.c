
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct nvme_controller {int quirks; } ;
struct _pcsid {char* desc; int quirks; scalar_t__ devid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvme_controller* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ,struct _pcsid*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct _pcsid* VAR_6 ;

__attribute__((used)) static int
FUNC_8 (device_t VAR_7)
{
 struct nvme_controller *VAR_8 = FUNC_0(VAR_7);
 struct _pcsid *VAR_9;
 uint32_t VAR_10;
 uint16_t VAR_11;

 VAR_10 = FUNC_4(VAR_7);
 VAR_11 = FUNC_7(VAR_7);
 VAR_9 = VAR_6;

 while (VAR_9->devid) {
  if (FUNC_2(VAR_10, VAR_11, VAR_9))
   break;
  ++VAR_9;
 }
 if (VAR_9->devid)
  VAR_8->quirks = VAR_9->quirks;

 if (VAR_9->desc) {
  FUNC_1(VAR_7, VAR_9->desc);
  return (VAR_0);
 }
 return (VAR_2);
}
