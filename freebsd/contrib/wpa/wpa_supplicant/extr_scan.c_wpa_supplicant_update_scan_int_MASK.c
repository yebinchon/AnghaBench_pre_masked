
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int scan_interval; } ;
struct os_reltime {int sec; scalar_t__ usec; } ;


 int FUNC_0 (int ,struct wpa_supplicant*,int *,struct os_reltime*) ;
 int FUNC_1 (int,scalar_t__,int ,struct wpa_supplicant*,int *) ;
 scalar_t__ FUNC_2 (struct os_reltime*,struct os_reltime*) ;
 int VAR_0 ;

void FUNC_3(struct wpa_supplicant *VAR_1, int VAR_2)
{
 struct os_reltime VAR_3, VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, ((void*)0),
          &VAR_3);

 VAR_4.sec = VAR_2;
 VAR_4.usec = 0;
 if (VAR_5 && FUNC_2(&VAR_3, &VAR_4)) {
  VAR_4.sec = VAR_3.sec;
  VAR_4.usec = VAR_3.usec;
 }

 if (VAR_5) {
  FUNC_1(VAR_4.sec, VAR_4.usec,
           VAR_0, VAR_1, ((void*)0));
 }
 VAR_1->scan_interval = VAR_2;
}
