
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct radius_msg {size_t attr_used; } ;
struct radius_attr_hdr {scalar_t__ type; int length; } ;


 scalar_t__ VAR_0 ;
 struct radius_attr_hdr* FUNC_0 (struct radius_msg*,size_t) ;
 struct wpabuf* FUNC_1 (size_t) ;
 int FUNC_2 (struct wpabuf*,struct radius_attr_hdr*,int) ;

struct wpabuf * FUNC_3(struct radius_msg *VAR_1)
{
 struct wpabuf *VAR_2;
 size_t VAR_3, VAR_4;
 struct radius_attr_hdr *VAR_5;

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1->attr_used; VAR_4++) {
  VAR_5 = FUNC_0(VAR_1, VAR_4);
  if (VAR_5->type == VAR_0 &&
      VAR_5->length > sizeof(struct radius_attr_hdr))
   VAR_3 += VAR_5->length - sizeof(struct radius_attr_hdr);
 }

 if (VAR_3 == 0)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_3);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_1->attr_used; VAR_4++) {
  VAR_5 = FUNC_0(VAR_1, VAR_4);
  if (VAR_5->type == VAR_0 &&
      VAR_5->length > sizeof(struct radius_attr_hdr)) {
   int VAR_6 = VAR_5->length - sizeof(*VAR_5);
   FUNC_2(VAR_2, VAR_5 + 1, VAR_6);
  }
 }

 return VAR_2;
}
