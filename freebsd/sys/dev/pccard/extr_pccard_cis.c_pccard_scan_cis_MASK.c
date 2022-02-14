
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_long ;
typedef int u_int ;
struct resource {int dummy; } ;
struct pccard_tuple {int ptr; int mult; int code; int length; scalar_t__ memh; int memt; } ;
typedef scalar_t__ (* pccard_scan_t ) (struct pccard_tuple*,void*) ;
typedef int int16_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,int,int ) ;

 int VAR_0 ;
 int const VAR_1 ;




 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct resource* FUNC_3 (int ,int ,int*,int,int) ;
 int FUNC_4 (int ,int ,int,struct resource*) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (char*) ;
 void* FUNC_9 (struct pccard_tuple*,int) ;
 char FUNC_10 (struct pccard_tuple*,int) ;
 int FUNC_11 (struct pccard_tuple*,int) ;
 void* FUNC_12 (struct pccard_tuple*,int) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (struct resource*) ;
 int FUNC_15 (struct resource*) ;
 int FUNC_16 (struct resource*) ;
 int FUNC_17 (int) ;
 scalar_t__ FUNC_18 (struct pccard_tuple*,void*) ;
 scalar_t__ FUNC_19 (struct pccard_tuple*,void*) ;
 scalar_t__ FUNC_20 (struct pccard_tuple*,void*) ;
 scalar_t__ FUNC_21 (struct pccard_tuple*,void*) ;
 scalar_t__ FUNC_22 (struct pccard_tuple*,void*) ;
 scalar_t__ FUNC_23 (struct pccard_tuple*,void*) ;

