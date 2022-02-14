
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char**,int*,int,int,char**,char*) ;
 void* FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char) ;
 TYPE_1__ VAR_1 ;

int FUNC_8(void)
{
 int VAR_2;
 static char *VAR_3 = ((void*)0);
 static int VAR_4 = 500;
 char *VAR_5;

 if (VAR_3 == ((void*)0) && (VAR_3 = (char *) FUNC_5(VAR_4)) == ((void*)0))
  FUNC_0("out of space for rex expr");
 VAR_5 = VAR_3;
 for ( ; (VAR_2 = FUNC_4()) != '/' && VAR_2 != 0; ) {
  if (!FUNC_3(&VAR_3, &VAR_4, VAR_5-VAR_3+3, 500, &VAR_5, "regexpr"))
   FUNC_0("out of space for reg expr %.10s...", VAR_3);
  if (VAR_2 == '\n') {
   *VAR_5 = '\0';
   FUNC_2( "newline in regular expression %.10s...", VAR_3 );
   FUNC_7('\n');
   break;
  } else if (VAR_2 == '\\') {
   *VAR_5++ = '\\';
   *VAR_5++ = FUNC_4();
  } else {
   *VAR_5++ = VAR_2;
  }
 }
 *VAR_5 = 0;
 if (VAR_2 == 0)
  FUNC_2("non-terminated regular expression %.10s...", VAR_3);
 VAR_1.s = FUNC_6(VAR_3);
 FUNC_7('/');
 FUNC_1(VAR_0);
}
