
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {int bssid; scalar_t__ msg_3_of_4_ok; scalar_t__ ft_protocol; scalar_t__ ft_reassoc_completed; scalar_t__ fils_completed; int dot11RSNA4WayHandshakeFailures; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct wpa_sm*,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct wpa_sm*) ;
 int FUNC_3 (struct wpa_sm*) ;
 int FUNC_4 (struct wpa_sm*) ;
 scalar_t__ FUNC_5 (struct wpa_sm*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct wpa_sm*) ;

void FUNC_7(struct wpa_sm *VAR_4)
{
 FUNC_0(VAR_3, VAR_4, ((void*)0));
 FUNC_0(VAR_2, VAR_4, ((void*)0));
 FUNC_3(VAR_4);
 FUNC_2(VAR_4);
 if (FUNC_5(VAR_4) == VAR_1)
  VAR_4->dot11RSNA4WayHandshakeFailures++;
 FUNC_4(VAR_4);

 VAR_4->msg_3_of_4_ok = 0;
 FUNC_1(VAR_4->bssid, 0, VAR_0);
}
