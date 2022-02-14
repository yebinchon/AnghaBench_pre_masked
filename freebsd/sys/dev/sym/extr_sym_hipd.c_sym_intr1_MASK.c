
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
typedef TYPE_1__* hcb_p ;
struct TYPE_14__ {int istat_sem; int rv_ctest3; int path; } ;


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
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_6 (int ) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int,int) ;
 char* FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static void FUNC_20 (hcb_p VAR_34)
{
 u_char VAR_35, VAR_36;
 u_char VAR_37;
 u_short VAR_38;

 FUNC_6(VAR_13);
 VAR_35 = FUNC_0 (VAR_30);
 if (VAR_35 & VAR_11) {
  FUNC_4 (VAR_30, (VAR_35 & VAR_19) | VAR_11 | VAR_34->istat_sem);
  VAR_35 = FUNC_0 (VAR_30);
  if (VAR_5 & VAR_6) FUNC_7 ("F ");
  (void)FUNC_18 (VAR_34);
 }

 if (!(VAR_35 & (VAR_20|VAR_7)))
  return;
 VAR_38 = 0;
 VAR_37 = 0;
 VAR_36 = VAR_35;
 do {
  if (VAR_36 & VAR_20)
   VAR_38 |= FUNC_2 (VAR_32);
  if (VAR_36 & VAR_7)
   VAR_37 |= FUNC_0 (VAR_29);
  VAR_36 = FUNC_0 (VAR_30);
  VAR_35 |= VAR_36;
 } while (VAR_36 & (VAR_20|VAR_7));

 if (VAR_5 & VAR_6)
  FUNC_7 ("<%d|%x:%x|%x:%x>",
   (int)FUNC_0(VAR_31),
   VAR_37,VAR_38,
   (unsigned)FUNC_1(VAR_28),
   (unsigned)FUNC_1(VAR_27));




 FUNC_3();
 if (!(VAR_38 & (VAR_23|VAR_8|VAR_9|VAR_18|VAR_25|VAR_17|VAR_16)) &&
     !(VAR_37 & (VAR_14|VAR_1|VAR_0|VAR_10))) {
  if (VAR_38 & VAR_15) FUNC_10 (VAR_34, VAR_38);
  else if (VAR_38 & VAR_12) FUNC_9 (VAR_34);
  else if (VAR_37 & VAR_21) FUNC_12 (VAR_34);
  else if (VAR_37 & VAR_22) FUNC_5 ();
  else goto unknown_int;
  return;
 }
 if (VAR_38 & VAR_16) {
  FUNC_19(VAR_34->path);
  FUNC_7("SCSI BUS reset detected.\n");
  FUNC_8 (VAR_34, 1);
  return;
 }

 FUNC_4 (VAR_26, VAR_34->rv_ctest3 | VAR_3);
 FUNC_4 (VAR_33, VAR_24|VAR_4);

 if (!(VAR_38 & (VAR_8|VAR_9|VAR_18)) &&
     !(VAR_37 & (VAR_14|VAR_1|VAR_0|VAR_10))) {
  if (VAR_38 & VAR_17) FUNC_11 (VAR_34);
  else if (VAR_38 & VAR_23) FUNC_13 (VAR_34);
  else if (VAR_38 & VAR_25) FUNC_14 (VAR_34);
  else goto unknown_int;
  return;
 }
 FUNC_15(VAR_34, VAR_38, VAR_37);

 if ((VAR_38 & (VAR_8|VAR_9|VAR_18)) ||
  (VAR_37 & (VAR_14|VAR_1|VAR_0|VAR_10))) {
  FUNC_17(VAR_34);
  return;
 }

unknown_int:




 FUNC_7( "%s: unknown interrupt(s) ignored, "
  "ISTAT=0x%x DSTAT=0x%x SIST=0x%x\n",
  FUNC_16(VAR_34), VAR_35, VAR_37, VAR_38);
}
