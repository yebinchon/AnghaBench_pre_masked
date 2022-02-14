
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct radius_msg {size_t attr_used; } ;
struct radius_attr_hdr {scalar_t__ type; int length; } ;


 struct radius_attr_hdr* FUNC_0 (struct radius_msg*,size_t) ;

int FUNC_1(struct radius_msg *VAR_0, u8 VAR_1, int VAR_2)
{
 size_t VAR_3;
 int VAR_4;

 for (VAR_4 = 0, VAR_3 = 0; VAR_3 < VAR_0->attr_used; VAR_3++) {
  struct radius_attr_hdr *VAR_5 = FUNC_0(VAR_0, VAR_3);
  if (VAR_5->type == VAR_1 &&
      VAR_5->length >= sizeof(struct radius_attr_hdr) + VAR_2)
   VAR_4++;
 }

 return VAR_4;
}
