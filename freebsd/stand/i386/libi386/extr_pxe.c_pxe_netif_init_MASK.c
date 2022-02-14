
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {scalar_t__ Status; int HwAddrLen; int* CurrentNodeAddress; int* PermNodeAddress; int PktFilter; } ;
typedef TYPE_1__ t_PXENV_UNDI_OPEN ;
typedef TYPE_1__ t_PXENV_UNDI_GET_INFORMATION ;
struct iodesc {int* myea; scalar_t__ xid; } ;
struct TYPE_9__ {scalar_t__ bp_xid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_5__* VAR_4 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(struct iodesc *VAR_5, void *VAR_6)
{
 t_PXENV_UNDI_GET_INFORMATION *VAR_7;
 t_PXENV_UNDI_OPEN *VAR_8;
 uint8_t *VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = FUNC_0(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return;

 FUNC_2(VAR_7, sizeof(*VAR_7));
 FUNC_5(VAR_2, VAR_7);
 if (VAR_7->Status != 0) {
  FUNC_4("undi get info failed: %x\n", VAR_7->Status);
  FUNC_1(VAR_7, sizeof(*VAR_7));
  return;
 }


 for (VAR_10 = 0; VAR_10 < VAR_7->HwAddrLen; ++VAR_10) {
  if (VAR_7->CurrentNodeAddress[VAR_10] != 0)
   break;
 }
 if (VAR_10 < VAR_7->HwAddrLen) {
  for (VAR_10 = 0; VAR_10 < VAR_7->HwAddrLen; ++VAR_10) {
   if (VAR_7->CurrentNodeAddress[VAR_10] != 0xff)
    break;
  }
 }
 if (VAR_10 < VAR_7->HwAddrLen)
  VAR_9 = VAR_7->CurrentNodeAddress;
 else
  VAR_9 = VAR_7->PermNodeAddress;

 VAR_11 = FUNC_3(sizeof (VAR_5->myea), VAR_7->HwAddrLen);
 for (VAR_10 = 0; VAR_10 < VAR_11; ++VAR_10)
  VAR_5->myea[VAR_10] = VAR_9[VAR_10];

 if (VAR_4 != ((void*)0))
  VAR_5->xid = VAR_4->bp_xid;
 else
  VAR_5->xid = 0;

 FUNC_1(VAR_7, sizeof(*VAR_7));
 VAR_8 = FUNC_0(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  return;
 FUNC_2(VAR_8, sizeof(*VAR_8));
 VAR_8->PktFilter = VAR_1 | VAR_0;
 FUNC_5(VAR_3, VAR_8);
 if (VAR_8->Status != 0)
  FUNC_4("undi open failed: %x\n", VAR_8->Status);
 FUNC_1(VAR_8, sizeof(*VAR_8));
}
