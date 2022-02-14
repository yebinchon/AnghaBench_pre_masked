
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char**,int*,int,int,char**,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*,double,int,int ) ;
 int FUNC_9 (char*,char*,unsigned int*) ;
 int VAR_5 ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (int) ;
 TYPE_1__ VAR_6 ;

int FUNC_12(void)
{
 int VAR_7, VAR_8;
 char *VAR_9, *VAR_10;
 static char *VAR_11 = ((void*)0);
 static int VAR_12 = 500;

 if (VAR_11 == ((void*)0) && (VAR_11 = (char *) FUNC_6(VAR_12)) == ((void*)0))
  FUNC_0("out of space for strings");
 for (VAR_10 = VAR_11; (VAR_7 = FUNC_4()) != '"'; ) {
  if (!FUNC_3(&VAR_11, &VAR_12, VAR_10-VAR_11+2, 500, &VAR_10, "string"))
   FUNC_0("out of space for string %.10s...", VAR_11);
  switch (VAR_7) {
  case '\n':
  case '\r':
  case 0:
   *VAR_10 = '\0';
   FUNC_2( "non-terminated string %.10s...", VAR_11 );
   if (VAR_7 == 0)
    FUNC_0( "giving up" );
   VAR_4++;
   break;
  case '\\':
   VAR_7 = FUNC_4();
   switch (VAR_7) {
   case '"': *VAR_10++ = '"'; break;
   case 'n': *VAR_10++ = '\n'; break;
   case 't': *VAR_10++ = '\t'; break;
   case 'f': *VAR_10++ = '\f'; break;
   case 'r': *VAR_10++ = '\r'; break;
   case 'b': *VAR_10++ = '\b'; break;
   case 'v': *VAR_10++ = '\v'; break;
   case 'a': *VAR_10++ = '\007'; break;
   case '\\': *VAR_10++ = '\\'; break;

   case '0': case '1': case '2':
   case '3': case '4': case '5': case '6': case '7':
    VAR_8 = VAR_7 - '0';
    if ((VAR_7 = FUNC_7()) >= '0' && VAR_7 < '8') {
     VAR_8 = 8 * VAR_8 + FUNC_4() - '0';
     if ((VAR_7 = FUNC_7()) >= '0' && VAR_7 < '8')
      VAR_8 = 8 * VAR_8 + FUNC_4() - '0';
    }
    *VAR_10++ = VAR_8;
    break;

   case 'x':
       { char VAR_13[100], *VAR_14;
    for (VAR_14 = VAR_13; (VAR_7 = FUNC_4()) != 0 && VAR_14-VAR_13 < 100-2; ) {
     if (FUNC_5(VAR_7)
      || (VAR_7 >= 'a' && VAR_7 <= 'f')
      || (VAR_7 >= 'A' && VAR_7 <= 'F'))
      *VAR_14++ = VAR_7;
     else
      break;
    }
    *VAR_14 = 0;
    FUNC_11(VAR_7);
      FUNC_9(VAR_13, "%x", (unsigned int *) &VAR_8);
    *VAR_10++ = VAR_8;
    break;
       }

   default:
    *VAR_10++ = VAR_7;
    break;
   }
   break;
  default:
   *VAR_10++ = VAR_7;
   break;
  }
 }
 *VAR_10 = 0;
 VAR_9 = FUNC_10(VAR_11);
 *VAR_10++ = ' '; *VAR_10++ = 0;
 VAR_6.cp = FUNC_8(VAR_11, VAR_9, 0.0, VAR_0|VAR_2|VAR_1, VAR_5);
 FUNC_1(VAR_3);
}
