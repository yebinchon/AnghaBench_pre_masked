
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int FUNC_0 (struct wpabuf*,int ,int ) ;
 struct wpabuf* FUNC_1 (int ,int) ;
 int FUNC_2 (struct wpabuf*,int) ;

struct wpabuf * FUNC_3(u8 VAR_0, size_t VAR_1)
{
 struct wpabuf *VAR_2;

 VAR_2 = FUNC_1(VAR_0, 4 + VAR_1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 FUNC_0(VAR_2, 0, 0);

 FUNC_2(VAR_2, 2);

 return VAR_2;
}
