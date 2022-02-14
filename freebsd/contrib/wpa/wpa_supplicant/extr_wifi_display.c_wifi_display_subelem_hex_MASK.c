
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u8 ;
typedef size_t u16 ;
struct wpabuf {int dummy; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (scalar_t__ const*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int,scalar_t__ const*,size_t) ;
 scalar_t__* FUNC_3 (struct wpabuf const*) ;
 size_t FUNC_4 (struct wpabuf const*) ;

char * FUNC_5(const struct wpabuf *VAR_1, u8 VAR_2)
{
 char *VAR_3 = ((void*)0);
 const u8 *VAR_4;
 size_t VAR_5;
 size_t VAR_6 = 0;
 u16 VAR_7;

 if (!VAR_1)
  return ((void*)0);

 VAR_4 = FUNC_3(VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_4(VAR_1);

 while (VAR_6 + VAR_0 < VAR_5) {
  VAR_7 = FUNC_0(VAR_4 + VAR_6 + 1);
  if (VAR_6 + VAR_0 + VAR_7 > VAR_5)
   break;

  if (VAR_4[VAR_6] == VAR_2) {
   if (VAR_7 > 1000)
    break;
   VAR_3 = FUNC_1(2 * VAR_7 + 1);
   if (!VAR_3)
    return ((void*)0);
   FUNC_2(VAR_3, 2 * VAR_7 + 1,
      VAR_4 + VAR_6 +
      VAR_0,
      VAR_7);
   break;
  }

  VAR_6 += VAR_7 + VAR_0;
 }

 return VAR_3;
}
