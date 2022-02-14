
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_0, const char *VAR_1, size_t VAR_2,
    const char *VAR_3)
{
 const char *VAR_4, *VAR_5;
 const char *VAR_6, *VAR_7;
 const char *VAR_8, *VAR_9;
 char *VAR_10;
 int VAR_11 = 0;
 size_t VAR_12 = 99;
 size_t VAR_13;


 if (VAR_3 == ((void*)0))
  VAR_13 = 0;
 else

  VAR_13 = FUNC_1(VAR_3) + 2;


 if (VAR_2 < 100 && VAR_3 == ((void*)0)) {
  FUNC_2(VAR_0, VAR_1, VAR_2);
  VAR_0[VAR_2] = '\0';
  return (VAR_0);
 }


 VAR_9 = VAR_1 + VAR_2;

 for (;;) {
  if (VAR_9 > VAR_1 && VAR_9[-1] == '/') {
   VAR_9 --;
   VAR_11 = 1;
   continue;
  }
  if (VAR_9 > VAR_1 + 1 && VAR_9[-1] == '.'
      && VAR_9[-2] == '/') {
   VAR_9 -= 2;
   VAR_11 = 1;
   continue;
  }
  break;
 }
 if (VAR_11)
  VAR_12--;

 VAR_8 = VAR_9 - 1;
 while ((VAR_8 > VAR_1) && (*VAR_8 != '/'))
  VAR_8 --;
 if ((*VAR_8 == '/') && (VAR_8 < VAR_9 - 1))
  VAR_8 ++;

 VAR_12 -= VAR_13;
 if (VAR_9 > VAR_8 + VAR_12)
  VAR_9 = VAR_8 + VAR_12;

 VAR_12 -= VAR_9 - VAR_8;



 VAR_4 = VAR_1;
 VAR_5 = VAR_4 + 155;
 if (VAR_5 > VAR_8)
  VAR_5 = VAR_8;
 while (VAR_5 > VAR_4 && *VAR_5 != '/')
  VAR_5--;
 if ((VAR_5 < VAR_8) && (*VAR_5 == '/'))
  VAR_5++;



 VAR_6 = VAR_5;
 VAR_7 = VAR_6 + VAR_12;
 if (VAR_7 > VAR_8)
  VAR_7 = VAR_8;
 if (VAR_7 < VAR_6)
  VAR_7 = VAR_6;
 while (VAR_7 > VAR_6 && *VAR_7 != '/')
  VAR_7--;
 if ((VAR_7 < VAR_8) && (*VAR_7 == '/'))
  VAR_7++;




 VAR_10 = VAR_0;
 if (VAR_5 > VAR_4) {
  FUNC_2(VAR_10, VAR_4, VAR_5 - VAR_4);
  VAR_10 += VAR_5 - VAR_4;
 }
 if (VAR_7 > VAR_6) {
  FUNC_2(VAR_10, VAR_6, VAR_7 - VAR_6);
  VAR_10 += VAR_7 - VAR_6;
 }
 if (VAR_3 != ((void*)0)) {

  FUNC_0(VAR_10, VAR_3);
  VAR_10 += FUNC_1(VAR_3);
  *VAR_10++ = '/';
 }
 FUNC_2(VAR_10, VAR_8, VAR_9 - VAR_8);
 VAR_10 += VAR_9 - VAR_8;
 if (VAR_11)
  *VAR_10++ = '/';
 *VAR_10 = '\0';

 return (VAR_0);
}
