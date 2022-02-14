
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;


 int FUNC_0 (char) ;

__attribute__((used)) static void
FUNC_1(
 const char *VAR_0,
 size_t VAR_1,
 char *VAR_2,
 size_t VAR_3
 )
{
 const u_char * VAR_4;
 const u_char * VAR_5;
 u_char * VAR_6;
 u_char VAR_7;

 VAR_4 = (const u_char *)VAR_0;
 VAR_5 = VAR_4 + VAR_1;
 VAR_6 = (u_char *)VAR_2;

 if (((void*)0) == VAR_4) {
  if (0 < VAR_3)
   *VAR_6 = '\0';
  return;
 }
 for ( ; VAR_4 < VAR_5; VAR_4++) {
  VAR_7 = *VAR_4;
  if ('\0' == VAR_7)
   break;
  if (VAR_7 & 0x80) {
   do { if (0 == --VAR_3) { *VAR_6 = '\0'; return; } *VAR_6++ = ('M'); } while (0);
   do { if (0 == --VAR_3) { *VAR_6 = '\0'; return; } *VAR_6++ = ('-'); } while (0);
   VAR_7 &= 0x7f;
  }
  if (VAR_7 < ' ') {
   do { if (0 == --VAR_3) { *VAR_6 = '\0'; return; } *VAR_6++ = ('^'); } while (0);
   do { if (0 == --VAR_3) { *VAR_6 = '\0'; return; } *VAR_6++ = ((u_char)(VAR_7 + '@')); } while (0);
  } else if (0x7f == VAR_7) {
   do { if (0 == --VAR_3) { *VAR_6 = '\0'; return; } *VAR_6++ = ('^'); } while (0);
   do { if (0 == --VAR_3) { *VAR_6 = '\0'; return; } *VAR_6++ = ('?'); } while (0);
  } else
   do { if (0 == --VAR_3) { *VAR_6 = '\0'; return; } *VAR_6++ = (VAR_7); } while (0);
 }
 do { if (0 == --VAR_3) { *VAR_6 = '\0'; return; } *VAR_6++ = ('\0'); } while (0);


}
