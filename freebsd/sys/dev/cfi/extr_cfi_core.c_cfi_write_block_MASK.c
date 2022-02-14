
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int u_int ;
struct cfi_softc {int sc_cmdset; int sc_wrofs; int sc_wrbufsz; int* sc_wrbuf; int* sc_wrbufcpy; int sc_regions; int sc_maxbuf; int sc_width; int sc_handle; int sc_tag; scalar_t__* sc_max_timeouts; TYPE_1__* sc_region; } ;
typedef scalar_t__ sbintime_t ;
typedef int register_t ;
struct TYPE_2__ {int r_blksz; } ;


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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;




 int FUNC_0 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int,scalar_t__) ;
 int FUNC_4 (int ,int ,int,scalar_t__) ;
 int FUNC_5 (int ,int ,int,int*,int) ;
 int FUNC_6 (int ,int ,int,scalar_t__*,int) ;
 int FUNC_7 (int ,int ,int,scalar_t__*,int) ;
 int FUNC_8 (struct cfi_softc*,int,int,int ) ;
 int FUNC_9 (struct cfi_softc*,int,int) ;
 scalar_t__ FUNC_10 (struct cfi_softc*,int) ;
 int FUNC_11 (struct cfi_softc*) ;
 int FUNC_12 (struct cfi_softc*,int,scalar_t__,size_t) ;
 int FUNC_13 (struct cfi_softc*,int,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 () ;

int
FUNC_19(struct cfi_softc *VAR_20)
{
 union {
  uint8_t *x8;
  uint16_t *x16;
  uint32_t *x32;
 } VAR_21, VAR_22;
 register_t VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27 = 0;
 uint32_t VAR_28;
 u_int VAR_29;
 sbintime_t VAR_30;
 u_int VAR_31;
 uint32_t VAR_32;


 switch (VAR_20->sc_cmdset) {
 case 129:
 case 128:
  FUNC_13(VAR_20, VAR_20->sc_wrofs, VAR_11);
  FUNC_13(VAR_20, VAR_20->sc_wrofs, VAR_13);
  FUNC_13(VAR_20, VAR_20->sc_wrofs, VAR_9);
  break;
 }


 for (VAR_25 = 0; VAR_25 < VAR_20->sc_wrbufsz; VAR_25++)
  if ((VAR_20->sc_wrbuf[VAR_25] & VAR_20->sc_wrbufcpy[VAR_25]) != VAR_20->sc_wrbuf[VAR_25]) {
   VAR_27 = 1;
   break;
  }

 if (VAR_27) {
  VAR_23 = FUNC_15();
  VAR_30 = FUNC_18();

  switch (VAR_20->sc_cmdset) {
  case 129:
  case 128:
   FUNC_13(VAR_20, VAR_20->sc_wrofs, VAR_5);
   FUNC_13(VAR_20, VAR_20->sc_wrofs, VAR_7);
   break;
  case 130:
  case 131:

   VAR_31 = VAR_20->sc_region[0].r_blksz;
   for (VAR_25 = 1; VAR_25 < VAR_20->sc_regions; VAR_25++) {
    if (VAR_20->sc_region[VAR_25].r_blksz < VAR_31)
     VAR_31 = VAR_20->sc_region[VAR_25].r_blksz;
   }
   FUNC_8(VAR_20, VAR_20->sc_wrofs, VAR_0,
       VAR_2);
   FUNC_8(VAR_20, VAR_20->sc_wrofs,
       VAR_20->sc_wrofs >> (FUNC_14(VAR_31) - 1),
       VAR_1);
   for (VAR_25 = 0; VAR_25 < VAR_3; ++VAR_25) {
    if (FUNC_9(VAR_20, VAR_20->sc_wrofs,
        VAR_20->sc_wrbufsz))
     break;
    FUNC_0(10);
   }
   if (VAR_25 == VAR_3) {
    FUNC_17("\nCFI Sector Erase time out error\n");
    return (VAR_17);
   }
   break;
  default:

   FUNC_16(VAR_23);
   return (VAR_17);
  }
  FUNC_16(VAR_23);
  VAR_24 = FUNC_12(VAR_20, VAR_20->sc_wrofs, VAR_30,
      VAR_15);
  if (VAR_24)
   goto out;
 } else
  VAR_24 = 0;


 VAR_21.x8 = VAR_20->sc_wrbuf;
 VAR_22.x8 = VAR_20->sc_wrbufcpy;
 if (VAR_20->sc_maxbuf > VAR_20->sc_width) {
  switch (VAR_20->sc_cmdset) {
  case 129:
  case 128:
   for (VAR_25 = 0; VAR_25 < VAR_20->sc_wrbufsz; VAR_25 += VAR_29) {
    VAR_29 = FUNC_1(VAR_20->sc_maxbuf, VAR_20->sc_wrbufsz - VAR_25);

    VAR_23 = FUNC_15();

    VAR_30 = FUNC_18();
    do {
     FUNC_13(VAR_20, VAR_20->sc_wrofs + VAR_25,
         VAR_6);
     if (FUNC_18() > VAR_30 + VAR_20->sc_max_timeouts[VAR_14]) {
      VAR_24 = VAR_19;
      goto out;
     }
     VAR_28 = FUNC_10(VAR_20, VAR_20->sc_wrofs + VAR_25);
    } while (! (VAR_28 & VAR_12));

    FUNC_13(VAR_20, VAR_20->sc_wrofs + VAR_25,
        (VAR_29 / VAR_20->sc_width) - 1);
    switch (VAR_20->sc_width) {
    case 1:
     FUNC_5(VAR_20->sc_tag,
         VAR_20->sc_handle, VAR_20->sc_wrofs + VAR_25,
         VAR_21.x8 + VAR_25, VAR_29);
     break;
    case 2:
     FUNC_6(VAR_20->sc_tag,
         VAR_20->sc_handle, VAR_20->sc_wrofs + VAR_25,
         VAR_21.x16 + VAR_25 / 2, VAR_29 / 2);
     break;
    case 4:
     FUNC_7(VAR_20->sc_tag,
         VAR_20->sc_handle, VAR_20->sc_wrofs + VAR_25,
         VAR_21.x32 + VAR_25 / 4, VAR_29 / 4);
     break;
    }

    FUNC_13(VAR_20, VAR_20->sc_wrofs + VAR_25,
        VAR_7);

    FUNC_16(VAR_23);

    VAR_24 = FUNC_12(VAR_20, VAR_20->sc_wrofs + VAR_25,
        VAR_30, VAR_14);
    if (VAR_24 != 0)
     goto out;
   }
   goto out;
  default:

   break;
  }

 }


 for (VAR_25 = 0; VAR_25 < VAR_20->sc_wrbufsz; VAR_25 += VAR_20->sc_width) {


  if (!VAR_27) {
   switch (VAR_20->sc_width) {
   case 1:
    if(*(VAR_21.x8 + VAR_25) == *(VAR_22.x8 + VAR_25))
     continue;
    break;
   case 2:
    if(*(VAR_21.x16 + VAR_25 / 2) == *(VAR_22.x16 + VAR_25 / 2))
     continue;
    break;
   case 4:
    if(*(VAR_21.x32 + VAR_25 / 4) == *(VAR_22.x32 + VAR_25 / 4))
     continue;
    break;
   }
  }






  VAR_23 = FUNC_15();

  VAR_30 = FUNC_18();
  switch (VAR_20->sc_cmdset) {
  case 129:
  case 128:
   FUNC_13(VAR_20, VAR_20->sc_wrofs + VAR_25, VAR_8);
   break;
  case 130:
  case 131:
   FUNC_8(VAR_20, 0, VAR_0, VAR_4);
   break;
  }
  switch (VAR_20->sc_width) {
  case 1:
   FUNC_2(VAR_20->sc_tag, VAR_20->sc_handle,
       VAR_20->sc_wrofs + VAR_25, *(VAR_21.x8 + VAR_25));
   break;
  case 2:
   FUNC_3(VAR_20->sc_tag, VAR_20->sc_handle,
       VAR_20->sc_wrofs + VAR_25, *(VAR_21.x16 + VAR_25 / 2));
   break;
  case 4:
   FUNC_4(VAR_20->sc_tag, VAR_20->sc_handle,
       VAR_20->sc_wrofs + VAR_25, *(VAR_21.x32 + VAR_25 / 4));
   break;
  }

  FUNC_16(VAR_23);

  if (VAR_20->sc_cmdset == 131 ||
      VAR_20->sc_cmdset == 130) {
   for (VAR_26 = 0; VAR_26 < VAR_3; ++VAR_26) {
    switch (VAR_20->sc_width) {
    case 1:
     VAR_32 = *(VAR_21.x8 + VAR_25);
     break;
    case 2:
     VAR_32 = *(VAR_21.x16 + VAR_25 / 2);
     break;
    case 4:
     VAR_32 = *(VAR_21.x32 + VAR_25 / 4);
     break;
    }

    if (FUNC_10(VAR_20, VAR_20->sc_wrofs + VAR_25) == VAR_32)
     break;

    FUNC_0(10);
   }
   if (VAR_26 == VAR_3) {
    FUNC_17("\nCFI Program Verify time out error\n");
    VAR_24 = VAR_18;
    goto out;
   }
  } else {
   VAR_24 = FUNC_12(VAR_20, VAR_20->sc_wrofs, VAR_30,
      VAR_16);
   if (VAR_24)
    goto out;
  }
 }



 out:
 FUNC_11(VAR_20);


 switch (VAR_20->sc_cmdset) {
 case 129:
 case 128:
  FUNC_13(VAR_20, VAR_20->sc_wrofs, VAR_11);
  FUNC_13(VAR_20, VAR_20->sc_wrofs, VAR_10);
  FUNC_13(VAR_20, VAR_20->sc_wrofs, VAR_9);
  break;
 }
 return (VAR_24);
}
