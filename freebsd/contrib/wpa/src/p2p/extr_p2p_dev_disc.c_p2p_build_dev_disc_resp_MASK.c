
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (struct wpabuf*) ;
 int FUNC_1 (struct wpabuf*,int ,int ) ;
 int FUNC_2 (struct wpabuf*,int ) ;
 int FUNC_3 (struct wpabuf*,int *) ;
 struct wpabuf* FUNC_4 (int) ;

__attribute__((used)) static struct wpabuf * FUNC_5(u8 VAR_1, u8 VAR_2)
{
 struct wpabuf *VAR_3;
 u8 *VAR_4;

 VAR_3 = FUNC_4(100);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_3, VAR_0, VAR_1);

 VAR_4 = FUNC_0(VAR_3);
 FUNC_2(VAR_3, VAR_2);
 FUNC_3(VAR_3, VAR_4);

 return VAR_3;
}
