
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct radius_msg {size_t attr_used; } ;
struct radius_attr_hdr {scalar_t__ type; } ;


 struct radius_attr_hdr* FUNC_0 (struct radius_msg*,size_t) ;

u8 FUNC_1(struct radius_msg *VAR_0, u8 *VAR_1)
{
 size_t VAR_2, VAR_3;
 struct radius_attr_hdr *VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_0->attr_used; VAR_2++) {
  VAR_4 = FUNC_0(VAR_0, VAR_2);

  for (VAR_3 = 0; VAR_1[VAR_3]; VAR_3++) {
   if (VAR_4->type == VAR_1[VAR_3])
    break;
  }

  if (VAR_1[VAR_3] == 0)
   return VAR_4->type;
 }

 return 0;
}
