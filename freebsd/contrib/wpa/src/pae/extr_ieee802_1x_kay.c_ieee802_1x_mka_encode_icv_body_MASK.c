
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_5__ {int len; int key; } ;
struct ieee802_1x_mka_participant {TYPE_2__ ick; TYPE_1__* kay; } ;
struct ieee802_1x_mka_icv_body {int type; } ;
struct TYPE_6__ {scalar_t__ icv_len; scalar_t__ (* icv_hash ) (int ,int ,int ,int ,int *) ;} ;
struct TYPE_4__ {size_t mka_algindex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (struct ieee802_1x_mka_participant*) ;
 TYPE_3__* VAR_6 ;
 int FUNC_1 (struct ieee802_1x_mka_icv_body*,int *,unsigned int) ;
 int FUNC_2 (struct ieee802_1x_mka_icv_body*,unsigned int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ,char*,int *,unsigned int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*) ;
 struct ieee802_1x_mka_icv_body* FUNC_8 (struct wpabuf*,unsigned int) ;

__attribute__((used)) static int
FUNC_9(struct ieee802_1x_mka_participant *VAR_7,
          struct wpabuf *VAR_8)
{
 struct ieee802_1x_mka_icv_body *VAR_9;
 unsigned int VAR_10;
 u8 VAR_11[VAR_1];

 VAR_10 = FUNC_0(VAR_7);
 if (VAR_6[VAR_7->kay->mka_algindex].icv_len !=
     VAR_0) {
  FUNC_5(VAR_4, "KaY: ICV Indicator");
  VAR_9 = FUNC_8(VAR_8, VAR_2);
  VAR_9->type = VAR_3;
  VAR_10 -= VAR_2;
  FUNC_2(VAR_9, VAR_10);
 }

 if (VAR_6[VAR_7->kay->mka_algindex].icv_hash(
      VAR_7->ick.key, VAR_7->ick.len,
      FUNC_6(VAR_8), FUNC_7(VAR_8), VAR_11)) {
  FUNC_5(VAR_5, "KaY: failed to calculate ICV");
  return -1;
 }
 FUNC_4(VAR_4, "KaY: ICV", VAR_11, VAR_10);

 FUNC_1(FUNC_8(VAR_8, VAR_10), VAR_11, VAR_10);

 return 0;
}
