
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef TYPE_1__* hcb_p ;
struct TYPE_4__ {int features; int mmio_ba; int scripta_ba; int scriptb_ba; int hcb_ba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;


 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,...) ;
 char* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5 (hcb_p VAR_8, u32 *VAR_9, int VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u32 *VAR_16, *VAR_17;
 int VAR_18;

 VAR_17 = VAR_9;
 VAR_16 = VAR_9 + VAR_10/4;

 while (VAR_17 < VAR_16) {

  VAR_11 = *VAR_17;







  if (VAR_11 == 0) {
   FUNC_3 ("%s: ERROR0 IN SCRIPT at %d.\n",
    FUNC_4(VAR_8), (int) (VAR_17-VAR_9));
   FUNC_0 (10000);
   ++VAR_17;
   continue;
  }





  if (VAR_11 == VAR_6) {
   *VAR_17++ = 0;
   continue;
  }

  if (VAR_0 & VAR_1)
   FUNC_3 ("%d:  <%x>\n", (int) (VAR_17-VAR_9),
    (unsigned)VAR_11);




  switch (VAR_11 >> 28) {
  case 0xf:



   VAR_18 = 0;
   break;
  case 0xe:



   VAR_18 = 1;
   break;
  case 0xc:



   VAR_18 = 2;
   VAR_14 = VAR_17[1];
   VAR_15 = VAR_17[2];
   if ((VAR_14 ^ VAR_15) & 3) {
    FUNC_3 ("%s: ERROR1 IN SCRIPT at %d.\n",
     FUNC_4(VAR_8), (int) (VAR_17-VAR_9));
    FUNC_0 (10000);
   }




   if ((VAR_11 & VAR_7) &&
       !(VAR_8->features & VAR_2)) {
    VAR_11 = (VAR_11 & ~VAR_7);
   }
   break;
  case 0x0:



   if (!(VAR_8->features & VAR_3))
    VAR_11 = (VAR_11 | VAR_4);
   VAR_18 = 1;
   break;
  case 0x1:



   if (!(VAR_8->features & VAR_3))
    VAR_11 = (VAR_11 | VAR_4);
   VAR_18 = 0;
   break;
  case 0x8:




   if (VAR_11 & 0x00800000)
    VAR_18 = 0;
   else if ((VAR_11 & 0xf8400000) == 0x80400000)
    VAR_18 = 2;
   else
    VAR_18 = 1;
   break;
  case 0x4:
  case 0x5:
  case 0x6:
  case 0x7:
   VAR_18 = 1;
   break;
  default:
   VAR_18 = 0;
   break;
  }




  *VAR_17++ = FUNC_1(VAR_11);





  if (!VAR_18) {
   *VAR_17 = FUNC_1(*VAR_17);
   ++VAR_17;
   continue;
  }




  while (VAR_18--) {
   VAR_13 = *VAR_17;

   switch (VAR_13 & VAR_5) {
   case 129:
    VAR_12 = (VAR_13 & ~VAR_5) + VAR_8->mmio_ba;
    break;
   case 131:
    VAR_12 = (VAR_13 & ~VAR_5) + VAR_8->scripta_ba;
    break;
   case 130:
    VAR_12 = (VAR_13 & ~VAR_5) + VAR_8->scriptb_ba;
    break;
   case 128:
    VAR_12 = (VAR_13 & ~VAR_5) + VAR_8->hcb_ba;
    break;
   case 0:





    if (VAR_13 == 0) {
     VAR_12 = VAR_13;
     break;
    }

   default:
    VAR_12 = 0;
    FUNC_2("sym_fw_bind_script: "
          "weird relocation %x\n", VAR_13);
    break;
   }

   *VAR_17++ = FUNC_1(VAR_12);
  }
 }
}
