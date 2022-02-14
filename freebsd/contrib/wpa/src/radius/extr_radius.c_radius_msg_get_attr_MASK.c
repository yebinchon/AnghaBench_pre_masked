
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct radius_msg {size_t attr_used; } ;
struct radius_attr_hdr {scalar_t__ type; int length; } ;


 int FUNC_0 (scalar_t__*,struct radius_attr_hdr*,size_t) ;
 struct radius_attr_hdr* FUNC_1 (struct radius_msg*,size_t) ;

int FUNC_2(struct radius_msg *VAR_0, u8 VAR_1, u8 *VAR_2, size_t VAR_3)
{
 struct radius_attr_hdr *VAR_4 = ((void*)0), *VAR_5;
 size_t VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_0->attr_used; VAR_6++) {
  VAR_5 = FUNC_1(VAR_0, VAR_6);
  if (VAR_5->type == VAR_1) {
   VAR_4 = VAR_5;
   break;
  }
 }

 if (!VAR_4 || VAR_4->length < sizeof(*VAR_4))
  return -1;

 VAR_7 = VAR_4->length - sizeof(*VAR_4);
 if (VAR_2)
  FUNC_0(VAR_2, (VAR_4 + 1), VAR_7 > VAR_3 ? VAR_3 : VAR_7);
 return VAR_7;
}
