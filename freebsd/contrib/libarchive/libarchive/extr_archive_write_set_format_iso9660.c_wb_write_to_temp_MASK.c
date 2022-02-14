
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso9660 {size_t wbuff_offset; } ;
struct archive_write {scalar_t__ format_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,char const*,size_t) ;
 size_t FUNC_1 () ;
 int FUNC_2 (struct archive_write*) ;
 scalar_t__ FUNC_3 (struct archive_write*,size_t) ;
 size_t FUNC_4 (struct archive_write*) ;
 scalar_t__ FUNC_5 (struct archive_write*,void const*,size_t) ;

__attribute__((used)) static int
FUNC_6(struct archive_write *VAR_3, const void *VAR_4, size_t VAR_5)
{
 const char *VAR_6 = VAR_4;
 size_t VAR_7 = VAR_5;






 if (FUNC_4(VAR_3) == FUNC_1() && VAR_5 > (1024 * 16)) {
  struct iso9660 *VAR_8 = (struct iso9660 *)VAR_3->format_data;
  VAR_7 = VAR_5 % VAR_2;
  VAR_8->wbuff_offset += VAR_5 - VAR_7;
  if (FUNC_5(VAR_3, VAR_4, VAR_5 - VAR_7) != VAR_1)
   return (VAR_0);
  if (VAR_7 == 0)
   return (VAR_1);
  VAR_6 += VAR_5 - VAR_7;
 }

 while (VAR_7) {
  size_t VAR_9 = VAR_7;
  if (VAR_9 > FUNC_4(VAR_3))
   VAR_9 = FUNC_4(VAR_3);
  FUNC_0(FUNC_2(VAR_3), VAR_6, VAR_9);
  if (FUNC_3(VAR_3, VAR_9) != VAR_1)
   return (VAR_0);
  VAR_7 -= VAR_9;
  VAR_6 += VAR_9;
 }
 return (VAR_1);
}
