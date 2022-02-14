
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (size_t) ;
 char* FUNC_1 (char*,size_t) ;

__attribute__((used)) static const char *
FUNC_2(char VAR_0)
{
 static char *VAR_1;
 static size_t VAR_2;
 static size_t VAR_3;

 switch (VAR_0) {
 case '\0':
  break;
 case (char)-1:
  FUNC_0(VAR_3);
  VAR_1[--VAR_3] = '\0';
  break;
 default:
  if (VAR_3 + 1 >= VAR_2) {
   VAR_2 += 8;
   VAR_1 = FUNC_1(VAR_1, VAR_2);
  }
  VAR_1[VAR_3] = VAR_0;
  VAR_1[++VAR_3] = '\0';
  break;
 }
 return VAR_1 == ((void*)0) ? "" : VAR_1;
}
