
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int mbstate_t ;
typedef int mbr ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 size_t FUNC_2 (int*,char const*,int ,int *) ;

__attribute__((used)) static int
FUNC_3(FILE *VAR_1, const char *VAR_2)
{
 mbstate_t VAR_3;
 wchar_t VAR_4;
 size_t VAR_5;

 FUNC_1(&VAR_3, sizeof (VAR_3));

 FUNC_0(VAR_1, "\"");
 while ((VAR_5 = FUNC_2(&VAR_4, VAR_2, VAR_0, &VAR_3)) > 0) {
  switch (VAR_4) {
  case '"':
   FUNC_0(VAR_1, "\\\"");
   break;
  case '\n':
   FUNC_0(VAR_1, "\\n");
   break;
  case '\r':
   FUNC_0(VAR_1, "\\r");
   break;
  case '\\':
   FUNC_0(VAR_1, "\\\\");
   break;
  case '\f':
   FUNC_0(VAR_1, "\\f");
   break;
  case '\t':
   FUNC_0(VAR_1, "\\t");
   break;
  case '\b':
   FUNC_0(VAR_1, "\\b");
   break;
  default:
   if ((VAR_4 >= 0x00 && VAR_4 <= 0x1f) ||
       (VAR_4 > 0x7f && VAR_4 <= 0xffff)) {





    FUNC_0(VAR_1, "\\u%04x", (int)(0xffff & VAR_4));
   } else if (VAR_4 >= 0x20 && VAR_4 <= 0x7f) {




    FUNC_0(VAR_1, "%c", (int)(0xff & VAR_4));
   }
   break;
  }
  VAR_2 += VAR_5;
 }

 if (VAR_5 == (size_t)-1 || VAR_5 == (size_t)-2) {




  return (-1);
 }

 FUNC_0(VAR_1, "\"");
 return (0);
}
