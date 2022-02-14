
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpa_supplicant {int dummy; } ;
struct mesh_peer_mgmt_ie {scalar_t__ const* chosen_pmk; scalar_t__ const* proto_id; scalar_t__ const* llid; scalar_t__ const* reason; scalar_t__ const* plid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct mesh_peer_mgmt_ie*,int ,int) ;
 int FUNC_1 (struct wpa_supplicant*,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_5,
        u8 VAR_6,
        const u8 *VAR_7, size_t VAR_8,
        struct mesh_peer_mgmt_ie *VAR_9)
{
 FUNC_0(VAR_9, 0, sizeof(*VAR_9));


 if (VAR_8 >= VAR_4) {
  VAR_9->chosen_pmk = VAR_7 + VAR_8 - VAR_4;
  VAR_8 -= VAR_4;
 }

 if ((VAR_6 == VAR_3 && VAR_8 != 4) ||
     (VAR_6 == VAR_2 && VAR_8 != 6) ||
     (VAR_6 == VAR_1 && VAR_8 != 6 && VAR_8 != 8)) {
  FUNC_1(VAR_5, VAR_0, "MPM: Invalid peer mgmt ie");
  return -1;
 }


 if (VAR_8 < 4)
  return -1;
 VAR_9->proto_id = VAR_7;
 VAR_9->llid = VAR_7 + 2;
 VAR_7 += 4;
 VAR_8 -= 4;


 if (VAR_6 == VAR_1) {
  if (VAR_8 < 2)
   return -1;
  VAR_9->reason = VAR_7 + VAR_8 - 2;
  VAR_8 -= 2;
 }


 if (VAR_8 >= 2)
  VAR_9->plid = VAR_7;

 return 0;
}
