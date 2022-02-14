
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 scalar_t__ FUNC_0 (int const*,int const*,size_t) ;
 int* FUNC_1 (struct wpabuf const*) ;
 int FUNC_2 (struct wpabuf const*) ;

__attribute__((used)) static int FUNC_3(const struct wpabuf *VAR_0,
      const u8 *VAR_1, size_t VAR_2)
{
 const u8 *VAR_3, *VAR_4;
 u8 VAR_5;

 if (VAR_0 == ((void*)0))
  return 0;

 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = VAR_3 + FUNC_2(VAR_0);


 while (VAR_3 < VAR_4) {
  VAR_5 = *VAR_3++;
  if (VAR_5 > VAR_4 - VAR_3)
   break;
  if (VAR_5 == VAR_2 && FUNC_0(VAR_3, VAR_1, VAR_2) == 0)
   return 1;
  VAR_3 += VAR_5;
 }

 return 0;
}
