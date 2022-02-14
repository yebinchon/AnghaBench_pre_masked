
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static const char *
FUNC_2(uint_t VAR_4)
{
 static char VAR_5[32];

 if (VAR_4 == 0 || (VAR_4 & ~(VAR_2 | VAR_1 |
     VAR_0 | VAR_3)) != 0)
  (void) FUNC_0(VAR_5, sizeof (VAR_5), " 0x%x", VAR_4);
 else {
  VAR_5[0] = '\0';
  if (VAR_4 & VAR_2)
   (void) FUNC_1(VAR_5, " SIGNED");
  if (VAR_4 & VAR_1)
   (void) FUNC_1(VAR_5, " CHAR");
  if (VAR_4 & VAR_0)
   (void) FUNC_1(VAR_5, " BOOL");
  if (VAR_4 & VAR_3)
   (void) FUNC_1(VAR_5, " VARARGS");
 }

 return (VAR_5 + 1);
}
