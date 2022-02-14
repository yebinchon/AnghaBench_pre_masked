
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvram2env_softc {scalar_t__ sig; scalar_t__ maxsize; int flags; int addr; int need_swap; int crc; scalar_t__ bsh; int * bst; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,scalar_t__,int ,scalar_t__*) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;
 struct nvram2env_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char*,int ,char*,int*) ;

int
FUNC_9(device_t VAR_7)
{
 uint32_t VAR_8, VAR_9, VAR_10;
 struct nvram2env_softc * VAR_11 = FUNC_3(VAR_7);





 if (VAR_11->bst == ((void*)0))
  return (VAR_2);

 if (VAR_11->sig == 0)
  if (FUNC_8("nvram", FUNC_4(VAR_7), "sig",
      &VAR_11->sig) != 0 || VAR_11->sig == 0)
   VAR_11->sig = VAR_1;

 if (VAR_11->maxsize == 0)
  if (FUNC_8("nvram", FUNC_4(VAR_7), "maxsize",
      &VAR_11->maxsize) != 0 || VAR_11->maxsize == 0)
   VAR_11->maxsize = VAR_5;

 if (VAR_11->flags == 0)
  if (FUNC_8("nvram", FUNC_4(VAR_7), "flags",
      &VAR_11->flags) != 0 || VAR_11->flags == 0)
   VAR_11->flags = VAR_3;


 for (VAR_8 = 0; VAR_8 < 2; VAR_8 ++)
 {
  switch (VAR_8) {
  case 0:
   break;
  case 1:
  case 2:
   if (FUNC_8("nvram", FUNC_4(VAR_7),
       (VAR_8 == 1) ? "base" : "fallbackbase", &VAR_9) != 0 ||
       VAR_9 == 0)
    continue;

   VAR_11->addr = VAR_9;
   break;
  default:
   break;
  }

  if (VAR_11->addr == 0)
   continue;

  if (VAR_6)
   FUNC_5(VAR_7, "base=0x%08x sig=0x%08x "
       "maxsize=0x%08x flags=0x%08x\n",
       VAR_11->addr, VAR_11->sig, VAR_11->maxsize, VAR_11->flags);

  if (FUNC_0(VAR_11->bst, VAR_11->addr, VAR_11->maxsize, 0,
      &VAR_11->bsh) != 0)
   continue;

  VAR_10 = FUNC_1(VAR_11->bst, VAR_11->bsh, 0);
  if ( VAR_10 == VAR_11->sig )
  {
   FUNC_5(VAR_7, "Found NVRAM at %#x\n",
       (uint32_t)VAR_9);
   VAR_11->need_swap = 0;
   goto unmap_done;
  }
  else if ( FUNC_7(VAR_10) == VAR_11->sig )
  {
   FUNC_5(VAR_7, "Found NVRAM at %#x\n",
       (uint32_t)VAR_9);
   VAR_11->need_swap = 1;
   goto unmap_done;
  } else if (VAR_11->flags & VAR_4) {
   FUNC_5(VAR_7, "Use NVRAM at %#x\n",
       (uint32_t)VAR_9);
   VAR_11->crc = VAR_10;
   goto unmap_done;
  }
  FUNC_2(VAR_11->bst, VAR_11->bsh, VAR_5);
 }
 VAR_11->bst = 0;
 VAR_11->bsh = 0;
 VAR_11->addr = 0;
 return (VAR_2);

unmap_done:
 FUNC_2(VAR_11->bst, VAR_11->bsh, VAR_5);
 FUNC_6(VAR_7, "NVRAM to ENV pseudo-device");
 return (VAR_0);

}
