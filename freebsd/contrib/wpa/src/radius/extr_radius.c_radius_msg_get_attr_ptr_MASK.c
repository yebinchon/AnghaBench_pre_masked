
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct radius_msg {size_t attr_used; } ;
struct radius_attr_hdr {scalar_t__ type; int length; } ;


 struct radius_attr_hdr* FUNC_0 (struct radius_msg*,size_t) ;

int FUNC_1(struct radius_msg *VAR_0, u8 VAR_1, u8 **VAR_2,
       size_t *VAR_3, const u8 *VAR_4)
{
 size_t VAR_5;
 struct radius_attr_hdr *VAR_6 = ((void*)0), *VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_0->attr_used; VAR_5++) {
  VAR_7 = FUNC_0(VAR_0, VAR_5);
  if (VAR_7->type == VAR_1 &&
      (VAR_4 == ((void*)0) || (u8 *) VAR_7 > VAR_4)) {
   VAR_6 = VAR_7;
   break;
  }
 }

 if (!VAR_6 || VAR_6->length < sizeof(*VAR_6))
  return -1;

 *VAR_2 = (u8 *) (VAR_6 + 1);
 *VAR_3 = VAR_6->length - sizeof(*VAR_6);
 return 0;
}
