
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int dummy; } ;
struct send_action_work {unsigned int freq; size_t len; unsigned int wait_time; int buf; int bssid; int src; int dst; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct send_action_work*) ;
 int FUNC_1 (int ,int const*,size_t) ;
 struct send_action_work* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct wpa_supplicant*,unsigned int,char*,int,int ,struct send_action_work*) ;
 scalar_t__ FUNC_4 (struct wpa_supplicant*,char*) ;
 int FUNC_5 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct wpa_supplicant *VAR_3,
     unsigned int VAR_4, const u8 *VAR_5,
     const u8 *VAR_6, const u8 *VAR_7, const u8 *VAR_8,
     size_t VAR_9, unsigned int VAR_10)
{
 struct send_action_work *VAR_11;

 if (FUNC_4(VAR_3, "p2p-send-action")) {
  FUNC_5(VAR_1, "P2P: Cannot schedule new p2p-send-action work since one is already pending");
  return -1;
 }

 VAR_11 = FUNC_2(sizeof(*VAR_11) + VAR_9);
 if (VAR_11 == ((void*)0))
  return -1;

 VAR_11->freq = VAR_4;
 FUNC_1(VAR_11->dst, VAR_5, VAR_0);
 FUNC_1(VAR_11->src, VAR_6, VAR_0);
 FUNC_1(VAR_11->bssid, VAR_7, VAR_0);
 VAR_11->len = VAR_9;
 VAR_11->wait_time = VAR_10;
 FUNC_1(VAR_11->buf, VAR_8, VAR_9);

 if (FUNC_3(VAR_3, VAR_4, "p2p-send-action", 1,
      VAR_2, VAR_11) < 0) {
  FUNC_0(VAR_11);
  return -1;
 }

 return 0;
}
