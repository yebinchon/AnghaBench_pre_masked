
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wbuf ;
struct stat {int st_mode; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,int) ;
 int FUNC_4 (char*,struct stat*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,char const*,size_t) ;
 size_t FUNC_7 (char*,char*,int) ;
 size_t FUNC_8 (char const*) ;

char *
FUNC_9(const char * __restrict VAR_8, char * __restrict VAR_9)
{
 struct stat VAR_10;
 int VAR_11 = 0, VAR_12 = 0;
 const char *VAR_13;
 char *VAR_14, VAR_15[2][VAR_5], *VAR_16;
 size_t VAR_17;
 ssize_t VAR_18;


 if (VAR_8 == ((void*)0)) {
  VAR_7 = VAR_0;
  return ((void*)0);
 }

 if (VAR_9 == ((void*)0)) {
  VAR_16 = VAR_9 = FUNC_5(VAR_5);
  if (VAR_9 == ((void*)0))
   return ((void*)0);
 } else
  VAR_16 = ((void*)0);
 VAR_14 = VAR_9;

 if (*VAR_8 == '\0') {
  *VAR_14 = '\0';
  VAR_7 = VAR_3;
  goto out;
 }


 if (*VAR_8 != '/') {

  if (VAR_9 && FUNC_3(VAR_9, VAR_5) == ((void*)0)) {
   VAR_14[0] = '.';
   VAR_14[1] = '\0';
   goto out;
  }
  VAR_17 = FUNC_8(VAR_9);
  if (VAR_17 > 1)
   VAR_14 += VAR_17;
 }

loop:

 while (*VAR_8 == '/')
  VAR_8++;

 if (*VAR_8 == '\0') {
  if (VAR_14 == VAR_9)
   *VAR_14++ = '/';
  *VAR_14 = '\0';
  return VAR_9;
 }


 VAR_13 = VAR_8;
 do
  VAR_13++;
 while (*VAR_13 != '/' && *VAR_13 != '\0');


 if (VAR_8[0] == '.') {
  if (VAR_13 - VAR_8 == 1) {
   VAR_8 = VAR_13;
   goto loop;
  }
  if (VAR_8[1] == '.' && VAR_13 - VAR_8 == 2) {

   if (VAR_14 != VAR_9)
    while (*--VAR_14 != '/')
     continue;
   VAR_8 = VAR_13;
   goto loop;
  }
 }


 if (VAR_14 - VAR_9 + 1 + VAR_13 - VAR_8 + 1 > VAR_5) {
  VAR_7 = VAR_2;
  if (VAR_14 == VAR_9)
   *VAR_14++ = '/';
  *VAR_14 = '\0';
  goto out;
 }
 VAR_14[0] = '/';
 FUNC_6(&VAR_14[1], VAR_8,

     VAR_13 - VAR_8);
 VAR_14[1 + VAR_13 - VAR_8] = '\0';





 if (FUNC_4(VAR_9, &VAR_10) == -1)
  goto out;

 if (FUNC_1(VAR_10.st_mode)) {
  if (VAR_12++ >= VAR_6) {
   VAR_7 = VAR_1;
   goto out;
  }
  VAR_18 = FUNC_7(VAR_9, VAR_15[VAR_11], sizeof(VAR_15[0]) - 1);
  if (VAR_18 < 0)
   goto out;
  if (VAR_18 == 0) {
   VAR_7 = VAR_3;
   goto out;
  }


  if (VAR_18 + (VAR_17 = FUNC_8(VAR_13)) + 1 > sizeof(VAR_15[0])) {
   VAR_7 = VAR_2;
   goto out;
  }
  FUNC_6(&VAR_15[VAR_11][VAR_18], VAR_13, VAR_17 + 1);
  VAR_8 = VAR_15[VAR_11];
  VAR_11 ^= 1;


  if (*VAR_8 == '/')
   VAR_14 = VAR_9;
  goto loop;
 }
 if (*VAR_13 == '/' && !FUNC_0(VAR_10.st_mode)) {
  VAR_7 = VAR_4;
  goto out;
 }


 VAR_14 += 1 + VAR_13 - VAR_8;
 VAR_8 = VAR_13;
 goto loop;
out:
 FUNC_2(VAR_16);
 return ((void*)0);
}
