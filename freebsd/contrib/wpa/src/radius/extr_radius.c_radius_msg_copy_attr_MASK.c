
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct radius_msg {size_t attr_used; } ;
struct radius_attr_hdr {scalar_t__ type; int length; } ;


 struct radius_attr_hdr* FUNC_0 (struct radius_msg*,size_t) ;
 int FUNC_1 (struct radius_msg*,scalar_t__,scalar_t__*,int) ;

int FUNC_2(struct radius_msg *VAR_0, struct radius_msg *VAR_1,
    u8 VAR_2)
{
 struct radius_attr_hdr *VAR_3;
 size_t VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1->attr_used; VAR_4++) {
  VAR_3 = FUNC_0(VAR_1, VAR_4);
  if (VAR_3->type == VAR_2 && VAR_3->length >= sizeof(*VAR_3)) {
   if (!FUNC_1(VAR_0, VAR_2, (u8 *) (VAR_3 + 1),
       VAR_3->length - sizeof(*VAR_3)))
    return -1;
   VAR_5++;
  }
 }

 return VAR_5;
}
