
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 struct wpabuf* FUNC_0 (int const*,size_t,int ) ;
 int FUNC_1 (struct wpabuf*,char*,char*) ;
 int FUNC_2 (struct wpabuf*) ;

int FUNC_3(const u8 *VAR_1, size_t VAR_2, char *VAR_3, char *VAR_4)
{
 struct wpabuf *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_0);
 if (VAR_5 == ((void*)0))
  return 0;

 VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_4);
 FUNC_2(VAR_5);
 return VAR_6;
}
