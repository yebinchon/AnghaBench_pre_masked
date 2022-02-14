
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
typedef int u32 ;
typedef TYPE_1__* hcb_p ;
struct TYPE_4__ {int scripta_ba; int scripta_sz; int scriptb_ba; int scriptb_sz; int device; scalar_t__ scriptb0; scalar_t__ scripta0; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
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
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;
 char* FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(hcb_p VAR_11, u_short VAR_12, u_char VAR_13)
{
 u32 VAR_14;
 int VAR_15;
 int VAR_16;
 char *VAR_17;
 u_char *VAR_18;
 int VAR_19;

 VAR_14 = FUNC_2 (VAR_4);

 if (VAR_14 > VAR_11->scripta_ba &&
   VAR_14 <= VAR_11->scripta_ba + VAR_11->scripta_sz) {
  VAR_15 = VAR_14 - VAR_11->scripta_ba;
  VAR_16 = VAR_11->scripta_sz;
  VAR_18 = (u_char *) VAR_11->scripta0;
  VAR_17 = "scripta";
 }
 else if (VAR_11->scriptb_ba < VAR_14 &&
   VAR_14 <= VAR_11->scriptb_ba + VAR_11->scriptb_sz) {
  VAR_15 = VAR_14 - VAR_11->scriptb_ba;
  VAR_16 = VAR_11->scriptb_sz;
  VAR_18 = (u_char *) VAR_11->scriptb0;
  VAR_17 = "scriptb";
 } else {
  VAR_15 = VAR_14;
  VAR_16 = 0;
  VAR_18 = ((void*)0);
  VAR_17 = "mem";
 }

 FUNC_5 ("%s:%d: ERROR (%x:%x) (%x-%x-%x) (%x/%x) @ (%s %x:%08x).\n",
  FUNC_7 (VAR_11), (unsigned)FUNC_0 (VAR_8)&0x0f, VAR_13, VAR_12,
  (unsigned)FUNC_0 (VAR_9), (unsigned)FUNC_0 (VAR_5),
  (unsigned)FUNC_0 (VAR_6), (unsigned)FUNC_0 (VAR_10),
  (unsigned)FUNC_0 (VAR_7), VAR_17, VAR_15,
  (unsigned)FUNC_2 (VAR_3));

 if (((VAR_15 & 3) == 0) &&
     (unsigned)VAR_15 < VAR_16) {
  FUNC_5 ("%s: script cmd = %08x\n", FUNC_7(VAR_11),
   FUNC_6((int) *(u32 *)(VAR_18 + VAR_15)));
 }

        FUNC_5 ("%s: regdump:", FUNC_7(VAR_11));
        for (VAR_19=0; VAR_19<24;VAR_19++)
            FUNC_5 (" %02x", (unsigned)FUNC_1(VAR_19));
        FUNC_5 (".\n");




 if (VAR_13 & (VAR_1|VAR_0)) {
  u_short VAR_20;
  VAR_20 = FUNC_3(VAR_11->device, VAR_2, 2);
  if (VAR_20 & 0xf900) {
   FUNC_4(VAR_11->device, VAR_2, VAR_20, 2);
   FUNC_5("%s: PCI STATUS = 0x%04x\n",
    FUNC_7(VAR_11), VAR_20 & 0xf900);
  }
 }
}
