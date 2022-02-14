
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mss_info {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct resource* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int,struct resource*) ;
 int FUNC_3 (struct resource*,int ) ;
 int FUNC_4 (struct resource*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct mss_info *VAR_4, device_t VAR_5)
{
 struct resource *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_9 = 0;
 VAR_8 = -1;
 VAR_6 = FUNC_1(VAR_5, VAR_3, &VAR_9, VAR_0);
 if (VAR_6) {
  for (VAR_7 = 0; VAR_7 < 1000; VAR_7++) {
   if ((FUNC_3(VAR_6, VAR_2) & 0x80))
    FUNC_0((VAR_7 > 100) ? 1000 : 10);
   else {
    FUNC_4(VAR_6, VAR_1, 0x09);
    break;
   }
  }
  for (VAR_7 = 0; VAR_7 < 1000; VAR_7++) {
   if ((FUNC_3(VAR_6, VAR_2) & 0x80))
    FUNC_0((VAR_7 > 100) ? 1000 : 10);
   else {
    FUNC_4(VAR_6, VAR_1, 0x00);
    VAR_8 = 0;
    break;
   }
  }
  FUNC_0(1000);
  FUNC_2(VAR_5, VAR_3, VAR_9, VAR_6);
 }
 return VAR_8;
}
