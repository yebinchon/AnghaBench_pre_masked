
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 struct wpabuf* FUNC_0 (int ) ;
 int FUNC_1 (struct wpabuf const*) ;
 int FUNC_2 (struct wpabuf const*) ;
 int FUNC_3 (struct wpabuf*,int ,int ) ;

struct wpabuf * FUNC_4(const struct wpabuf *VAR_0)
{
 struct wpabuf *VAR_1 = FUNC_0(FUNC_2(VAR_0));
 if (VAR_1)
  FUNC_3(VAR_1, FUNC_1(VAR_0), FUNC_2(VAR_0));
 return VAR_1;
}
