
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {char* s; } ;


 unsigned char VAR_0 ;
 size_t FUNC_0 (struct archive_string*) ;

__attribute__((used)) static int
FUNC_1(struct archive_string *VAR_1, unsigned char VAR_2)
{
 size_t VAR_3;
 int VAR_4;


 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  if (VAR_1->s[VAR_3] == '\\') {
   if (VAR_4) {


    break;
   }
   VAR_1->s[VAR_3] = '/';
   VAR_4 = 0;
  } else if ((VAR_1->s[VAR_3] & 0x80) && !(VAR_2 & VAR_0))
   VAR_4 = 1;
  else
   VAR_4 = 0;
 }
 if (VAR_3 == FUNC_0(VAR_1))
  return (0);
 return (-1);
}
