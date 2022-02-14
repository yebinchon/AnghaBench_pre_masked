
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpabuf*,scalar_t__) ;
 int FUNC_2 (struct wpabuf*,int const*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct wpabuf*) ;

int FUNC_4(struct wpabuf *VAR_3, const u8 *VAR_4)
{
 if (FUNC_3(VAR_3) < 4 + VAR_2)
  return -1;
 FUNC_0(VAR_1, "WPS:  * UUID-E");
 FUNC_1(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_2);
 FUNC_2(VAR_3, VAR_4, VAR_2);
 return 0;
}
