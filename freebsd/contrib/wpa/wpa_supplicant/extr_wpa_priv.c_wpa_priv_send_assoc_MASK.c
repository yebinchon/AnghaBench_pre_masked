
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int req_ies_len; int resp_ies_len; int beacon_ies_len; int* req_ies; int* resp_ies; int* beacon_ies; } ;
union wpa_event_data {TYPE_1__ assoc_info; } ;
typedef int u8 ;
struct wpa_priv_interface {int dummy; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (struct wpa_priv_interface*,int,int *,size_t) ;

__attribute__((used)) static void FUNC_4(struct wpa_priv_interface *VAR_0, int VAR_1,
    union wpa_event_data *VAR_2)
{
 size_t VAR_3 = 3 * sizeof(int);
 u8 *VAR_4, *VAR_5;
 int VAR_6;

 if (VAR_2) {
  VAR_3 += VAR_2->assoc_info.req_ies_len +
   VAR_2->assoc_info.resp_ies_len +
   VAR_2->assoc_info.beacon_ies_len;
 }

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 == ((void*)0))
  return;

 VAR_5 = VAR_4;

 if (VAR_2 && VAR_2->assoc_info.req_ies) {
  VAR_6 = VAR_2->assoc_info.req_ies_len;
  FUNC_2(VAR_5, &VAR_6, sizeof(int));
  VAR_5 += sizeof(int);
  FUNC_2(VAR_5, VAR_2->assoc_info.req_ies, VAR_6);
  VAR_5 += VAR_6;
 } else {
  VAR_6 = 0;
  FUNC_2(VAR_5, &VAR_6, sizeof(int));
  VAR_5 += sizeof(int);
 }

 if (VAR_2 && VAR_2->assoc_info.resp_ies) {
  VAR_6 = VAR_2->assoc_info.resp_ies_len;
  FUNC_2(VAR_5, &VAR_6, sizeof(int));
  VAR_5 += sizeof(int);
  FUNC_2(VAR_5, VAR_2->assoc_info.resp_ies, VAR_6);
  VAR_5 += VAR_6;
 } else {
  VAR_6 = 0;
  FUNC_2(VAR_5, &VAR_6, sizeof(int));
  VAR_5 += sizeof(int);
 }

 if (VAR_2 && VAR_2->assoc_info.beacon_ies) {
  VAR_6 = VAR_2->assoc_info.beacon_ies_len;
  FUNC_2(VAR_5, &VAR_6, sizeof(int));
  VAR_5 += sizeof(int);
  FUNC_2(VAR_5, VAR_2->assoc_info.beacon_ies, VAR_6);
  VAR_5 += VAR_6;
 } else {
  VAR_6 = 0;
  FUNC_2(VAR_5, &VAR_6, sizeof(int));
  VAR_5 += sizeof(int);
 }

 FUNC_3(VAR_0, VAR_1, VAR_4, VAR_3);

 FUNC_0(VAR_4);
}
