
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibss_rsn_peer {struct wpa_state_machine* auth; struct ibss_rsn_peer* next; } ;
struct ibss_rsn {struct ibss_rsn_peer* peers; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, int (*VAR_2)(struct wpa_state_machine *VAR_3,
        void *VAR_4),
        void *VAR_5)
{
 struct ibss_rsn *VAR_6 = VAR_1;
 struct ibss_rsn_peer *VAR_7;

 FUNC_0(VAR_0, "AUTH: for_each_sta");

 for (VAR_7 = VAR_6->peers; VAR_7; VAR_7 = VAR_7->next) {
  if (VAR_7->auth && VAR_2(VAR_7->auth, VAR_5))
   return 1;
 }

 return 0;
}
