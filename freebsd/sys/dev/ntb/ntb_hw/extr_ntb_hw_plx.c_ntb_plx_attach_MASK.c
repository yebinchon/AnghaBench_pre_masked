
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ntb_plx_softc {int ntx; int link; int conf_rid; int port; int alut; size_t mw_count; int b2b_mw; int b2b_off; int split; int spad_offp2; int spad_off2; int spad_count1; int spad_count2; int * conf_res; scalar_t__ spad_offp1; scalar_t__ spad_off1; struct ntb_plx_mw_info* mw_info; int dev; } ;
struct ntb_plx_mw_info {int mw_bar; int mw_rid; int mw_size; int mw_64bit; TYPE_1__* splits; int * mw_res; int mw_vbase; int mw_pbase; } ;
typedef int device_t ;
typedef int buf ;
struct TYPE_2__ {int mw_map_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ntb_plx_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,int*) ;
 int VAR_8 ;
 void* FUNC_4 (int ,int ,int*,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,int) ;
 char* FUNC_7 (int ) ;
 struct ntb_plx_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*,int,char*,char*,int) ;

__attribute__((used)) static int
FUNC_20(device_t VAR_9)
{
 struct ntb_plx_softc *VAR_10 = FUNC_8(VAR_9);
 struct ntb_plx_mw_info *VAR_11;
 int VAR_12 = 0, VAR_13, VAR_14;
 uint32_t VAR_15;
 char VAR_16[32];


 VAR_10->dev = VAR_9;
 VAR_15 = FUNC_15(VAR_9, 0xc8c, 4);
 VAR_10->ntx = (VAR_15 & 1) != 0;
 VAR_10->link = (VAR_15 & 0x80000000) != 0;


 VAR_10->conf_rid = FUNC_0(0);
 VAR_10->conf_res = FUNC_4(VAR_9, VAR_7,
     &VAR_10->conf_rid, VAR_6);
 if (VAR_10->conf_res == ((void*)0)) {
  FUNC_10(VAR_9, "Can't allocate configuration BAR.\n");
  return (VAR_0);
 }


 VAR_15 = FUNC_5(VAR_10->conf_res, 0x360);
 VAR_10->port = (VAR_15 >> ((VAR_10->ntx == 0) ? 8 : 16)) & 0x1f;


 VAR_15 >>= 30;
 VAR_10->alut = (VAR_15 == 0x3) ? 1 : ((VAR_15 & (1 << VAR_10->ntx)) ? 2 : 0);
 if (VAR_10->alut)
  FUNC_10(VAR_9, "%u A-LUT entries\n", 128 * VAR_10->alut);


 VAR_10->mw_count = 0;
 for (VAR_13 = 2; VAR_13 <= 5; VAR_13++) {
  VAR_11 = &VAR_10->mw_info[VAR_10->mw_count];
  VAR_11->mw_bar = VAR_13;
  VAR_11->mw_rid = FUNC_0(VAR_11->mw_bar);
  VAR_11->mw_res = FUNC_4(VAR_9, VAR_7,
      &VAR_11->mw_rid, VAR_6);
  if (VAR_11->mw_res == ((void*)0))
   continue;
  VAR_11->mw_pbase = FUNC_17(VAR_11->mw_res);
  VAR_11->mw_size = FUNC_16(VAR_11->mw_res);
  VAR_11->mw_vbase = FUNC_18(VAR_11->mw_res);
  for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
   VAR_11->splits[VAR_14].mw_map_mode = VAR_8;
  VAR_10->mw_count++;


  VAR_15 = FUNC_15(VAR_9, FUNC_0(VAR_11->mw_bar), 4);
  if ((VAR_15 & VAR_2) == VAR_1) {
   VAR_11->mw_64bit = 1;
   VAR_13++;
  }
 }


 VAR_13 = 1;
 FUNC_19(VAR_16, sizeof(VAR_16), "hint.%s.%d.b2b", FUNC_7(VAR_9),
     FUNC_9(VAR_9));
 FUNC_3(VAR_16, &VAR_13);
 if (VAR_10->link) {
  FUNC_10(VAR_9, "NTB-to-Root Port mode (Link Interface)\n");
  VAR_10->b2b_mw = -1;
 } else if (VAR_13 == 0) {
  FUNC_10(VAR_9, "NTB-to-Root Port mode (Virtual Interface)\n");
  VAR_10->b2b_mw = -1;
 } else {
  FUNC_10(VAR_9, "NTB-to-NTB (back-to-back) mode\n");


  if (VAR_10->mw_count == 0) {
   FUNC_10(VAR_9, "No memory window BARs enabled.\n");
   VAR_12 = VAR_0;
   goto out;
  }
  VAR_10->b2b_mw = VAR_10->mw_count - 1;


  VAR_11 = &VAR_10->mw_info[VAR_10->b2b_mw];
  if (VAR_11->mw_size >= 2 * 1024 * 1024)
   VAR_10->b2b_off = VAR_11->mw_size / 2;
  else
   VAR_10->b2b_off = 0;
 }

 FUNC_19(VAR_16, sizeof(VAR_16), "hint.%s.%d.split", FUNC_7(VAR_9),
     FUNC_9(VAR_9));
 FUNC_3(VAR_16, &VAR_10->split);
 if (VAR_10->split > 7) {
  FUNC_10(VAR_9, "Split value is too high (%u)\n", VAR_10->split);
  VAR_10->split = 0;
 } else if (VAR_10->split > 0 && VAR_10->alut == 0) {
  FUNC_10(VAR_9, "Can't split with disabled A-LUT\n");
  VAR_10->split = 0;
 } else if (VAR_10->split > 0 && (VAR_10->mw_count == 0 || VAR_10->mw_info[0].mw_bar != 2)) {
  FUNC_10(VAR_9, "Can't split disabled BAR2\n");
  VAR_10->split = 0;
 } else if (VAR_10->split > 0 && (VAR_10->b2b_mw == 0 && VAR_10->b2b_off == 0)) {
  FUNC_10(VAR_9, "Can't split BAR2 consumed by B2B\n");
  VAR_10->split = 0;
 } else if (VAR_10->split > 0) {
  FUNC_10(VAR_9, "Splitting BAR2 into %d memory windows\n",
      1 << VAR_10->split);
 }






 VAR_10->spad_offp1 = VAR_10->spad_off1 = FUNC_1(VAR_10) + 0xc6c;
 VAR_10->spad_offp2 = VAR_10->spad_off2 = FUNC_2(VAR_10->ntx * 8) + 0x20c;
 if (VAR_10->b2b_mw >= 0) {

  VAR_10->spad_count1 = VAR_4;
  FUNC_6(VAR_10->conf_res, VAR_10->spad_off2, 0x12345678);
  if (FUNC_5(VAR_10->conf_res, VAR_10->spad_off2) == 0x12345678)
   VAR_10->spad_count2 = VAR_5;
 } else {

  if (VAR_10->link) {
   VAR_10->spad_off1 += VAR_4 / 2 * 4;
   VAR_10->spad_off2 += VAR_5 / 2 * 4;
  } else {
   VAR_10->spad_offp1 += VAR_4 / 2 * 4;
   VAR_10->spad_offp2 += VAR_5 / 2 * 4;
  }
  VAR_10->spad_count1 = VAR_4 / 2;
  FUNC_6(VAR_10->conf_res, VAR_10->spad_off2, 0x12345678);
  if (FUNC_5(VAR_10->conf_res, VAR_10->spad_off2) == 0x12345678)
   VAR_10->spad_count2 = VAR_5 / 2;
 }


 FUNC_12(VAR_9);


 VAR_12 = FUNC_13(VAR_9);
 if (VAR_12)
  goto out;


 VAR_12 = FUNC_14(VAR_9);

out:
 if (VAR_12 != 0)
  FUNC_11(VAR_9);
 return (VAR_12);
}
