
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;





 int FUNC_0 (int*,int) ;
 int* FUNC_1 (struct wpabuf*) ;
 size_t FUNC_2 (struct wpabuf*) ;
 int* FUNC_3 (struct wpabuf*) ;
 scalar_t__ FUNC_4 (struct wpabuf*,int ) ;

void FUNC_5(struct wpabuf *VAR_0)
{
 u8 VAR_1;
 size_t VAR_2;
 u8 *VAR_3;

 if (VAR_0 == ((void*)0) || FUNC_2(VAR_0) < 2)
  return;

 VAR_1 = *(FUNC_1(VAR_0) + 1);
 switch (VAR_1) {
 case 129:
  VAR_2 = 3 + 4;
  break;
 case 128:
  VAR_2 = 7 + 4;
  break;
 case 130:
  VAR_2 = 8 + 4;
  break;
 default:
  return;
 }

 if (FUNC_2(VAR_0) < VAR_2 + 2)
  return;

 VAR_3 = FUNC_3(VAR_0) + VAR_2;
 FUNC_0(VAR_3, (u8 *) FUNC_4(VAR_0, 0) - VAR_3 - 2);
}
