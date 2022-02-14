
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct hostap_sta_driver_data {int rx_packets; int tx_retry_failed; int tx_packets; } ;


 int FUNC_0 (char*,size_t,char*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 int FUNC_2 (struct wpa_supplicant*,struct hostap_sta_driver_data*) ;

__attribute__((used)) static int FUNC_3(struct wpa_supplicant *VAR_0, char *VAR_1,
          size_t VAR_2)
{
 struct hostap_sta_driver_data VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, &VAR_3);
 if (VAR_4)
  return -1;

 VAR_4 = FUNC_0(VAR_1, VAR_2, "TXGOOD=%lu\nTXBAD=%lu\nRXGOOD=%lu\n",
     VAR_3.tx_packets, VAR_3.tx_retry_failed, VAR_3.rx_packets);
 if (FUNC_1(VAR_2, VAR_4))
  return -1;
 return VAR_4;
}
