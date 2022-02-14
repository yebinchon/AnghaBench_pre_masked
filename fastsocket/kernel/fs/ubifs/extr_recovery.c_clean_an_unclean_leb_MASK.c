
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_unclean_leb {int lnum; int endpt; } ;
struct ubifs_info {int min_io_size; int ubi; int sbuf; } ;
struct ubifs_ch {int len; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,void*,int,int ) ;
 int FUNC_5 (int ,int,void*,int,int) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (struct ubifs_info const*,int) ;
 int FUNC_8 (struct ubifs_info const*,void*,int) ;
 int FUNC_9 (struct ubifs_info const*,void*,int,int,int,int) ;
 int FUNC_10 (struct ubifs_info const*,int,int,void*) ;

__attribute__((used)) static int FUNC_11(const struct ubifs_info *VAR_5,
    struct ubifs_unclean_leb *VAR_6, void *VAR_7)
{
 int VAR_8, VAR_9 = VAR_6->lnum, VAR_10 = 0, VAR_11 = VAR_6->endpt, VAR_12 = 1;
 void *VAR_13 = VAR_7;

 FUNC_2("LEB %d len %d", VAR_9, VAR_11);

 if (VAR_11 == 0) {

  VAR_8 = FUNC_7(VAR_5, VAR_9);
  if (VAR_8)
   return VAR_8;
  return 0;
 }

 VAR_8 = FUNC_5(VAR_5->ubi, VAR_9, VAR_13, VAR_10, VAR_11);
 if (VAR_8 && VAR_8 != -VAR_0)
  return VAR_8;

 while (VAR_11 >= 8) {
  int VAR_14;

  FUNC_1();


  VAR_14 = FUNC_9(VAR_5, VAR_13, VAR_11, VAR_9, VAR_10, VAR_12);

  if (VAR_14 == VAR_2) {

   struct ubifs_ch *VAR_15 = VAR_13;
   int VAR_16;

   VAR_16 = FUNC_0(FUNC_3(VAR_15->len), 8);
   VAR_10 += VAR_16;
   VAR_13 += VAR_16;
   VAR_11 -= VAR_16;
   continue;
  }

  if (VAR_14 > 0) {

   VAR_10 += VAR_14;
   VAR_13 += VAR_14;
   VAR_11 -= VAR_14;
   continue;
  }

  if (VAR_14 == VAR_3) {
   FUNC_6("unexpected empty space at %d:%d",
      VAR_9, VAR_10);
   return -VAR_1;
  }

  if (VAR_12) {

   VAR_12 = 0;
   continue;
  }

  FUNC_10(VAR_5, VAR_9, VAR_10, VAR_13);
  return -VAR_1;
 }


 VAR_11 = FUNC_0(VAR_6->endpt, VAR_5->min_io_size);
 if (VAR_11 > VAR_6->endpt) {
  int VAR_17 = VAR_11 - FUNC_0(VAR_6->endpt, 8);

  if (VAR_17 > 0) {
   VAR_13 = VAR_5->sbuf + VAR_11 - VAR_17;
   FUNC_8(VAR_5, VAR_13, VAR_17);
  }
 }


 VAR_8 = FUNC_4(VAR_5->ubi, VAR_9, VAR_7, VAR_11, VAR_4);
 if (VAR_8)
  return VAR_8;

 FUNC_2("cleaned LEB %d", VAR_9);

 return 0;
}
