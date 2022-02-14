
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct p2ps_advertisement {char state; scalar_t__ svc_info; scalar_t__ svc_name; int config_methods; int id; struct p2ps_advertisement* next; } ;
struct TYPE_2__ {int p2p; } ;


 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct p2ps_advertisement*,char const*,size_t) ;
 scalar_t__ FUNC_2 (scalar_t__,char const*,size_t) ;
 size_t FUNC_3 (scalar_t__) ;
 struct p2ps_advertisement* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char const*,size_t) ;
 int FUNC_6 (int ,char*,...) ;
 char* FUNC_7 (struct wpabuf*,int) ;
 int FUNC_8 (struct wpabuf*,int ) ;
 int FUNC_9 (struct wpabuf*,scalar_t__,size_t) ;
 int FUNC_10 (struct wpabuf*,int ) ;
 int FUNC_11 (struct wpabuf*,int ) ;
 int FUNC_12 (struct wpabuf*,char) ;
 size_t FUNC_13 (struct wpabuf*) ;
 int FUNC_14 (struct wpabuf*,char,char) ;
 int FUNC_15 (struct wpabuf*,char,char) ;
 int FUNC_16 (struct wpabuf*,char,char) ;

__attribute__((used)) static void FUNC_17(struct wpa_supplicant *VAR_3,
       struct wpabuf *VAR_4, u8 VAR_5,
       const u8 *VAR_6, size_t VAR_7)
{
 struct p2ps_advertisement *VAR_8;
 const u8 *VAR_9 = &VAR_6[1];
 const u8 *VAR_10 = ((void*)0);
 size_t VAR_11 = VAR_6[0];
 size_t VAR_12 = 0;
 int VAR_13 = 0;
 u8 *VAR_14 = ((void*)0);
 u8 *VAR_15 = ((void*)0);

 FUNC_5(VAR_0, "P2P: SD Request for ASP", VAR_6, VAR_7);

 if (!VAR_3->global->p2p) {
  FUNC_6(VAR_0, "P2P: ASP protocol not available");
  FUNC_16(VAR_4, VAR_2, VAR_5);
  return;
 }


 if (VAR_11 + 1 < VAR_7) {
  VAR_10 = &VAR_9[VAR_11];
  VAR_12 = *VAR_10++;
 }


 if (VAR_11 + (VAR_12 ? VAR_12 + 2 : 1) > VAR_7) {
  FUNC_6(VAR_0, "P2P: ASP bad request");
  FUNC_14(VAR_4, VAR_2, VAR_5);
  return;
 }


 if (VAR_11 && VAR_9[VAR_11 - 1] == '*') {
  VAR_13 = 1;
  VAR_11--;
 }

 for (VAR_8 = FUNC_4(VAR_3->global->p2p);
      VAR_8; VAR_8 = VAR_8->next) {

  if (!VAR_13 && VAR_11 != FUNC_3(VAR_8->svc_name))
   continue;


  if (FUNC_2(VAR_8->svc_name, VAR_9, VAR_11) == 0 &&
      FUNC_1(VAR_8, VAR_10, VAR_12)) {
   size_t VAR_16 = FUNC_3(VAR_8->svc_name);
   size_t VAR_17 = 0;

   if (VAR_8->svc_info)
    VAR_17 = FUNC_3(VAR_8->svc_info);

   if (VAR_16 > 0xff || VAR_17 > 0xffff)
    return;


   if (!VAR_15 && !VAR_14) {
    if (FUNC_13(VAR_4) <
        VAR_16 + VAR_17 + 16)
     return;

    VAR_15 = FUNC_7(VAR_4, 2);
    FUNC_12(VAR_4, VAR_2);
    FUNC_12(VAR_4, VAR_5);

    FUNC_12(VAR_4, VAR_1);
    VAR_14 = FUNC_7(VAR_4, 1);
    *VAR_14 = 0;
   } else if (FUNC_13(VAR_4) <
       VAR_16 + VAR_17 + 10)
    return;

   if (VAR_17) {
    FUNC_6(VAR_0,
        "P2P: Add Svc: %s info: %s",
        VAR_8->svc_name,
        VAR_8->svc_info);
   } else {
    FUNC_6(VAR_0, "P2P: Add Svc: %s",
        VAR_8->svc_name);
   }


   FUNC_11(VAR_4, VAR_8->id);


   FUNC_8(VAR_4, VAR_8->config_methods);


   FUNC_12(VAR_4, (u8) VAR_16);
   FUNC_9(VAR_4, VAR_8->svc_name, VAR_16);


   FUNC_12(VAR_4, VAR_8->state);


   FUNC_10(VAR_4, (u16) VAR_17);
   FUNC_9(VAR_4, VAR_8->svc_info, VAR_17);


   (*VAR_14)++;
   FUNC_0(VAR_15,
         (u8 *) FUNC_7(VAR_4, 0) - VAR_15 - 2);
  }
 }


 if (VAR_14 == ((void*)0)) {
  FUNC_6(VAR_0, "P2P: ASP service not found");
  FUNC_15(VAR_4, VAR_2, VAR_5);
 }
}
