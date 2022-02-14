
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct sta_info*,int const*,size_t) ;
 int FUNC_1 (struct sta_info*) ;
 int FUNC_2 (struct sta_info*,int const*,size_t) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4(struct sta_info *VAR_1, u8 VAR_2,
          const u8 *VAR_3, size_t VAR_4,
          int *VAR_5)
{
 switch (VAR_2) {
 case 128:
  if (*VAR_5) {




   *VAR_5 = 0;
   FUNC_1(VAR_1);
  }
  FUNC_0(VAR_1, VAR_3, VAR_4);
  break;
 case 129:
  FUNC_2(VAR_1, VAR_3, VAR_4);
  break;
 default:
  FUNC_3(VAR_0,
      "MBO: Ignore unknown WNM Notification WFA subelement %u",
      VAR_2);
  break;
 }
}
