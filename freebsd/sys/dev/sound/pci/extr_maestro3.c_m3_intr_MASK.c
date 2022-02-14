
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct sc_rchinfo {int ptr; int bufsize; int prevptr; int channel; int buffer; scalar_t__ active; } ;
struct sc_pchinfo {int ptr; int bufsize; int prevptr; int channel; int buffer; scalar_t__ active; } ;
struct sc_info {int pch_cnt; int rch_cnt; struct sc_rchinfo* rch; struct sc_pchinfo* pch; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sc_info*) ;
 int FUNC_2 (struct sc_info*) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct sc_pchinfo*) ;
 int FUNC_6 (struct sc_rchinfo*) ;
 int FUNC_7 (struct sc_info*,int ) ;
 int FUNC_8 (struct sc_info*,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(void *VAR_9)
{
 struct sc_info *VAR_10 = (struct sc_info *)VAR_9;
 struct sc_pchinfo *VAR_11;
 struct sc_rchinfo *VAR_12;
 u_int32_t VAR_13, VAR_14, VAR_15, VAR_16;

 FUNC_0(VAR_7, ("m3_intr\n"));

 FUNC_1(VAR_10);
 VAR_13 = FUNC_7(VAR_10, VAR_4);
 if (!VAR_13) {
  FUNC_2(VAR_10);
  return;
 }

 FUNC_8(VAR_10, VAR_4, 0xff);

 if (VAR_13 & VAR_5) {
  u_int8_t VAR_17;

  VAR_17 = FUNC_7(VAR_10, VAR_6);
  switch (VAR_17) {
  case 0x99:
   FUNC_9(VAR_10->dev);
   break;
  case 0xaa:
   FUNC_10(VAR_10->dev, 1, 1);
   break;
  case 0x66:
   FUNC_10(VAR_10->dev, -1, -1);
   break;
  case 0x88:
   break;
  default:
   FUNC_4(VAR_10->dev, "Unknown HWVOL event\n");
  }
  FUNC_8(VAR_10, VAR_6, 0x88);

 }

 if (VAR_13 & VAR_2) {
  VAR_14 = FUNC_7(VAR_10, VAR_0);
  if (!(VAR_14 & VAR_8)) {
   VAR_14 = FUNC_7(VAR_10, VAR_1);
   if (VAR_14 & VAR_3) {
    FUNC_8(VAR_10, VAR_1,
     VAR_3);

    goto m3_handle_channel_intr;
   }
  }
 }

 goto m3_handle_channel_intr_out;

m3_handle_channel_intr:
 for (VAR_15=0 ; VAR_15<VAR_10->pch_cnt ; VAR_15++) {
  VAR_11 = &VAR_10->pch[VAR_15];
  if (VAR_11->active) {
   VAR_11->ptr = FUNC_5(VAR_11);
   VAR_16 = VAR_11->bufsize + VAR_11->ptr - VAR_11->prevptr;
   VAR_16 %= VAR_11->bufsize;
   if (VAR_16 < FUNC_11(VAR_11->buffer))
    continue;
   VAR_11->prevptr = VAR_11->ptr;
   FUNC_2(VAR_10);
   FUNC_3(VAR_11->channel);
   FUNC_1(VAR_10);
  }
 }
 for (VAR_15=0 ; VAR_15<VAR_10->rch_cnt ; VAR_15++) {
  VAR_12 = &VAR_10->rch[VAR_15];
  if (VAR_12->active) {
   VAR_12->ptr = FUNC_6(VAR_12);
   VAR_16 = VAR_12->bufsize + VAR_12->ptr - VAR_12->prevptr;
   VAR_16 %= VAR_12->bufsize;
   if (VAR_16 < FUNC_11(VAR_12->buffer))
    continue;
   VAR_12->prevptr = VAR_12->ptr;
   FUNC_2(VAR_10);
   FUNC_3(VAR_12->channel);
   FUNC_1(VAR_10);
  }
 }

m3_handle_channel_intr_out:
 FUNC_2(VAR_10);
}
