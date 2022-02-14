
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;

char *
FUNC_1(void)
{
 static char VAR_4[2] = { '!', '\0' };
 static char VAR_5[2] = { '$', '\0' };
 int VAR_6 = 0;
 char *VAR_7 = VAR_3;
 char *VAR_8 = VAR_1;
 char *VAR_9 = VAR_1;

 if (*VAR_7 == '!' || *VAR_7 == '$') {
  switch (VAR_2) {
   case 0:
    VAR_2++;
    FUNC_0(VAR_3);
    return ((*VAR_7 == '!') ? VAR_4 : VAR_5);

   case 1:
    VAR_2++;
    VAR_0 = VAR_3;
    break;
   default:
    break;
  }
 }

S0:
 switch (*VAR_7) {

 case '\0':
  goto OUT;

 case ' ':
 case '\t':
  FUNC_0(VAR_7);
  goto S0;

 default:
  switch (VAR_2) {
   case 0:
    VAR_2++;
    break;
   case 1:
    VAR_2++;
    VAR_0 = VAR_7;
    break;
   default:
    break;
  }
  goto S1;
 }

S1:
 switch (*VAR_7) {

 case ' ':
 case '\t':
 case '\0':
  goto OUT;

 case '\\':
  FUNC_0(VAR_7);
  goto S2;

 case '"':
  FUNC_0(VAR_7);
  goto S3;

 default:
  *VAR_8 = *VAR_7;
  VAR_8++;
  FUNC_0(VAR_7);
  VAR_6 = 1;
  goto S1;
 }

S2:
 switch (*VAR_7) {

 case '\0':
  goto OUT;

 default:
  *VAR_8 = *VAR_7;
  VAR_8++;
  FUNC_0(VAR_7);
  VAR_6 = 1;
  goto S1;
 }

S3:
 switch (*VAR_7) {

 case '\0':
  goto OUT;

 case '"':
  FUNC_0(VAR_7);
  goto S1;

 default:
  *VAR_8 = *VAR_7;
  VAR_8++;
  FUNC_0(VAR_7);
  VAR_6 = 1;
  goto S3;
 }

OUT:
 if (VAR_6)
  *VAR_8++ = '\0';
 VAR_1 = VAR_8;
 VAR_3 = VAR_7;
 if (VAR_6) {
  return (VAR_9);
 }
 switch (VAR_2) {
  case 0:
   VAR_2++;
   break;
  case 1:
   VAR_2++;
   VAR_0 = ((void*)0);
   break;
  default:
   break;
 }
 return (((void*)0));
}
