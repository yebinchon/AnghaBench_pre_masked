
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (struct wpabuf*,int ) ;
 struct wpabuf* FUNC_1 (int ,int) ;
 int FUNC_2 (struct wpabuf*,int *) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*,struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_7(u16 VAR_1[], size_t VAR_2,
          struct wpabuf *VAR_3)
{
 struct wpabuf *VAR_4;
 size_t VAR_5;
 u8 *VAR_6;

 VAR_4 = FUNC_1(0, 4 + VAR_2 * 2 +
      (VAR_3 ? FUNC_4(VAR_3) : 0));
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 if (VAR_2 > 0) {
  VAR_6 = FUNC_0(VAR_4, VAR_0);
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
   FUNC_6(VAR_4, VAR_1[VAR_5]);
  FUNC_2(VAR_4, VAR_6);
 }
 if (VAR_3)
  FUNC_5(VAR_4, VAR_3);

 FUNC_3(VAR_4);

 return VAR_4;
}
