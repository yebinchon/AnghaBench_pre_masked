
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct nvram2env_softc {scalar_t__ bst; scalar_t__ addr; scalar_t__ maxsize; scalar_t__ sig; int flags; int bsh; } ;
struct nvram {int size; int sig; } ;
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
 void* VAR_10 ;
 void* VAR_11 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ,int ,int *) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 struct nvram2env_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,scalar_t__,...) ;
 int FUNC_4 (struct nvram*,int ) ;
 int FUNC_5 (char*,char*) ;
 struct nvram* FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (char*,char*,...) ;
 scalar_t__ FUNC_8 (struct nvram2env_softc*,scalar_t__) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*,char) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*) ;
 void* FUNC_13 (char*,int ,int ) ;

int
FUNC_14(device_t VAR_12)
{
 struct nvram2env_softc *VAR_13;
 struct nvram *VAR_14;
 char *VAR_15, *VAR_16, *VAR_17;
 uint32_t VAR_18, VAR_19, VAR_20, *VAR_21;

 VAR_13 = FUNC_2(VAR_12);

 if (VAR_13->bst == 0 || VAR_13->addr == 0)
  return (VAR_1);

 if (FUNC_0(VAR_13->bst, VAR_13->addr, VAR_9, 0,
  &VAR_13->bsh) != 0)
  return (VAR_1);

 VAR_18 = FUNC_8(VAR_13, 0);
 VAR_19 = FUNC_8(VAR_13, 4);

 if (VAR_11)
  FUNC_3(VAR_12, " size=0x%05x maxsize=0x%05x\n", VAR_19,
    VAR_13->maxsize);

 VAR_19 = (VAR_19 > VAR_13->maxsize)?VAR_13->maxsize:VAR_19;


 if (VAR_18 == VAR_13->sig || (VAR_13->flags & VAR_8))
 {


  VAR_19 += 3;
  VAR_19 &= ~3;

  VAR_14 = FUNC_6(VAR_19, VAR_2, VAR_3 | VAR_4);
  if (!VAR_14)
   return (VAR_0);

  VAR_21 = (uint32_t *) VAR_14;


  for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20 += 4) {
   *VAR_21 = FUNC_8(VAR_13, VAR_20);
   VAR_21++;
  }


  if (VAR_13->flags & VAR_5) {
   FUNC_3(VAR_12, "sig = %#x\n", VAR_14->sig);
   FUNC_3(VAR_12, "size = %#x\n", VAR_14->size);
  }

  if (!(VAR_13->flags & VAR_7)) {

  }

  if (VAR_13->flags & VAR_6)
   VAR_15 = (char*)VAR_14+4;
  if (VAR_13->flags & VAR_8)
   VAR_15 = (char*)VAR_14+4;
  else if (VAR_13->flags & VAR_5)
   VAR_15 = (char*)VAR_14+20;
  else
   VAR_15 = (char*)VAR_14+4;


  for ( ; VAR_15 < (char*)VAR_21;
      VAR_15 += FUNC_12(VAR_15) + FUNC_12(VAR_16) + 2 ) {

   if (!VAR_15 || (FUNC_12(VAR_15) == 0))
    break;


   VAR_17 = FUNC_10(VAR_15,'=');
   VAR_17[0] = '\0';
   VAR_16 = VAR_17+1;

   if (VAR_11)
    FUNC_7("ENV[%p]: %s=%s\n",
        (void*)((char*)VAR_15 - (char*)VAR_14),
        VAR_15, VAR_16);

   FUNC_5(VAR_15, VAR_16);

   if (FUNC_9(VAR_15, "WAN_MAC_ADDR") == 0) {

    if (VAR_11)
     FUNC_7("ENV: aliasing "
         "WAN_MAC_ADDR to ethaddr"
         " = %s\n", VAR_16);
    FUNC_5("ethaddr", VAR_16);
   }
   else if (FUNC_9(VAR_15, "LAN_MAC_ADDR") == 0){

    if (VAR_11)
     FUNC_7("ENV: aliasing "
         "LAN_MAC_ADDR to eth1addr"
         " = %s\n", VAR_16);
    FUNC_5("eth1addr", VAR_16);
   }

   if (FUNC_11(VAR_15, "bootverbose") == 0)
    VAR_11 = FUNC_13(VAR_16, 0, 0);
   if (FUNC_11(VAR_15, "boothowto" ) == 0)
    VAR_10 = FUNC_13(VAR_16, 0, 0);

  }
  FUNC_4(VAR_14, VAR_2);
 }

 FUNC_1(VAR_13->bst, VAR_13->bsh, VAR_9);

 return (0);
}
