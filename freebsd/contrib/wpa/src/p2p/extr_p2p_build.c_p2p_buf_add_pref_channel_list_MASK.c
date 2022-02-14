
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const,int*,int*) ;
 int FUNC_1 (int ,char*,int const) ;
 int FUNC_2 (struct wpabuf*,int ) ;
 int FUNC_3 (struct wpabuf*,int) ;

void FUNC_4(struct wpabuf *VAR_4,
       const u32 *VAR_5,
       unsigned int VAR_6)
{
 unsigned int VAR_7, VAR_8 = 0;
 u8 VAR_9, VAR_10;

 if (!VAR_6)
  return;






 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (FUNC_0(VAR_5[VAR_7], &VAR_9,
     &VAR_10) == 0)
   VAR_8++;
 }

 FUNC_3(VAR_4, VAR_3);
 FUNC_3(VAR_4, 4 + VAR_8 * sizeof(u16));
 FUNC_2(VAR_4, VAR_1);
 FUNC_3(VAR_4, VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (FUNC_0(VAR_5[VAR_7], &VAR_9,
     &VAR_10) < 0) {
   FUNC_1(VAR_0, "Unsupported frequency %u MHz",
       VAR_5[VAR_7]);
   continue;
  }
  FUNC_3(VAR_4, VAR_9);
  FUNC_3(VAR_4, VAR_10);
 }
}
