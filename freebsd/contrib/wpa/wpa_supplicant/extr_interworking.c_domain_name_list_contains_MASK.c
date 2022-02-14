
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;
 int FUNC_2 (int ,char*,int const*,int) ;
 int* FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;

int FUNC_5(struct wpabuf *VAR_1,
         const char *VAR_2, int VAR_3)
{
 const u8 *VAR_4, *VAR_5;
 size_t VAR_6;

 VAR_6 = FUNC_0(VAR_2);
 VAR_4 = FUNC_3(VAR_1);
 VAR_5 = VAR_4 + FUNC_4(VAR_1);

 while (VAR_5 - VAR_4 > 1) {
  u8 VAR_7;

  VAR_7 = *VAR_4++;
  if (VAR_7 > VAR_5 - VAR_4)
   break;

  FUNC_2(VAR_0, "Interworking: AP domain name",
      VAR_4, VAR_7);
  if (VAR_7 == VAR_6 &&
      FUNC_1(VAR_2, (const char *) VAR_4, VAR_6) == 0)
   return 1;
  if (!VAR_3 && VAR_7 > VAR_6 && VAR_4[VAR_7 - VAR_6 - 1] == '.') {
   const char *VAR_8 = (const char *) VAR_4;
   int VAR_9 = VAR_7 - VAR_6;

   if (FUNC_1(VAR_2, VAR_8 + VAR_9, VAR_6) == 0)
    return 1;
  }

  VAR_4 += VAR_7;
 }

 return 0;
}
