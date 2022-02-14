
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {int dummy; } ;


 int FUNC_0 (struct archive_string*,char) ;
 char* VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct archive_string *VAR_1, const unsigned char *VAR_2, size_t VAR_3)
{
 int VAR_4;

 for (; VAR_3 >= 3; VAR_2 += 3, VAR_3 -= 3) {
  VAR_4 = VAR_2[0] >> 2;
  FUNC_0(VAR_1, VAR_0[VAR_4]);
  VAR_4 = ((VAR_2[0] & 0x03) << 4) | ((VAR_2[1] & 0xf0) >> 4);
  FUNC_0(VAR_1, VAR_0[VAR_4]);
  VAR_4 = ((VAR_2[1] & 0x0f) << 2) | ((VAR_2[2] & 0xc0) >> 6);
  FUNC_0(VAR_1, VAR_0[VAR_4]);
  VAR_4 = VAR_2[2] & 0x3f;
  FUNC_0(VAR_1, VAR_0[VAR_4]);
 }
 if (VAR_3 > 0) {
  VAR_4 = VAR_2[0] >> 2;
  FUNC_0(VAR_1, VAR_0[VAR_4]);
  VAR_4 = (VAR_2[0] & 0x03) << 4;
  if (VAR_3 == 1) {
   FUNC_0(VAR_1, VAR_0[VAR_4]);
   FUNC_0(VAR_1, '=');
   FUNC_0(VAR_1, '=');
  } else {
   VAR_4 |= (VAR_2[1] & 0xf0) >> 4;
   FUNC_0(VAR_1, VAR_0[VAR_4]);
   VAR_4 = (VAR_2[1] & 0x0f) << 2;
   FUNC_0(VAR_1, VAR_0[VAR_4]);
   FUNC_0(VAR_1, '=');
  }
 }
 FUNC_0(VAR_1, '\n');
}