int
FUNC_24(device_t VAR_9, device_t VAR_10, pccard_scan_t VAR_11, void *VAR_12)
{
 struct resource *VAR_13;
 int VAR_14;
 struct pccard_tuple VAR_15;
 int VAR_16;
 int VAR_17;
 u_long VAR_18;
 int VAR_19;
 int VAR_20;



 struct {
  int common;
  u_long addr;
 } VAR_21[256 / 5];
 int VAR_22;

 VAR_22 = 0;
 VAR_14 = 0;
 VAR_13 = FUNC_3(VAR_10, VAR_8, &VAR_14,
     VAR_5, VAR_7 | FUNC_17(64*1024));
 if (VAR_13 == ((void*)0)) {
  FUNC_6(VAR_10, "can't alloc memory to read attributes\n");
  return -1;
 }
 FUNC_0(VAR_9, VAR_10, VAR_8, VAR_14, VAR_3);
 VAR_15.memt = FUNC_15(VAR_13);
 VAR_15.memh = FUNC_14(VAR_13);
 VAR_15.ptr = 0;

 FUNC_2(("cis mem map %#x (resource: %#jx)\n",
     (unsigned int) VAR_15.memh, FUNC_16(VAR_13)));

 VAR_15.mult = 2;

 VAR_16 = 1;
 VAR_17 = 1;
 VAR_18 = 0;

 VAR_19 = 0;
 VAR_20 = 0;

 FUNC_1((VAR_10, "CIS tuple chain:\n"));

 while (1) {
  while (1) {






   if (VAR_15.mult * VAR_15.ptr >= VAR_5 - 1
       - 32 ) {
    FUNC_13("CIS is too long -- truncating\n");
    VAR_15.code = VAR_0;
   } else {

    VAR_15.code = FUNC_9(&VAR_15, VAR_15.ptr);
   }



   if (VAR_15.code == VAR_2) {







    if ((*VAR_11)(&VAR_15, VAR_12)) {
     VAR_22 = 1;
     goto done;
    }
    VAR_15.ptr++;
    continue;
   } else if (VAR_15.code == VAR_0) {
    FUNC_2(("CISTPL_END\n ff\n"));


    if ((*VAR_11)(&VAR_15, VAR_12)) {
     VAR_22 = 1;
     goto done;
    }
    VAR_15.ptr++;
    break;
   }


   VAR_15.length = FUNC_9(&VAR_15, VAR_15.ptr + 1);
   switch (VAR_15.code) {
   case 131:
   case 130:
    if ((*VAR_11)(&VAR_15, VAR_12)) {
     VAR_22 = 1;
     goto done;
    }
    if (VAR_15.length < 4) {
     FUNC_2(("CISTPL_LONGLINK_%s too "
         "short %d\n",
         VAR_17 ? "C" : "A",
         VAR_15.length));
     break;
    }
    VAR_16 = 1;
    VAR_17 = (VAR_15.code ==
        130) ? 1 : 0;
    VAR_18 = FUNC_12(&VAR_15, 0);
    FUNC_2(("CISTPL_LONGLINK_%s %#lx\n",
        VAR_17 ? "C" : "A",
        VAR_18));
    break;
   case 128:
    if ((*VAR_11)(&VAR_15, VAR_12)) {
     VAR_22 = 1;
     goto done;
    }
    VAR_16 = 0;
    FUNC_2(("CISTPL_NO_LINK\n"));
    break;
   case 132:
    if ((*VAR_11)(&VAR_15, VAR_12)) {
     VAR_22 = 1;
     goto done;
    }
    if (VAR_15.length < 5) {
     FUNC_2(("CISTPL_CHECKSUM too "
         "short %d\n", VAR_15.length));
     break;
    } {
     int16_t VAR_23;
     u_long VAR_24, VAR_25;
     u_int VAR_26, VAR_27;
     int VAR_28;

     VAR_23 = (uint16_t)
         FUNC_11(&VAR_15, 0);
     VAR_25 = FUNC_11(&VAR_15, 2);
     VAR_26 = FUNC_10(&VAR_15, 4);

     VAR_24 = VAR_15.ptr + VAR_23;

     FUNC_2(("CISTPL_CHECKSUM addr=%#lx "
         "len=%#lx cksum=%#x",
         VAR_24, VAR_25, VAR_26));





     if ((VAR_24 >= VAR_5) ||
         ((VAR_24 + VAR_25) >=
         VAR_5)) {
      FUNC_2((" skipped, "
          "too distant\n"));
      break;
     }
     VAR_27 = 0;
     for (VAR_28 = 0; VAR_28 < VAR_25; VAR_28++)
      VAR_27 +=
          FUNC_5(VAR_15.memt,
          VAR_15.memh,
          VAR_24 + VAR_15.mult * VAR_28);
     if (VAR_26 != (VAR_27 & 0xff)) {
      FUNC_2((" failed sum=%#x\n",
          VAR_27));
      FUNC_6(VAR_10,
          "CIS checksum failed\n");







     } else {
      FUNC_2((" ok\n"));
     }
    }
    break;
   case 129:
    if (VAR_15.length < 1) {
     FUNC_2(("CISTPL_LONGLINK_MFC too "
         "short %d\n", VAR_15.length));
     break;
    }
    if (((VAR_15.length - 1) % 5) != 0) {
     FUNC_2(("CISTPL_LONGLINK_MFC bogus "
         "length %d\n", VAR_15.length));
     break;
    }




    {
     int VAR_29, VAR_30;







     VAR_30 =
         FUNC_10(&VAR_15, 0);

     FUNC_2(("CISTPL_LONGLINK_MFC %d",
         VAR_30));






     if (VAR_15.length != (VAR_30*5 + 1)) {
      FUNC_2((" bogus length %d\n",
          VAR_15.length));
      break;
     }





     if (VAR_30 >
         FUNC_7(sizeof VAR_21, sizeof VAR_21[0]))
      FUNC_8("CISTPL_LONGLINK_MFC mfc "
          "count would blow stack");
                                        VAR_19 = VAR_30;
     for (VAR_29 = 0; VAR_29 < VAR_19; VAR_29++) {
      VAR_21[VAR_29].common =
          (FUNC_10(&VAR_15,
          1 + 5 * VAR_29) ==
          VAR_6) ?
          1 : 0;
      VAR_21[VAR_29].addr =
          FUNC_12(&VAR_15,
          1 + 5 * VAR_29 + 1);
      FUNC_2((" %s:%#lx",
          VAR_21[VAR_29].common ? "common" :
          "attr", VAR_21[VAR_29].addr));
     }
     FUNC_2(("\n"));
    }





   default:
    {
     if ((*VAR_11)(&VAR_15, VAR_12)) {
      VAR_22 = 1;
      goto done;
     }
    }
    break;
   }
   VAR_15.ptr += 2 + VAR_15.length;
  }
  while (1) {
   if (VAR_16) {
    FUNC_0(VAR_9, VAR_10, VAR_8,
        VAR_14, VAR_17 ?
        VAR_4 : VAR_3);
    FUNC_2(("cis mem map %#x\n",
        (unsigned int) VAR_15.memh));
    VAR_15.mult = VAR_17 ? 1 : 2;
    VAR_15.ptr = VAR_18;
    VAR_16 = 0;
    VAR_17 = 1;
    VAR_18 = 0;
   } else if (VAR_19 && (VAR_20 < VAR_19)) {
    FUNC_0(VAR_9, VAR_10, VAR_8,
        VAR_14, VAR_21[VAR_20].common ?
        VAR_4 : VAR_3);
    FUNC_2(("cis mem map %#x\n",
        (unsigned int) VAR_15.memh));

    VAR_15.mult = VAR_21[VAR_20].common ? 1 : 2;
    VAR_15.ptr = VAR_21[VAR_20].addr;
    VAR_20++;
   } else {
    goto done;
   }


   VAR_15.code = FUNC_9(&VAR_15, VAR_15.ptr);
   if (VAR_15.code != VAR_1) {
    FUNC_2(("CISTPL_LINKTARGET expected, "
        "code %#02x observed\n", VAR_15.code));
    continue;
   }
   VAR_15.length = FUNC_9(&VAR_15, VAR_15.ptr + 1);
   if (VAR_15.length < 3) {
    FUNC_2(("CISTPL_LINKTARGET too short %d\n",
        VAR_15.length));
    continue;
   }
   if ((FUNC_10(&VAR_15, 0) != 'C') ||
       (FUNC_10(&VAR_15, 1) != 'I') ||
       (FUNC_10(&VAR_15, 2) != 'S')) {
    FUNC_2(("CISTPL_LINKTARGET magic "
        "%02x%02x%02x incorrect\n",
        FUNC_10(&VAR_15, 0),
        FUNC_10(&VAR_15, 1),
        FUNC_10(&VAR_15, 2)));
    continue;
   }
   VAR_15.ptr += 2 + VAR_15.length;
   break;
  }
 }

done:
 FUNC_4(VAR_10, VAR_8, VAR_14, VAR_13);

 return (VAR_22);
}
