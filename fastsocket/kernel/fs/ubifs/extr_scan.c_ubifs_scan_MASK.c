
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ubifs_scan_leb {int dummy; } ;
struct ubifs_info {int leb_size; int min_io_size; } ;
struct ubifs_ch {int len; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 struct ubifs_scan_leb* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ubifs_scan_leb*) ;



 int VAR_2 ;

 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ubifs_info const*,struct ubifs_scan_leb*,void*,int) ;
 int FUNC_8 (struct ubifs_info const*,struct ubifs_scan_leb*,int,int) ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 (struct ubifs_info const*,void*,int,int,int,int) ;
 int FUNC_11 (struct ubifs_scan_leb*) ;
 int FUNC_12 (struct ubifs_info const*,int,int,void*) ;
 struct ubifs_scan_leb* FUNC_13 (struct ubifs_info const*,int,int,void*) ;

struct ubifs_scan_leb *FUNC_14(const struct ubifs_info *VAR_3, int VAR_4,
      int VAR_5, void *VAR_6, int VAR_7)
{
 void *VAR_8 = VAR_6 + VAR_5;
 int VAR_9, VAR_10 = VAR_3->leb_size - VAR_5;
 struct ubifs_scan_leb *VAR_11;

 VAR_11 = FUNC_13(VAR_3, VAR_4, VAR_5, VAR_6);
 if (FUNC_2(VAR_11))
  return VAR_11;

 while (VAR_10 >= 8) {
  struct ubifs_ch *VAR_12 = VAR_8;
  int VAR_13, VAR_14;

  FUNC_5("look at LEB %d:%d (%d bytes left)",
    VAR_4, VAR_5, VAR_10);

  FUNC_3();

  VAR_14 = FUNC_10(VAR_3, VAR_8, VAR_10, VAR_4, VAR_5, VAR_7);
  if (VAR_14 > 0) {

   VAR_5 += VAR_14;
   VAR_8 += VAR_14;
   VAR_10 -= VAR_14;
   continue;
  }

  if (VAR_14 == VAR_2)

   break;

  switch (VAR_14) {
  case 128:
   FUNC_4("garbage");
   goto corrupted;
  case 129:
   break;
  case 130:
  case 131:
   FUNC_4("bad node");
   goto corrupted;
  default:
   FUNC_4("unknown");
   VAR_9 = -VAR_0;
   goto error;
  }

  VAR_9 = FUNC_7(VAR_3, VAR_11, VAR_8, VAR_5);
  if (VAR_9)
   goto error;

  VAR_13 = FUNC_0(FUNC_6(VAR_12->len), 8);
  VAR_5 += VAR_13;
  VAR_8 += VAR_13;
  VAR_10 -= VAR_13;
 }

 if (VAR_5 % VAR_3->min_io_size) {
  if (!VAR_7)
   FUNC_9("empty space starts at non-aligned offset %d",
      VAR_5);
  goto corrupted;;
 }

 FUNC_8(VAR_3, VAR_11, VAR_4, VAR_5);

 for (; VAR_10 > 4; VAR_5 += 4, VAR_8 = VAR_8 + 4, VAR_10 -= 4)
  if (*(uint32_t *)VAR_8 != 0xffffffff)
   break;
 for (; VAR_10; VAR_5++, VAR_8++, VAR_10--)
  if (*(uint8_t *)VAR_8 != 0xff) {
   if (!VAR_7)
    FUNC_9("corrupt empty space at LEB %d:%d",
       VAR_4, VAR_5);
   goto corrupted;
  }

 return VAR_11;

corrupted:
 if (!VAR_7) {
  FUNC_12(VAR_3, VAR_4, VAR_5, VAR_8);
  FUNC_9("LEB %d scanning failed", VAR_4);
 }
 VAR_9 = -VAR_1;
 FUNC_11(VAR_11);
 return FUNC_1(VAR_9);

error:
 FUNC_9("LEB %d scanning failed, error %d", VAR_4, VAR_9);
 FUNC_11(VAR_11);
 return FUNC_1(VAR_9);
}
