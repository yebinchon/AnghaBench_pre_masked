
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_group {scalar_t__ wpa_group_state; scalar_t__ GKeyDoneStations; scalar_t__ GTKReKey; scalar_t__ GTKAuthenticator; scalar_t__ GInit; } ;
struct wpa_authenticator {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct wpa_authenticator*,struct wpa_group*) ;
 int FUNC_1 (struct wpa_authenticator*,struct wpa_group*) ;
 int FUNC_2 (struct wpa_authenticator*,struct wpa_group*) ;

__attribute__((used)) static void FUNC_3(struct wpa_authenticator *VAR_4,
         struct wpa_group *VAR_5)
{
 if (VAR_5->GInit) {
  FUNC_0(VAR_4, VAR_5);
 } else if (VAR_5->wpa_group_state == VAR_0) {

 } else if (VAR_5->wpa_group_state == VAR_1 &&
     VAR_5->GTKAuthenticator) {
  FUNC_2(VAR_4, VAR_5);
 } else if (VAR_5->wpa_group_state == VAR_3 &&
     VAR_5->GTKReKey) {
  FUNC_1(VAR_4, VAR_5);
 } else if (VAR_5->wpa_group_state == VAR_2) {
  if (VAR_5->GKeyDoneStations == 0)
   FUNC_2(VAR_4, VAR_5);
  else if (VAR_5->GTKReKey)
   FUNC_1(VAR_4, VAR_5);
 }
}
