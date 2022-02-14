
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_scan_leb {scalar_t__ ecc; } ;
struct ubifs_info {int leb_size; int min_io_size; } ;
struct ubifs_ch {int len; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 struct ubifs_scan_leb* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ubifs_scan_leb*) ;


 int VAR_2 ;
 int VAR_3 ;

 int FUNC_3 (struct ubifs_info*,void**,int,int*,int*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (char*,int,int,int) ;
 scalar_t__ FUNC_8 (struct ubifs_scan_leb*,int*) ;
 int FUNC_9 (void*,int) ;
 int FUNC_10 (struct ubifs_info*,struct ubifs_scan_leb*,int) ;
 int FUNC_11 (void*,int) ;
 scalar_t__ FUNC_12 (struct ubifs_info*,void*,int) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct ubifs_info*,void*,int,int,int) ;
 int FUNC_15 (struct ubifs_info*,struct ubifs_scan_leb*,void*,int) ;
 int FUNC_16 (struct ubifs_info*,struct ubifs_scan_leb*,int,int) ;
 int FUNC_17 (char*,int,...) ;
 int FUNC_18 (struct ubifs_info*,void*,int,int,int,int) ;
 int FUNC_19 (struct ubifs_scan_leb*) ;
 int FUNC_20 (struct ubifs_info*,int,int,void*) ;
 struct ubifs_scan_leb* FUNC_21 (struct ubifs_info*,int,int,void*) ;

struct ubifs_scan_leb *FUNC_22(struct ubifs_info *VAR_4, int VAR_5,
      int VAR_6, void *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10 = VAR_4->leb_size - VAR_6, VAR_11 = 0, VAR_12 = 1;
 int VAR_13 = 0, VAR_14 = VAR_6;
 struct ubifs_scan_leb *VAR_15;
 void *VAR_16 = VAR_7 + VAR_6;

 FUNC_6("%d:%d", VAR_5, VAR_6);

 VAR_15 = FUNC_21(VAR_4, VAR_5, VAR_6, VAR_7);
 if (FUNC_2(VAR_15))
  return VAR_15;

 if (VAR_15->ecc)
  VAR_11 = 1;

 while (VAR_10 >= 8) {
  int VAR_17;

  FUNC_7("look at LEB %d:%d (%d bytes left)",
    VAR_5, VAR_6, VAR_10);

  FUNC_4();





  VAR_17 = FUNC_18(VAR_4, VAR_16, VAR_10, VAR_5, VAR_6, VAR_12);

  if (VAR_17 == VAR_2) {

   struct ubifs_ch *VAR_18 = VAR_16;
   int VAR_19;

   VAR_9 = FUNC_15(VAR_4, VAR_15, VAR_16, VAR_6);
   if (VAR_9)
    goto error;
   VAR_19 = FUNC_0(FUNC_13(VAR_18->len), 8);
   VAR_6 += VAR_19;
   VAR_16 += VAR_19;
   VAR_10 -= VAR_19;
   continue;
  }

  if (VAR_17 > 0) {

   VAR_6 += VAR_17;
   VAR_16 += VAR_17;
   VAR_10 -= VAR_17;
   continue;
  }

  if (VAR_17 == VAR_3) {
   if (!FUNC_11(VAR_16, VAR_10)) {
    if (!FUNC_12(VAR_4, VAR_16, VAR_6))
     break;
    FUNC_3(VAR_4, &VAR_16, VAR_5, &VAR_6, &VAR_10);
    VAR_11 = 1;
   }
   VAR_13 = 1;
   break;
  }

  if (VAR_17 == 128 || VAR_17 == 130)
   if (FUNC_12(VAR_4, VAR_16, VAR_6)) {
    FUNC_3(VAR_4, &VAR_16, VAR_5, &VAR_6, &VAR_10);
    VAR_11 = 1;
    VAR_13 = 1;
    break;
   }

  if (VAR_17 == 129)
   if (FUNC_14(VAR_4, VAR_16, VAR_10, VAR_5, VAR_6)) {
    FUNC_3(VAR_4, &VAR_16, VAR_5, &VAR_6, &VAR_10);
    VAR_11 = 1;
    VAR_13 = 1;
    break;
   }

  if (VAR_12) {

   VAR_12 = 0;
   continue;
  }

  switch (VAR_17) {
  case 128:
   FUNC_5("garbage");
   goto corrupted;
  case 129:
  case 130:
   FUNC_5("bad node");
   goto corrupted;
  default:
   FUNC_5("unknown");
   VAR_9 = -VAR_0;
   goto error;
  }
 }

 if (!VAR_13 && !FUNC_11(VAR_16, VAR_10)) {
  if (FUNC_12(VAR_4, VAR_16, VAR_6)) {
   FUNC_3(VAR_4, &VAR_16, VAR_5, &VAR_6, &VAR_10);
   VAR_11 = 1;
  } else {
   int VAR_20 = FUNC_9(VAR_16, VAR_10);

   FUNC_17("corrupt empty space LEB %d:%d, corruption "
      "starts at %d", VAR_5, VAR_6, VAR_20);

   VAR_6 = VAR_20;
   VAR_16 += VAR_20;
   goto corrupted;
  }
 }


 if (VAR_8 && FUNC_8(VAR_15, &VAR_6)) {
  VAR_16 = VAR_7 + VAR_6;
  VAR_10 = VAR_4->leb_size - VAR_6;
  FUNC_3(VAR_4, &VAR_16, VAR_5, &VAR_6, &VAR_10);
  VAR_11 = 1;
 }

 if (VAR_6 % VAR_4->min_io_size) {
  FUNC_3(VAR_4, &VAR_16, VAR_5, &VAR_6, &VAR_10);
  VAR_11 = 1;
 }

 FUNC_16(VAR_4, VAR_15, VAR_5, VAR_6);

 if (VAR_11) {
  VAR_9 = FUNC_10(VAR_4, VAR_15, VAR_14);
  if (VAR_9)
   goto error;
 }

 return VAR_15;

corrupted:
 FUNC_20(VAR_4, VAR_5, VAR_6, VAR_16);
 VAR_9 = -VAR_1;
error:
 FUNC_17("LEB %d scanning failed", VAR_5);
 FUNC_19(VAR_15);
 return FUNC_1(VAR_9);
}
