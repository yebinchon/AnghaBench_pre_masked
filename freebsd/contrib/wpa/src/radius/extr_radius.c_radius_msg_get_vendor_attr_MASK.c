
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct radius_msg {size_t attr_used; } ;
struct radius_attr_vendor {size_t vendor_length; scalar_t__ vendor_type; } ;
struct radius_attr_hdr {scalar_t__ type; int length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__* FUNC_2 (scalar_t__*,size_t) ;
 struct radius_attr_hdr* FUNC_3 (struct radius_msg*,size_t) ;

__attribute__((used)) static u8 *FUNC_4(struct radius_msg *VAR_1, u32 VAR_2,
          u8 VAR_3, size_t *VAR_4)
{
 u8 *VAR_5, *VAR_6;
 size_t VAR_7, VAR_8;

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_1->attr_used; VAR_7++) {
  struct radius_attr_hdr *VAR_9 = FUNC_3(VAR_1, VAR_7);
  size_t VAR_10;
  u32 VAR_11;
  struct radius_attr_vendor *VAR_12;

  if (VAR_9->type != VAR_0 ||
      VAR_9->length < sizeof(*VAR_9))
   continue;

  VAR_10 = VAR_9->length - sizeof(*VAR_9);
  if (VAR_10 < 4)
   continue;

  VAR_6 = (u8 *) (VAR_9 + 1);

  FUNC_1(&VAR_11, VAR_6, 4);
  VAR_6 += 4;
  VAR_10 -= 4;

  if (FUNC_0(VAR_11) != VAR_2)
   continue;

  while (VAR_10 >= sizeof(*VAR_12)) {
   VAR_12 = (struct radius_attr_vendor *) VAR_6;
   if (VAR_12->vendor_length > VAR_10 ||
       VAR_12->vendor_length < sizeof(*VAR_12)) {
    break;
   }
   if (VAR_12->vendor_type != VAR_3) {
    VAR_6 += VAR_12->vendor_length;
    VAR_10 -= VAR_12->vendor_length;
    continue;
   }

   VAR_8 = VAR_12->vendor_length - sizeof(*VAR_12);
   VAR_5 = FUNC_2(VAR_6 + sizeof(*VAR_12), VAR_8);
   if (VAR_5 == ((void*)0))
    return ((void*)0);
   if (VAR_4)
    *VAR_4 = VAR_8;
   return VAR_5;
  }
 }

 return ((void*)0);
}
