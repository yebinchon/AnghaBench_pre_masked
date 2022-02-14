
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 struct wpabuf* FUNC_0 (int) ;
 int FUNC_1 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf *
FUNC_2(u8 VAR_1, u8 VAR_2, size_t VAR_3)
{
 struct wpabuf *VAR_4;

 VAR_4 = FUNC_0(100 + VAR_3);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_4, VAR_0);
 FUNC_1(VAR_4, VAR_1);
 FUNC_1(VAR_4, VAR_2);

 return VAR_4;
}
