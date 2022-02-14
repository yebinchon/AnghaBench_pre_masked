
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (int) ;
 int FUNC_1 (struct wpabuf*,int) ;
 int FUNC_2 (struct wpabuf*,int ) ;

struct wpabuf * FUNC_3(void)
{
 struct wpabuf *VAR_2;






 VAR_2 = FUNC_0(8 + 4);
 if (VAR_2 == ((void*)0))
  return ((void*)0);


 FUNC_1(VAR_2, VAR_0);
 FUNC_1(VAR_2, 8);

 FUNC_2(VAR_2, VAR_1);

 FUNC_1(VAR_2, 0x02);
 FUNC_1(VAR_2, 0);

 return VAR_2;
}
