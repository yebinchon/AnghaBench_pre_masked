
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 scalar_t__ FUNC_0 (char const*,int ,size_t) ;
 size_t FUNC_1 (char const*) ;
 struct wpabuf* FUNC_2 (size_t) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*,size_t) ;

struct wpabuf * FUNC_5(const char *VAR_0)
{
 size_t VAR_1;
 struct wpabuf *VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 & 0x01)
  return ((void*)0);
 VAR_1 /= 2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 if (FUNC_0(VAR_0, FUNC_4(VAR_2, VAR_1), VAR_1)) {
  FUNC_3(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
