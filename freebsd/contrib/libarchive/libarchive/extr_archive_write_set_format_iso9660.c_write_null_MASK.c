
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 unsigned char* FUNC_1 (struct archive_write*) ;
 int FUNC_2 (struct archive_write*,size_t) ;
 size_t FUNC_3 (struct archive_write*) ;

__attribute__((used)) static int
FUNC_4(struct archive_write *VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 unsigned char *VAR_4, *VAR_5;
 int VAR_6;

 VAR_3 = FUNC_3(VAR_1);
 VAR_4 = FUNC_1(VAR_1);
 if (VAR_2 <= VAR_3) {
  FUNC_0(VAR_4, 0, VAR_2);
  return (FUNC_2(VAR_1, VAR_2));
 }
 FUNC_0(VAR_4, 0, VAR_3);
 VAR_6 = FUNC_2(VAR_1, VAR_3);
 if (VAR_6 != VAR_0)
  return (VAR_6);
 VAR_2 -= VAR_3;
 VAR_5 = VAR_4;
 VAR_4 = FUNC_1(VAR_1);
 FUNC_0(VAR_4, 0, VAR_5 - VAR_4);
 VAR_3 = FUNC_3(VAR_1);
 while (VAR_2) {
  size_t VAR_7 = VAR_2;

  if (VAR_7 > VAR_3)
   VAR_7 = VAR_3;
  VAR_6 = FUNC_2(VAR_1, VAR_7);
  if (VAR_6 != VAR_0)
   return (VAR_6);
  VAR_2 -= VAR_7;
 }
 return (VAR_0);
}
