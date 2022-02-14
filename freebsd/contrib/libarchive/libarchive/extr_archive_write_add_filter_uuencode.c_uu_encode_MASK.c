
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {int dummy; } ;


 int FUNC_0 (struct archive_string*,char) ;

__attribute__((used)) static void
FUNC_1(struct archive_string *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 int VAR_3;

 VAR_3 = (int)VAR_2;
 FUNC_0(VAR_0, VAR_3?VAR_3 + 0x20:'`');
 for (; VAR_2 >= 3; VAR_1 += 3, VAR_2 -= 3) {
  VAR_3 = VAR_1[0] >> 2;
  FUNC_0(VAR_0, VAR_3?VAR_3 + 0x20:'`');
  VAR_3 = ((VAR_1[0] & 0x03) << 4) | ((VAR_1[1] & 0xf0) >> 4);
  FUNC_0(VAR_0, VAR_3?VAR_3 + 0x20:'`');
  VAR_3 = ((VAR_1[1] & 0x0f) << 2) | ((VAR_1[2] & 0xc0) >> 6);
  FUNC_0(VAR_0, VAR_3?VAR_3 + 0x20:'`');
  VAR_3 = VAR_1[2] & 0x3f;
  FUNC_0(VAR_0, VAR_3?VAR_3 + 0x20:'`');
 }
 if (VAR_2 > 0) {
  VAR_3 = VAR_1[0] >> 2;
  FUNC_0(VAR_0, VAR_3?VAR_3 + 0x20:'`');
  VAR_3 = (VAR_1[0] & 0x03) << 4;
  if (VAR_2 == 1) {
   FUNC_0(VAR_0, VAR_3?VAR_3 + 0x20:'`');
   FUNC_0(VAR_0, '`');
   FUNC_0(VAR_0, '`');
  } else {
   VAR_3 |= (VAR_1[1] & 0xf0) >> 4;
   FUNC_0(VAR_0, VAR_3?VAR_3 + 0x20:'`');
   VAR_3 = (VAR_1[1] & 0x0f) << 2;
   FUNC_0(VAR_0, VAR_3?VAR_3 + 0x20:'`');
   FUNC_0(VAR_0, '`');
  }
 }
 FUNC_0(VAR_0, '\n');
}
