
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpabuf*,int) ;
 int FUNC_2 (struct wpabuf*,int) ;
 int FUNC_3 (struct wpabuf*) ;

int FUNC_4(struct wpabuf *VAR_2)
{





 if (FUNC_3(VAR_2) < 5)
  return -1;
 FUNC_0(VAR_1, "WPS:  * Version (hardcoded 0x10)");
 FUNC_1(VAR_2, VAR_0);
 FUNC_1(VAR_2, 1);
 FUNC_2(VAR_2, 0x10);
 return 0;
}
