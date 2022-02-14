
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uschar ;


 int FUNC_0 (char*,int*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (char const*) ;

char *FUNC_5(const char *VAR_0, int VAR_1)
{
 const char *VAR_2 = VAR_0;
 int VAR_3, VAR_4;
 uschar *VAR_5 = (uschar *) VAR_0;
 uschar *VAR_6, *VAR_7;

 if ((VAR_6 = (uschar *) FUNC_3(FUNC_4(VAR_0)+3)) == ((void*)0))
  FUNC_0( "out of space in qstring(%s)", VAR_5);
 for (VAR_7 = VAR_6; (VAR_3 = *VAR_5) != VAR_1; VAR_5++) {
  if (VAR_3 == '\n')
   FUNC_1( "newline in string %.20s...", VAR_2 );
  else if (VAR_3 != '\\')
   *VAR_7++ = VAR_3;
  else {
   VAR_3 = *++VAR_5;
   if (VAR_3 == 0) {
    *VAR_7++ = '\\';
    break;
   }
   switch (VAR_3) {
   case '\\': *VAR_7++ = '\\'; break;
   case 'n': *VAR_7++ = '\n'; break;
   case 't': *VAR_7++ = '\t'; break;
   case 'b': *VAR_7++ = '\b'; break;
   case 'f': *VAR_7++ = '\f'; break;
   case 'r': *VAR_7++ = '\r'; break;
   default:
    if (!FUNC_2(VAR_3)) {
     *VAR_7++ = VAR_3;
     break;
    }
    VAR_4 = VAR_3 - '0';
    if (FUNC_2(VAR_5[1])) {
     VAR_4 = 8 * VAR_4 + *++VAR_5 - '0';
     if (FUNC_2(VAR_5[1]))
      VAR_4 = 8 * VAR_4 + *++VAR_5 - '0';
    }
    *VAR_7++ = VAR_4;
    break;
   }
  }
 }
 *VAR_7++ = 0;
 return (char *) VAR_6;
}
