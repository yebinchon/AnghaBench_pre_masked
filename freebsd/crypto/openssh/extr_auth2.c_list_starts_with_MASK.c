
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_4, const char *VAR_5,
    const char *VAR_6)
{
 size_t VAR_7 = FUNC_0(VAR_5);
 int VAR_8;
 const char *VAR_9;

 if (FUNC_1(VAR_4, VAR_5, VAR_7) != 0)
  return VAR_2;
 VAR_9 = VAR_4 + VAR_7;
 VAR_8 = VAR_1;
 if (*VAR_9 == ':') {
  if (!VAR_6)
   return VAR_3;
  VAR_7 = FUNC_0(VAR_6);
  VAR_9 += 1;
  if (FUNC_1(VAR_6, VAR_9, VAR_7))
   return VAR_2;
  VAR_9 += VAR_7;
  VAR_8 = VAR_0;
 }
 if (*VAR_9 != ',' && *VAR_9 != '\0')
  return VAR_2;
 return VAR_8;
}
