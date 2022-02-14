
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int,int,int,int) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 long FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_6, const char *VAR_7, device_t *VAR_8)
{
 long VAR_9;
 char *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 if (*VAR_8 != ((void*)0))
  return;






 if (FUNC_1(VAR_7, "pci", 3) != 0)
  return;
 VAR_9 = FUNC_2(VAR_7 + 3, &VAR_10, 10);
 if (VAR_9 < 0 || VAR_9 > VAR_0 || *VAR_10 != ':')
  return;
 VAR_11 = VAR_9;
 VAR_9 = FUNC_2(VAR_10 + 1, &VAR_10, 10);
 if (VAR_9 < 0 || VAR_9 > VAR_0 || *VAR_10 != ':')
  return;
 VAR_12 = VAR_9;
 VAR_9 = FUNC_2(VAR_10 + 1, &VAR_10, 10);
 if (VAR_9 < 0 || VAR_9 > VAR_0)
  return;
 VAR_13 = VAR_9;
 if (*VAR_10 == ':') {
  VAR_9 = FUNC_2(VAR_10 + 1, &VAR_10, 10);
  if (VAR_9 < 0 || VAR_9 > VAR_0 || *VAR_10 != '\0')
   return;
  VAR_14 = VAR_9;
 } else if (*VAR_10 == '\0') {
  VAR_14 = VAR_13;
  VAR_13 = VAR_12;
  VAR_12 = VAR_11;
  VAR_11 = 0;
 } else
  return;

 if (VAR_11 > VAR_3 || VAR_12 > VAR_2 || VAR_13 > VAR_5 ||
     VAR_14 > VAR_1 || (VAR_13 != 0 && VAR_14 > VAR_4))
  return;

 *VAR_8 = FUNC_0(VAR_11, VAR_12, VAR_13, VAR_14);
}
