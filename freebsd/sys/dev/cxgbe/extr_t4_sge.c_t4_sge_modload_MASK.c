
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (char*,int,...) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_21 ;

void
FUNC_7(void)
{

 if (VAR_14 < 0 || VAR_14 > 7) {
  FUNC_2("Invalid hw.cxgbe.fl_pktshift value (%d),"
      " using 0 instead.\n", VAR_14);
  VAR_14 = 0;
 }

 if (VAR_17 != 64 && VAR_17 != 128) {
  int VAR_22;


  VAR_22 = VAR_10 > 64 ? 128 : 64;



  if (VAR_17 != -1) {
   FUNC_2("Invalid hw.cxgbe.spg_len value (%d),"
       " using %d instead.\n", VAR_17, VAR_22);
  }
  VAR_17 = VAR_22;
 }

 if (VAR_9 < -1 || VAR_9 > 1) {
  FUNC_2("Invalid hw.cxgbe.cong_drop value (%d),"
      " using 0 instead.\n", VAR_9);
  VAR_9 = 0;
 }

 if (VAR_21 != 1 && (VAR_21 < 3 || VAR_21 > 17)) {
  FUNC_2("Invalid hw.cxgbe.tscale value (%d),"
      " using 1 instead.\n", VAR_21);
  VAR_21 = 1;
 }

 VAR_12 = FUNC_0(VAR_8);
 VAR_13 = FUNC_0(VAR_8);
 FUNC_1(VAR_12);
 FUNC_1(VAR_13);

 FUNC_3();
 FUNC_4(VAR_2, VAR_15);
 FUNC_4(VAR_3, VAR_15);
 FUNC_4(VAR_5, VAR_16);
 FUNC_4(VAR_4, VAR_18);




 FUNC_5(VAR_6, VAR_19);
 FUNC_5(VAR_7, VAR_20);
}
