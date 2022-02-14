
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 int FUNC_0 (int ,int ,size_t) ;
 struct wpabuf* FUNC_1 (size_t) ;
 int FUNC_2 (struct wpabuf*) ;
 size_t FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*,size_t) ;
 int FUNC_5 (struct wpabuf*,struct wpabuf*) ;

struct wpabuf * FUNC_6(struct wpabuf *VAR_0, size_t VAR_1)
{
 struct wpabuf *VAR_2;
 size_t VAR_3;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3 >= VAR_1)
  return VAR_0;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_0(FUNC_4(VAR_2, VAR_1 - VAR_3), 0, VAR_1 - VAR_3);
  FUNC_5(VAR_2, VAR_0);
 }
 FUNC_2(VAR_0);

 return VAR_2;
}
