
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct ieee802_1x_mka_participant {void* active; struct ieee802_1x_kay* kay; } ;
struct ieee802_1x_kay {void* active; int l2_mka; int if_name; } ;
struct ieee802_1x_hdr {int dummy; } ;
struct ieee8023_hdr {int dummy; } ;
struct TYPE_3__ {scalar_t__ (* body_length ) (struct ieee802_1x_mka_participant*) ;scalar_t__ (* body_present ) (struct ieee802_1x_mka_participant*) ;} ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_1 (struct ieee802_1x_mka_participant*,struct wpabuf*) ;
 int FUNC_2 (int ,int *,int ,int ,int ) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_3 (struct ieee802_1x_mka_participant*) ;
 scalar_t__ FUNC_4 (struct ieee802_1x_mka_participant*) ;
 int FUNC_5 (int ,char*,struct wpabuf*) ;
 int FUNC_6 (int ,char*,...) ;
 struct wpabuf* FUNC_7 (size_t) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*) ;

__attribute__((used)) static int
FUNC_11(
 struct ieee802_1x_mka_participant *VAR_5)
{
 struct wpabuf *VAR_6;
 struct ieee802_1x_kay *VAR_7 = VAR_5->kay;
 size_t VAR_8 = 0;
 unsigned int VAR_9;

 FUNC_6(VAR_0, "KaY: Encode and send an MKPDU (ifname=%s)",
     VAR_7->if_name);
 VAR_8 += sizeof(struct ieee802_1x_hdr) + sizeof(struct ieee8023_hdr);
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
  if (VAR_4[VAR_9].body_present &&
      VAR_4[VAR_9].body_present(VAR_5))
   VAR_8 += VAR_4[VAR_9].body_length(VAR_5);
 }

 VAR_6 = FUNC_7(VAR_8);
 if (!VAR_6) {
  FUNC_6(VAR_1, "KaY: out of memory");
  return -1;
 }

 if (FUNC_1(VAR_5, VAR_6)) {
  FUNC_6(VAR_1, "KaY: encode mkpdu fail");
  return -1;
 }

 FUNC_5(VAR_2, "KaY: Outgoing MKPDU", VAR_6);
 FUNC_2(VAR_7->l2_mka, ((void*)0), 0, FUNC_9(VAR_6), FUNC_10(VAR_6));
 FUNC_8(VAR_6);

 VAR_7->active = VAR_3;
 VAR_5->active = VAR_3;

 return 0;
}
