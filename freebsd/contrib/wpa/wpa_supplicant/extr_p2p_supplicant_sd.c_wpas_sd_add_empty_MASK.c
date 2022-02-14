
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int * FUNC_1 (struct wpabuf*,int) ;
 int FUNC_2 (struct wpabuf*,int ) ;
 int FUNC_3 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_4(struct wpabuf *VAR_0, u8 VAR_1,
         u8 VAR_2, u8 VAR_3)
{
 u8 *VAR_4;

 if (FUNC_3(VAR_0) < 5)
  return;


 VAR_4 = FUNC_1(VAR_0, 2);
 FUNC_2(VAR_0, VAR_1);
 FUNC_2(VAR_0, VAR_2);

 FUNC_2(VAR_0, VAR_3);

 FUNC_0(VAR_4, (u8 *) FUNC_1(VAR_0, 0) - VAR_4 - 2);
}
