
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int lbuf ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(
 const void * VAR_1,
 size_t VAR_2
 )
{







 static const char VAR_3[16] = "0123456789ABCDEF";

 char VAR_4[68];
 int VAR_5, VAR_6;
 const u_char * VAR_7 = VAR_1;
 char *VAR_8, *VAR_9;

 while (VAR_2) {
  FUNC_2(VAR_4, ' ', sizeof(VAR_4));
  VAR_8 = VAR_4;
  VAR_9 = VAR_4 + 3*16 + 2;

  VAR_6 = (VAR_2 > 16) ? 16 : (int)VAR_2;
  VAR_2 -= VAR_6;

  do {
   VAR_5 = *VAR_7++;

   *VAR_8++ = VAR_3[VAR_5 >> 4 ];
   *VAR_8++ = VAR_3[VAR_5 & 0x0F];
   if (++VAR_8 == VAR_4 + 3*8)
    ++VAR_8;

   *VAR_9++ = FUNC_1(VAR_5) ? (char)VAR_5 : '.';
  } while (--VAR_6);

  *VAR_9++ = '\n';
  *VAR_9 = '\0';
  FUNC_0(VAR_4, VAR_0);
 }
}
