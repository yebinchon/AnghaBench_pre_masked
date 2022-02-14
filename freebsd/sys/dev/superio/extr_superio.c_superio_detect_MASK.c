
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct siosc {scalar_t__ vendor; int io_rid; int devid; int revid; int ldn_reg; int enable_reg; int current_ldn; scalar_t__ io_port; struct resource* io_res; int known_devices; TYPE_2__* methods; } ;
struct resource {int dummy; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;
typedef int descr ;
struct TYPE_4__ {scalar_t__ vendor; int (* exit ) (struct resource*,scalar_t__) ;int (* enter ) (struct resource*,scalar_t__) ;} ;
struct TYPE_3__ {scalar_t__ vendor; int mask; int devid; int * descr; int devices; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct resource* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int ,int ,int,struct resource*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,char*) ;
 TYPE_2__** VAR_7 ;
 int FUNC_7 (struct resource*,int) ;
 int FUNC_8 (struct resource*,int) ;
 int FUNC_9 (char*,int,char*,int,int) ;
 int FUNC_10 (struct resource*,scalar_t__) ;
 int FUNC_11 (struct resource*,scalar_t__) ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int
FUNC_12(device_t VAR_9, bool VAR_10, struct siosc *VAR_11)
{
 struct resource *VAR_12;
 rman_res_t VAR_13;
 rman_res_t VAR_14;
 uint16_t VAR_15;
 uint8_t VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19, VAR_20;

 VAR_17 = FUNC_2(VAR_9, VAR_5, 0, &VAR_13, &VAR_14);
 if (VAR_17 != 0)
  return (VAR_17);
 if (VAR_13 > VAR_6 || VAR_14 < VAR_1) {
  FUNC_4(VAR_9, "unexpected I/O range size\n");
  return (VAR_0);
 }
 VAR_18 = 0;
 VAR_12 = FUNC_1(VAR_9, VAR_5, &VAR_18, VAR_2);
 if (VAR_12 == ((void*)0)) {
  if (VAR_10)
   FUNC_4(VAR_9, "failed to allocate I/O resource\n");
  return (VAR_0);
 }

 for (VAR_20 = 0; VAR_7[VAR_20] != ((void*)0); VAR_20++) {
  VAR_7[VAR_20]->enter(VAR_12, VAR_13);
  if (VAR_7[VAR_20]->vendor == VAR_3) {
   VAR_15 = FUNC_8(VAR_12, 0x20);
   VAR_16 = FUNC_7(VAR_12, 0x22);
  } else if (VAR_7[VAR_20]->vendor == VAR_4) {
   VAR_15 = FUNC_7(VAR_12, 0x20);
   VAR_16 = FUNC_7(VAR_12, 0x21);
   VAR_15 = (VAR_15 << 8) | VAR_16;
  } else {
   continue;
  }
  VAR_7[VAR_20]->exit(VAR_12, VAR_13);
  for (VAR_19 = 0; VAR_8[VAR_19].vendor != 0; VAR_19++) {
   uint16_t VAR_21;

   VAR_21 = VAR_8[VAR_19].mask;
   if (VAR_8[VAR_19].vendor !=
       VAR_7[VAR_20]->vendor)
    continue;
   if ((VAR_8[VAR_19].devid & ~VAR_21) != (VAR_15 & ~VAR_21))
    continue;
   break;
  }


  if (VAR_8[VAR_19].vendor != 0)
   break;
 }

 if (VAR_7[VAR_20] == ((void*)0))
  VAR_17 = VAR_0;
 else
  VAR_17 = 0;
 if (!VAR_10 || VAR_17 != 0) {
  FUNC_3(VAR_9, VAR_5, VAR_18, VAR_12);
  return (VAR_17);
 }

 VAR_11->methods = VAR_7[VAR_20];
 VAR_11->vendor = VAR_11->methods->vendor;
 VAR_11->known_devices = VAR_8[VAR_19].devices;
 VAR_11->io_res = VAR_12;
 VAR_11->io_rid = VAR_18;
 VAR_11->io_port = VAR_13;
 VAR_11->devid = VAR_15;
 VAR_11->revid = VAR_16;

 FUNC_0(VAR_11->vendor == VAR_3 ||
     VAR_11->vendor == VAR_4,
     ("Only ITE and Nuvoton SuperIO-s are supported"));
 VAR_11->ldn_reg = 0x07;
 VAR_11->enable_reg = 0x30;
 VAR_11->current_ldn = 0xff;

 if (VAR_8[VAR_19].descr != ((void*)0)) {
  FUNC_5(VAR_9, VAR_8[VAR_19].descr);
 } else if (VAR_11->vendor == VAR_3) {
  char VAR_22[64];

  FUNC_9(VAR_22, sizeof(VAR_22),
      "ITE IT%4x SuperIO (revision 0x%02x)",
      VAR_11->devid, VAR_11->revid);
  FUNC_6(VAR_9, VAR_22);
 }
 return (0);
}
