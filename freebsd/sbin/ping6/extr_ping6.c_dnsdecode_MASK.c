
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int cresult ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (char*,int,char*,int const) ;
 size_t FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static const char *
FUNC_3(const u_char *VAR_1, const u_char *VAR_2, const u_char *VAR_3, char *VAR_4,
 size_t VAR_5)
{
 int VAR_6;
 const u_char *VAR_7;
 char VAR_8[VAR_0 + 1];
 const u_char *VAR_9;
 int VAR_10;

 VAR_7 = VAR_1;
 *VAR_4 = '\0';

 if (VAR_7 >= VAR_2)
  return ((void*)0);
 while (VAR_7 < VAR_2) {
  VAR_6 = *VAR_7;
  if (VAR_6 == 0 || VAR_7 != VAR_1) {
   if (FUNC_2((char *)VAR_4, ".", VAR_5) >= VAR_5)
    return ((void*)0);
  }
  if (VAR_6 == 0)
   break;
  VAR_7++;

  if ((VAR_6 & 0xc0) == 0xc0 && VAR_7 - VAR_3 > (VAR_6 & 0x3f)) {

   if (!VAR_3)
    return ((void*)0);

   VAR_9 = VAR_3 + (VAR_6 & 0x3f);
   if (FUNC_3(VAR_9, VAR_7, VAR_3, VAR_8,
       sizeof(VAR_8)) == ((void*)0))
    return ((void*)0);
   if (FUNC_2(VAR_4, VAR_8, VAR_5) >= VAR_5)
    return ((void*)0);
   break;
  } else if ((VAR_6 & 0x3f) == VAR_6) {
   if (VAR_6 > VAR_2 - VAR_7)
    return ((void*)0);
   while (VAR_6-- > 0 && VAR_7 < VAR_2) {
    VAR_10 = FUNC_1(VAR_8, sizeof(VAR_8),
        FUNC_0(*VAR_7) ? "%c" : "\\%03o", *VAR_7 & 0xff);
    if ((size_t)VAR_10 >= sizeof(VAR_8) || VAR_10 < 0)
     return ((void*)0);
    if (FUNC_2(VAR_4, VAR_8, VAR_5) >= VAR_5)
     return ((void*)0);
    VAR_7++;
   }
  } else
   return ((void*)0);
 }
 if (VAR_6 != 0)
  return ((void*)0);
 VAR_7++;
 return VAR_7;
}
