
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (int) ;
 int FUNC_1 (struct wpabuf*) ;
 int * FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*,int ) ;
 int FUNC_5 (struct wpabuf*,int const*,size_t) ;
 int FUNC_6 (struct wpabuf*,int) ;

struct wpabuf * FUNC_7(struct wpabuf *VAR_2)
{
 struct wpabuf *VAR_3;
 const u8 *VAR_4, *VAR_5;

 VAR_3 = FUNC_0(FUNC_3(VAR_2) + 100);
 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 VAR_4 = FUNC_2(VAR_2);
 VAR_5 = VAR_4 + FUNC_3(VAR_2);

 while (VAR_5 > VAR_4) {
  size_t VAR_6 = VAR_5 - VAR_4;
  if (VAR_6 > 251)
   VAR_6 = 251;
  FUNC_6(VAR_3, VAR_0);
  FUNC_6(VAR_3, 4 + VAR_6);
  FUNC_4(VAR_3, VAR_1);
  FUNC_5(VAR_3, VAR_4, VAR_6);
  VAR_4 += VAR_6;
 }

 FUNC_1(VAR_2);

 return VAR_3;
}
