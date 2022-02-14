
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t,int) ;
 int FUNC_1 (char*,char const*) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,size_t) ;
 int FUNC_4 (char*,char const*,size_t) ;

__attribute__((used)) static char *
FUNC_5(const char *VAR_0, const char *VAR_1, const char *VAR_2,
    int VAR_3)
{
 const char *VAR_4;
 char *VAR_5, *VAR_6;
 size_t VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_2(VAR_0);
 VAR_8 = FUNC_2(VAR_2);
 VAR_9 = FUNC_2(VAR_1);


 VAR_4 = VAR_0;
 while (*VAR_4) {
  if (*VAR_4 == *VAR_1 && !FUNC_3(VAR_4, VAR_1, VAR_9)) {
   VAR_7 += VAR_8 - VAR_9;
   if (!VAR_3)
    break;
   VAR_4 += VAR_9;
  } else
   VAR_4++;
 }
 VAR_5 = VAR_6 = FUNC_0(VAR_7 + 1, sizeof(*VAR_5));
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_4 = VAR_0;
 while (*VAR_4) {
  if (*VAR_4 == *VAR_1 && !FUNC_3(VAR_4, VAR_1, VAR_9)) {
   (void)FUNC_4(VAR_5, VAR_2, VAR_8);
   VAR_5 += VAR_8;
   VAR_4 += VAR_9;
   if (!VAR_3) {
    (void)FUNC_1(VAR_5, VAR_4);
    return VAR_6;
   }
  } else
   *VAR_5++ = *VAR_4++;
 }
 *VAR_5 = '\0';
 return VAR_6;
}
