
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct multi_band_ie {scalar_t__ eid; int len; scalar_t__ band_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ const* FUNC_0 (struct multi_band_ie const*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__* FUNC_2 (struct wpabuf const*) ;
 size_t FUNC_3 (struct wpabuf const*) ;

__attribute__((used)) static const u8 * FUNC_4(const struct wpabuf *VAR_2,
        u8 VAR_3)
{
 const u8 *VAR_4 = FUNC_2(VAR_2);
 size_t VAR_5 = FUNC_3(VAR_2);

 while (VAR_5 >= 2) {
  const struct multi_band_ie *VAR_6 =
   (const struct multi_band_ie *) VAR_4;

  if (VAR_6->eid != VAR_1) {
   FUNC_1(VAR_0, "unexpected eid %d", VAR_6->eid);
   return ((void*)0);
  }

  if (VAR_6->len < sizeof(*VAR_6) - 2 || VAR_6->len > VAR_5 - 2) {
   FUNC_1(VAR_0, "invalid mbie len %d",
       VAR_6->len);
   return ((void*)0);
  }

  if (VAR_6->band_id == VAR_3)
   return FUNC_0(VAR_6);

  VAR_4 += 2 + VAR_6->len;
  VAR_5 -= 2 + VAR_6->len;
 }

 FUNC_1(VAR_0, "mbie doesn't contain band %d", VAR_3);
 return ((void*)0);
}
