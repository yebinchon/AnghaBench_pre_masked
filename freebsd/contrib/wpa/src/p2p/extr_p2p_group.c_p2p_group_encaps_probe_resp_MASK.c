
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (size_t) ;
 int * FUNC_1 (struct wpabuf*) ;
 size_t FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*,int ) ;
 int FUNC_4 (struct wpabuf*,int const*,size_t) ;
 int FUNC_5 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_6(struct wpabuf *VAR_2)
{
 struct wpabuf *VAR_3;
 const u8 *VAR_4, *VAR_5;
 size_t VAR_6;

 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_2) + 100;

 VAR_3 = FUNC_0(VAR_6);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_2);
 VAR_5 = VAR_4 + FUNC_2(VAR_2);

 while (VAR_5 > VAR_4) {
  size_t VAR_7 = VAR_5 - VAR_4;
  if (VAR_7 > 251)
   VAR_7 = 251;
  FUNC_5(VAR_3, VAR_1);
  FUNC_5(VAR_3, 4 + VAR_7);
  FUNC_3(VAR_3, VAR_0);
  FUNC_4(VAR_3, VAR_4, VAR_7);
  VAR_4 += VAR_7;
 }

 return VAR_3;
}
