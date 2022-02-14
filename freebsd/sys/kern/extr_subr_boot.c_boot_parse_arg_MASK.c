
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;



 int FUNC_0 (char*,char*) ;
 char* VAR_1 ;
 char* VAR_2 ;
 void* FUNC_1 (char const*,char) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char**,char*) ;
 char const* VAR_3 ;

int
FUNC_4(char *VAR_4)
{
 char *VAR_5;
 int VAR_6;
 VAR_6 = 0;
 if (*VAR_4 == '-') {
  while (*VAR_4 != '\0') {
   VAR_4++;
   switch (*VAR_4) {
   case 'a': VAR_6 |= 138; break;
   case 'C': VAR_6 |= 137; break;
   case 'd': VAR_6 |= 134; break;
   case 'D': VAR_6 |= 133; break;
   case 'm': VAR_6 |= 132; break;
   case 'g': VAR_6 |= 135; break;
   case 'h': VAR_6 |= 130; break;
   case 'p': VAR_6 |= 131; break;
   case 'P': VAR_6 |= VAR_0; break;
   case 'r': VAR_6 |= 136; break;
   case 's': VAR_6 |= 129; break;
   case 'S': FUNC_0("comconsole_speed", VAR_4 + 1); VAR_4 += FUNC_2(VAR_4); break;
   case 'v': VAR_6 |= 128; break;
   }
  }
 } else {
  VAR_5 = FUNC_3(&VAR_4, "=");
  if (VAR_4 == ((void*)0))
   FUNC_0(VAR_5, "1");
  else
   FUNC_0(VAR_5, VAR_4);
 }

 return (VAR_6);
}
