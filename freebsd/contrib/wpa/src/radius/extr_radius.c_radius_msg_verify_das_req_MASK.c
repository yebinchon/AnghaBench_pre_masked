
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zero ;
struct radius_attr_hdr {scalar_t__ type; } ;
typedef struct radius_attr_hdr u8 ;
struct radius_msg {size_t attr_used; TYPE_1__* hdr; int buf; } ;
struct radius_hdr {int dummy; } ;
typedef int orig_authenticator ;
struct TYPE_2__ {struct radius_attr_hdr* authenticator; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct radius_attr_hdr const*,size_t,int ,int,struct radius_attr_hdr*) ;
 int FUNC_1 (int,struct radius_attr_hdr const**,size_t*,struct radius_attr_hdr*) ;
 scalar_t__ FUNC_2 (struct radius_attr_hdr*,struct radius_attr_hdr*,int) ;
 int FUNC_3 (struct radius_attr_hdr*,struct radius_attr_hdr*,int) ;
 int FUNC_4 (struct radius_attr_hdr*,int ,int) ;
 struct radius_attr_hdr* FUNC_5 (struct radius_msg*,size_t) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct radius_msg *VAR_3, const u8 *VAR_4,
         size_t VAR_5,
         int VAR_6)
{
 const u8 *VAR_7[4];
 size_t VAR_8[4];
 u8 VAR_9[VAR_0];
 u8 VAR_10[VAR_0];
 u8 VAR_11[VAR_0], VAR_12[VAR_0];
 u8 VAR_13[16];

 struct radius_attr_hdr *VAR_14 = ((void*)0), *VAR_15;
 size_t VAR_16;

 FUNC_4(VAR_9, 0, sizeof(VAR_9));
 VAR_7[0] = (u8 *) VAR_3->hdr;
 VAR_8[0] = sizeof(struct radius_hdr) - VAR_0;
 VAR_7[1] = VAR_9;
 VAR_8[1] = VAR_0;
 VAR_7[2] = (u8 *) (VAR_3->hdr + 1);
 VAR_8[2] = FUNC_8(VAR_3->buf) - sizeof(struct radius_hdr);
 VAR_7[3] = VAR_4;
 VAR_8[3] = VAR_5;
 FUNC_1(4, VAR_7, VAR_8, VAR_10);
 if (FUNC_2(VAR_3->hdr->authenticator, VAR_10, VAR_0) != 0)
  return 1;

 for (VAR_16 = 0; VAR_16 < VAR_3->attr_used; VAR_16++) {
  VAR_15 = FUNC_5(VAR_3, VAR_16);
  if (VAR_15->type == VAR_2) {
   if (VAR_14 != ((void*)0)) {
    FUNC_6(VAR_1, "Multiple "
        "Message-Authenticator attributes "
        "in RADIUS message");
    return 1;
   }
   VAR_14 = VAR_15;
  }
 }

 if (VAR_14 == ((void*)0)) {
  if (VAR_6) {
   FUNC_6(VAR_1,
       "Missing Message-Authenticator attribute in RADIUS message");
   return 1;
  }
  return 0;
 }

 FUNC_3(VAR_12, VAR_14 + 1, VAR_0);
 FUNC_4(VAR_14 + 1, 0, VAR_0);
 FUNC_3(VAR_13, VAR_3->hdr->authenticator,
    sizeof(VAR_13));
 FUNC_4(VAR_3->hdr->authenticator, 0,
    sizeof(VAR_3->hdr->authenticator));
 FUNC_0(VAR_4, VAR_5, FUNC_7(VAR_3->buf),
   FUNC_8(VAR_3->buf), VAR_11);
 FUNC_3(VAR_14 + 1, VAR_12, VAR_0);
 FUNC_3(VAR_3->hdr->authenticator, VAR_13,
    sizeof(VAR_13));

 return FUNC_2(VAR_12, VAR_11, VAR_0) != 0;
}
