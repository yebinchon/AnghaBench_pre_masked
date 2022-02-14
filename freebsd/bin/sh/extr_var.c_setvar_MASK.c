
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,int,char const*) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char const) ;
 int FUNC_4 (char*,char const*,size_t) ;
 int FUNC_5 (char*,int) ;
 size_t FUNC_6 (char const*) ;

void
FUNC_7(const char *VAR_3, const char *VAR_4, int VAR_5)
{
 const char *VAR_6;
 size_t VAR_7;
 size_t VAR_8;
 size_t VAR_9;
 char *VAR_10;
 int VAR_11;

 VAR_11 = 0;
 VAR_6 = VAR_3;
 if (! FUNC_3(*VAR_6))
  VAR_11 = 1;
 VAR_6++;
 for (;;) {
  if (! FUNC_2(*VAR_6)) {
   if (*VAR_6 == '\0' || *VAR_6 == '=')
    break;
   VAR_11 = 1;
  }
  VAR_6++;
 }
 VAR_8 = VAR_6 - VAR_3;
 if (VAR_11)
  FUNC_1("%.*s: bad variable name", (int)VAR_8, VAR_3);
 VAR_7 = VAR_8 + 2;
 if (VAR_4 == ((void*)0)) {
  VAR_5 |= VAR_2;
  VAR_9 = 0;
 } else {
  VAR_9 = FUNC_6(VAR_4);
  VAR_7 += VAR_9;
 }
 VAR_0;
 VAR_10 = FUNC_0(VAR_7);
 FUNC_4(VAR_10, VAR_3, VAR_8);
 VAR_10[VAR_8] = '=';
 if (VAR_4)
  FUNC_4(VAR_10 + VAR_8 + 1, VAR_4, VAR_9 + 1);
 else
  VAR_10[VAR_8 + 1] = '\0';
 FUNC_5(VAR_10, VAR_5);
 VAR_1;
}
