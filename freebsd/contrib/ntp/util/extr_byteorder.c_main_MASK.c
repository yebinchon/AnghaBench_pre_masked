
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

int
FUNC_2(
 int VAR_0,
 char *VAR_1[]
 )
{
 int VAR_2;
 int VAR_3;
 union {
  unsigned long l;
  char c[sizeof(long)];
 } VAR_4;




 VAR_4.l = 0x04030201;

 if (sizeof(long) > 4) {
  if (VAR_4.c[0] == 0x08) VAR_3 = 1;
  else VAR_3 = 0;
 } else {
  if (VAR_4.c[0] == 0x04) VAR_3 = 1;
  else VAR_3 = 0;
 }
 for (VAR_2=0; VAR_2< sizeof(long); VAR_2++) {
  if (VAR_3 == 1 && (VAR_4.c[VAR_2] == (sizeof(long) - VAR_2))) {
   continue;
  } else if (VAR_3 == 0 && (VAR_4.c[VAR_2] == (VAR_2+1))) {
   continue;
  } else {
   VAR_3 = -1;
   break;
  }
 }

 if (VAR_3 == 1) {
  FUNC_1("XNTP_BIG_ENDIAN\n");
 } else if (VAR_3 == 0) {
  FUNC_1("XNTP_LITTLE_ENDIAN\n");
 }
 FUNC_0(0);
}
