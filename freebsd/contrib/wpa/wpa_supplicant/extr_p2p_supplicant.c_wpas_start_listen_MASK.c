
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpas_p2p_listen_work {unsigned int freq; unsigned int duration; int * probe_resp_ie; } ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {scalar_t__ p2p_listen_work; } ;


 int VAR_0 ;
 struct wpas_p2p_listen_work* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,unsigned int,char*,int ,int ,struct wpas_p2p_listen_work*) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (struct wpabuf const*) ;
 int FUNC_4 (struct wpas_p2p_listen_work*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(void *VAR_2, unsigned int VAR_3,
        unsigned int VAR_4,
        const struct wpabuf *VAR_5)
{
 struct wpa_supplicant *VAR_6 = VAR_2;
 struct wpas_p2p_listen_work *VAR_7;

 if (VAR_6->p2p_listen_work) {
  FUNC_2(VAR_0, "P2P: Reject start_listen since p2p_listen_work already exists");
  return -1;
 }

 VAR_7 = FUNC_0(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return -1;
 VAR_7->freq = VAR_3;
 VAR_7->duration = VAR_4;
 if (VAR_5) {
  VAR_7->probe_resp_ie = FUNC_3(VAR_5);
  if (VAR_7->probe_resp_ie == ((void*)0)) {
   FUNC_4(VAR_7);
   return -1;
  }
 }

 if (FUNC_1(VAR_6, VAR_3, "p2p-listen", 0, VAR_1,
      VAR_7) < 0) {
  FUNC_4(VAR_7);
  return -1;
 }

 return 0;
}
