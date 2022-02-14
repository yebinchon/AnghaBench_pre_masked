
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct radius_attr_hdr {scalar_t__ type; } const radius_attr_hdr ;
typedef struct radius_attr_hdr const u8 ;
struct radius_msg {size_t attr_used; TYPE_1__* hdr; int buf; } ;
typedef int orig_authenticator ;
struct TYPE_2__ {struct radius_attr_hdr const* authenticator; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct radius_attr_hdr const*,size_t,int ,int ,struct radius_attr_hdr const*) ;
 scalar_t__ FUNC_1 (struct radius_attr_hdr const*,struct radius_attr_hdr const*,int) ;
 int FUNC_2 (struct radius_attr_hdr const*,struct radius_attr_hdr const*,int) ;
 int FUNC_3 (struct radius_attr_hdr const*,int ,int) ;
 struct radius_attr_hdr const* FUNC_4 (struct radius_msg*,size_t) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct radius_msg *VAR_3, const u8 *VAR_4,
          size_t VAR_5, const u8 *VAR_6)
{
 u8 VAR_7[VAR_0], VAR_8[VAR_0];
 u8 VAR_9[16];
 struct radius_attr_hdr *VAR_10 = ((void*)0), *VAR_11;
 size_t VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_3->attr_used; VAR_12++) {
  VAR_11 = FUNC_4(VAR_3, VAR_12);
  if (VAR_11->type == VAR_2) {
   if (VAR_10 != ((void*)0)) {
    FUNC_5(VAR_1, "Multiple Message-Authenticator attributes in RADIUS message");
    return 1;
   }
   VAR_10 = VAR_11;
  }
 }

 if (VAR_10 == ((void*)0)) {
  FUNC_5(VAR_1, "No Message-Authenticator attribute found");
  return 1;
 }

 FUNC_2(VAR_8, VAR_10 + 1, VAR_0);
 FUNC_3(VAR_10 + 1, 0, VAR_0);
 if (VAR_6) {
  FUNC_2(VAR_9, VAR_3->hdr->authenticator,
     sizeof(VAR_9));
  FUNC_2(VAR_3->hdr->authenticator, VAR_6,
     sizeof(VAR_3->hdr->authenticator));
 }
 if (FUNC_0(VAR_4, VAR_5, FUNC_6(VAR_3->buf),
       FUNC_7(VAR_3->buf), VAR_7) < 0)
  return 1;
 FUNC_2(VAR_10 + 1, VAR_8, VAR_0);
 if (VAR_6) {
  FUNC_2(VAR_3->hdr->authenticator, VAR_9,
     sizeof(VAR_9));
 }

 if (FUNC_1(VAR_8, VAR_7, VAR_0) != 0) {
  FUNC_5(VAR_1, "Invalid Message-Authenticator!");
  return 1;
 }

 return 0;
}
