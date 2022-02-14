
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {size_t length; char const* s; } ;
struct iso9660 {TYPE_1__ utf16be; int sconv_to_utf16be; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;
typedef enum vdc { ____Placeholder_vdc } vdc ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (int *,scalar_t__,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (unsigned char,unsigned char) ;
 int FUNC_4 (unsigned char*,char const*,size_t) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(struct archive_write *VAR_5, unsigned char *VAR_6, const char *VAR_7,
    size_t VAR_8, uint16_t VAR_9, enum vdc VAR_10)
{
 size_t VAR_11, VAR_12;
 int VAR_13;

 if (VAR_7 == ((void*)0))
  VAR_7 = "";
 if (VAR_8 & 0x01) {
  VAR_13 = 1;
  VAR_8 &= ~1;
 } else
  VAR_13 = 0;
 if (VAR_10 == VAR_3) {
  struct iso9660 *VAR_14 = VAR_5->format_data;
  if (FUNC_2(&VAR_14->utf16be, VAR_7, FUNC_5(VAR_7),
      VAR_14->sconv_to_utf16be) != 0 && VAR_4 == VAR_2) {
   FUNC_1(&VAR_5->archive, VAR_2,
       "Can't allocate memory for UTF-16BE");
   return (VAR_0);
  }
  VAR_11 = VAR_14->utf16be.length;
  if (VAR_11 > VAR_8)
   VAR_11 = VAR_8;
  FUNC_4(VAR_6, VAR_14->utf16be.s, VAR_11);
 } else {
  const uint16_t *VAR_15 = (const uint16_t *)VAR_7;

  VAR_11 = 0;
  while (*VAR_15++)
   VAR_11 += 2;
  if (VAR_11 > VAR_8)
   VAR_11 = VAR_8;
  FUNC_4(VAR_6, VAR_7, VAR_11);
 }
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12 += 2, VAR_6 += 2) {
  if (!FUNC_3(VAR_6[0], VAR_6[1]))
   FUNC_0(VAR_6, 0x005F);
 }
 VAR_8 -= VAR_11;
 while (VAR_8 > 0) {
  FUNC_0(VAR_6, VAR_9);
  VAR_6 += 2;
  VAR_8 -= 2;
 }
 if (VAR_13)
  *VAR_6 = 0;
 return (VAR_1);
}
