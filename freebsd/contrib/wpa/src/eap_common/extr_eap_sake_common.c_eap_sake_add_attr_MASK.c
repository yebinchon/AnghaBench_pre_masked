
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int FUNC_0 (int ,int ,size_t) ;
 int FUNC_1 (struct wpabuf*,size_t) ;
 int FUNC_2 (struct wpabuf*,int const*,size_t) ;
 int FUNC_3 (struct wpabuf*,int) ;

void FUNC_4(struct wpabuf *VAR_0, u8 VAR_1, const u8 *VAR_2,
         size_t VAR_3)
{
 FUNC_3(VAR_0, VAR_1);
 FUNC_3(VAR_0, 2 + VAR_3);
 if (VAR_2)
  FUNC_2(VAR_0, VAR_2, VAR_3);
 else
  FUNC_0(FUNC_1(VAR_0, VAR_3), 0, VAR_3);
}
