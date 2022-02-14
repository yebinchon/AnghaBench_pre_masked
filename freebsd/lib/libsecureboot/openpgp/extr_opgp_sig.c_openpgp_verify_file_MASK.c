
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pbuf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char const*,unsigned char*,size_t,unsigned char*,size_t,int) ;
 unsigned char* FUNC_2 (char const*,size_t*) ;
 char** VAR_2 ;
 int FUNC_3 (char*,int,char*,char const*,char const*) ;
 int FUNC_4 (char*,char const*) ;

int
FUNC_5(const char *VAR_3, unsigned char *VAR_4, size_t VAR_5)
{
 char VAR_6[VAR_0];
 unsigned char *VAR_7;
 const char *VAR_8 = ((void*)0);
 const char **VAR_9;
 size_t VAR_10;
 int VAR_11;

 for (VAR_9 = VAR_2; *VAR_9; VAR_9++) {
  VAR_11 = FUNC_3(VAR_6, sizeof(VAR_6), "%s%s", VAR_3, *VAR_9);
  if (VAR_11 >= (int)sizeof(VAR_6)) {
   FUNC_4("cannot form signature name for %s", VAR_3);
   return (-1);
  }
  if (FUNC_0(VAR_6, VAR_1) == 0) {
   VAR_8 = VAR_6;
   break;
  }
 }
 if (!VAR_8) {
  FUNC_4("cannot find signature for %s", VAR_3);
  return (-1);
 }
 VAR_7 = FUNC_2(VAR_8, &VAR_10);
 return (FUNC_1(VAR_3, VAR_4, VAR_5, VAR_7, VAR_10, 1));
}
