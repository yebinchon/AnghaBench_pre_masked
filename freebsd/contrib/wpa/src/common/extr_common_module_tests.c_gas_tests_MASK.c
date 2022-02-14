
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wpabuf*) ;
 int FUNC_1 (int ,char*) ;
 struct wpabuf* FUNC_2 (int) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*,int ) ;
 int FUNC_5 (struct wpabuf*,int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct wpabuf *VAR_3;

 FUNC_1(VAR_0, "gas tests");
 FUNC_0(((void*)0));

 VAR_3 = FUNC_2(1);
 if (VAR_3 == ((void*)0))
  return -1;
 FUNC_0(VAR_3);
 FUNC_3(VAR_3);

 VAR_3 = FUNC_2(20);
 if (VAR_3 == ((void*)0))
  return -1;
 FUNC_5(VAR_3, VAR_1);
 FUNC_5(VAR_3, VAR_2);
 FUNC_5(VAR_3, 0);
 FUNC_4(VAR_3, 0);
 FUNC_5(VAR_3, 0);
 FUNC_0(VAR_3);
 FUNC_3(VAR_3);

 return 0;
}
