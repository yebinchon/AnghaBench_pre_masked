
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_1 (struct wpabuf*,int ) ;
 int FUNC_2 (struct wpabuf*,int*) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*,int ) ;
 int FUNC_5 (struct wpabuf*,int const*,size_t) ;
 int FUNC_6 (struct wpabuf*,int) ;

void FUNC_7(u32 VAR_6, const u8 *VAR_7, size_t VAR_8,
         struct wpabuf *VAR_9)
{
 u8 *VAR_10;

 if (VAR_9 == ((void*)0))
  return;

 VAR_10 = FUNC_1(VAR_9, VAR_0);
 FUNC_4(VAR_9, VAR_5);
 FUNC_6(VAR_9, VAR_1);
 if (VAR_6 == FUNC_0(VAR_3)) {
  FUNC_6(VAR_9, VAR_3);
  FUNC_6(VAR_9, 0);
  if (VAR_7)
   FUNC_5(VAR_9, VAR_7, VAR_8);
 } else if (VAR_6 == FUNC_0(VAR_2)) {
  FUNC_6(VAR_9, VAR_2);
  FUNC_6(VAR_9, 0);
  if (VAR_7)
   FUNC_5(VAR_9, VAR_7, VAR_8);
 } else {
  u8 VAR_11;
  FUNC_6(VAR_9, VAR_4);
  FUNC_6(VAR_9, 0);
  for (VAR_11 = 0; VAR_11 < 32; VAR_11++) {
   if (VAR_6 & FUNC_0(VAR_11))
    FUNC_6(VAR_9, VAR_11);
  }
 }
 FUNC_2(VAR_9, VAR_10);

 FUNC_3(VAR_9);
}
