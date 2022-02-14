
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 struct wpabuf* FUNC_0 (struct wpabuf const*) ;
 int FUNC_1 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_2(struct wpabuf **VAR_0, const struct wpabuf *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return -1;

 FUNC_1(*VAR_0);
 *VAR_0 = FUNC_0(VAR_1);
 return *VAR_0 ? 0 : -1;
}
