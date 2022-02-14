
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 long FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static const char *
FUNC_3(const char *VAR_7, int *VAR_8, int *VAR_9)
{
 if (FUNC_1(VAR_7, "raidz", 5) == 0) {
  const char *VAR_10 = VAR_7 + 5;
  char *VAR_11;
  long VAR_12;

  if (*VAR_10 == '\0') {
   VAR_12 = 1;
  } else if (*VAR_10 == '0') {
   return (((void*)0));
  } else {
   VAR_6 = 0;
   VAR_12 = FUNC_2(VAR_10, &VAR_11, 10);
   if (VAR_6 != 0 || VAR_12 < 1 || VAR_12 >= 255 ||
       *VAR_11 != '\0')
    return (((void*)0));
  }

  if (VAR_8 != ((void*)0))
   *VAR_8 = VAR_12 + 1;
  if (VAR_9 != ((void*)0))
   *VAR_9 = 255;
  return (VAR_4);
 }

 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_0;

 if (FUNC_0(VAR_7, "mirror") == 0) {
  if (VAR_8 != ((void*)0))
   *VAR_8 = 2;
  return (VAR_3);
 }

 if (FUNC_0(VAR_7, "spare") == 0) {
  if (VAR_8 != ((void*)0))
   *VAR_8 = 1;
  return (VAR_5);
 }

 if (FUNC_0(VAR_7, "log") == 0) {
  if (VAR_8 != ((void*)0))
   *VAR_8 = 1;
  return (VAR_2);
 }

 if (FUNC_0(VAR_7, "cache") == 0) {
  if (VAR_8 != ((void*)0))
   *VAR_8 = 1;
  return (VAR_1);
 }

 return (((void*)0));
}
