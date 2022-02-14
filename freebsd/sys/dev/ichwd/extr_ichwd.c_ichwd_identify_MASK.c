
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct ichwd_device {int tco_version; } ;
struct TYPE_3__ {int name; } ;
typedef TYPE_1__ driver_t ;
typedef int * device_t ;


 int * FUNC_0 (int *,int ,int ,int ) ;
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
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int *,int ,int,int,int ) ;
 int * FUNC_4 (int *,int ,int ) ;
 int * FUNC_5 (int *,struct ichwd_device**) ;
 int * FUNC_6 (int *,struct ichwd_device**) ;
 int FUNC_7 (int *,char*,int,...) ;
 int FUNC_8 (int ,int,int,int ,int) ;
 int FUNC_9 (int ,int,int,int,int,int) ;
 int FUNC_10 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_11(driver_t *VAR_17, device_t VAR_18)
{
 struct ichwd_device *VAR_19;
 device_t VAR_20, VAR_21;
 device_t VAR_22;
 uint64_t VAR_23;
 uint32_t VAR_24;
 uint32_t VAR_25;
 int VAR_26;

 VAR_20 = FUNC_5(VAR_18, &VAR_19);
 if (VAR_20 == ((void*)0)) {
  VAR_21 = FUNC_6(VAR_18, &VAR_19);
  if (VAR_21 == ((void*)0))
   return;
 }

 FUNC_1(VAR_19->tco_version >= 1,
     ("unexpected TCO version %d", VAR_19->tco_version));
 FUNC_1(VAR_19->tco_version != 4 || VAR_21 != ((void*)0),
     ("could not find PCI SMBus device for TCOv4"));
 FUNC_1(VAR_19->tco_version >= 4 || VAR_20 != ((void*)0),
     ("could not find PCI LPC bridge device for TCOv1-3"));


 if ((VAR_22 = FUNC_4(VAR_18, VAR_17->name, 0)) == ((void*)0))
  VAR_22 = FUNC_0(VAR_18, 0, VAR_17->name, 0);

 if (VAR_22 == ((void*)0))
  return;

 switch (VAR_19->tco_version) {
 case 1:
  break;
 case 2:

  VAR_24 = FUNC_10(VAR_20, VAR_5, 4);
  VAR_26 = FUNC_3(VAR_20, VAR_16, 0,
      (VAR_24 & 0xffffc000) + VAR_0,
      VAR_1);
  if (VAR_26)
   FUNC_7(VAR_22,
       "Can not set TCO v%d memory resource for RCBA\n",
       VAR_19->tco_version);
  break;
 case 3:

  VAR_24 = FUNC_10(VAR_20, VAR_2, 4);
  VAR_26 = FUNC_3(VAR_20, VAR_16, 0,
      (VAR_24 & 0xfffffe00) + VAR_3,
      VAR_4);
  if (VAR_26)
   FUNC_7(VAR_22,
       "Can not set TCO v%d memory resource for PBASE\n",
       VAR_19->tco_version);
  break;
 case 4:

  VAR_25 = FUNC_10(VAR_21, VAR_9, 4);
  if ((VAR_25 & VAR_10) == 0) {
   FUNC_7(VAR_22,
       "TCO v%d decoding is not enabled\n",
       VAR_19->tco_version);
   break;
  }
  VAR_24 = FUNC_10(VAR_21, VAR_6, 4);
  VAR_26 = FUNC_3(VAR_22, VAR_15, 0,
      VAR_24 & VAR_7, VAR_8);
  if (VAR_26 != 0) {
   FUNC_7(VAR_22,
       "Can not set TCO v%d I/O resource (err = %d)\n",
       VAR_19->tco_version, VAR_26);
  }







  FUNC_9(0, 31, 1, 0xe1, 0, 1);
  VAR_23 = FUNC_8(0, 31, 1, VAR_11 + 4, 4);
  VAR_23 <<= 32;
  VAR_23 |= FUNC_8(0, 31, 1, VAR_11, 4);
  VAR_23 &= ~0xfull;
  FUNC_9(0, 31, 1, 0xe1, 1, 1);





  VAR_23 += FUNC_2(VAR_14, VAR_12);
  VAR_26 = FUNC_3(VAR_22, VAR_16, 1, VAR_23,
      VAR_13);
  if (VAR_26 != 0) {
   FUNC_7(VAR_22,
       "Can not set TCO v%d PCR I/O resource (err = %d)\n",
       VAR_19->tco_version, VAR_26);
  }

  break;
 default:
  FUNC_7(VAR_22,
      "Can not set unknown TCO v%d memory resource for unknown base address\n",
      VAR_19->tco_version);
  break;
 }
}
