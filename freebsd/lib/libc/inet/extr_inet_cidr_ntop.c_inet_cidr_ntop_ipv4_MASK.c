
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (scalar_t__ const*,size_t,char*,size_t) ;
 int VAR_2 ;

__attribute__((used)) static char *
FUNC_2(const u_char *VAR_3, int VAR_4, char *VAR_5, size_t VAR_6) {
 char *VAR_7 = VAR_5;
 size_t VAR_8 = 4;
 size_t VAR_9;
 size_t VAR_10;

 if ((VAR_4 < -1) || (VAR_4 > 32)) {
  VAR_2 = VAR_0;
  return (((void*)0));
 }


 if (VAR_4 == -1)
  VAR_8 = 4;
 else
  for (VAR_8 = 1, VAR_9 = 1 ; VAR_9 < 4U; VAR_9++)
   if (*(VAR_3 + VAR_9))
    VAR_8 = VAR_9 + 1;


 VAR_10 = (((VAR_4 <= 0) ? 1 : VAR_4) + 7) / 8;
 if (VAR_8 > VAR_10)
  VAR_10 = VAR_8;
 VAR_9 = FUNC_1(VAR_3, VAR_10, VAR_5, VAR_6);
 if (VAR_9 == 0U)
  goto emsgsize;
 VAR_5 += VAR_9;
 VAR_6 -= VAR_9;

 if (VAR_4 != -1) {

  if (VAR_6 < sizeof "/32")
   goto emsgsize;
  VAR_5 += FUNC_0((VAR_5, "/%u", VAR_4));
 }

 return (VAR_7);

 emsgsize:
 VAR_2 = VAR_1;
 return (((void*)0));
}
