
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radius_msg {int buf; int hdr; } ;
struct radius_attr_hdr {int length; int type; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (struct radius_msg*,struct radius_attr_hdr*) ;
 int FUNC_2 (int ,char*,unsigned long) ;
 int FUNC_3 (int ) ;
 struct radius_attr_hdr* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int const*,size_t) ;
 scalar_t__ FUNC_6 (int *,size_t) ;
 size_t FUNC_7 (int ) ;

struct radius_attr_hdr *FUNC_8(struct radius_msg *VAR_2, u8 VAR_3,
         const u8 *VAR_4, size_t VAR_5)
{
 size_t VAR_6;
 struct radius_attr_hdr *VAR_7;

 if (FUNC_0())
  return ((void*)0);

 if (VAR_5 > VAR_1) {
  FUNC_2(VAR_0, "radius_msg_add_attr: too long attribute (%lu bytes)",
         (unsigned long) VAR_5);
  return ((void*)0);
 }

 VAR_6 = sizeof(*VAR_7) + VAR_5;

 if (FUNC_7(VAR_2->buf) < VAR_6) {

  if (FUNC_6(&VAR_2->buf, VAR_6) < 0)
   return ((void*)0);
  VAR_2->hdr = FUNC_3(VAR_2->buf);
 }

 VAR_7 = FUNC_4(VAR_2->buf, sizeof(struct radius_attr_hdr));
 VAR_7->type = VAR_3;
 VAR_7->length = sizeof(*VAR_7) + VAR_5;
 FUNC_5(VAR_2->buf, VAR_4, VAR_5);

 if (FUNC_1(VAR_2, VAR_7))
  return ((void*)0);

 return VAR_7;
}
