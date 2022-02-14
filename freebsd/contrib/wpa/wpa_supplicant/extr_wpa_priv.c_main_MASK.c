
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_priv_interface {struct wpa_priv_interface* next; } ;
struct wpa_priv_global {struct wpa_priv_interface* interfaces; } ;
typedef int global ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int,char**,char*) ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct wpa_priv_global*,int ,int) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 char* FUNC_12 (char*) ;
 int FUNC_13 () ;
 int VAR_4 ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 () ;
 int FUNC_16 (struct wpa_priv_interface*) ;
 struct wpa_priv_interface* FUNC_17 (struct wpa_priv_global*,char*,char*) ;
 int VAR_5 ;

int FUNC_18(int VAR_6, char *VAR_7[])
{
 int VAR_8, VAR_9;
 int VAR_10 = -1;
 char *VAR_11 = ((void*)0);
 int VAR_12 = 0;
 char *VAR_13 = "/var/run/wpa_priv";
 struct wpa_priv_global VAR_14;
 struct wpa_priv_interface *VAR_15;

 if (FUNC_11())
  return -1;

 FUNC_15();

 FUNC_9(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.interfaces = ((void*)0);

 for (;;) {
  VAR_8 = FUNC_5(VAR_6, VAR_7, "Bc:dP:");
  if (VAR_8 < 0)
   break;
  switch (VAR_8) {
  case 'B':
   VAR_12++;
   break;
  case 'c':
   VAR_13 = VAR_2;
   break;
  case 'd':
   VAR_4--;
   break;
  case 'P':
   VAR_11 = FUNC_12(VAR_2);
   break;
  default:
   FUNC_13();
   goto out2;
  }
 }

 if (VAR_3 >= VAR_6) {
  FUNC_13();
  goto out2;
 }

 FUNC_14(VAR_0, "wpa_priv control directory: '%s'", VAR_13);

 if (FUNC_1()) {
  FUNC_14(VAR_1, "Failed to initialize event loop");
  goto out2;
 }

 for (VAR_9 = VAR_3; VAR_9 < VAR_6; VAR_9++) {
  FUNC_14(VAR_0, "Adding driver:interface %s", VAR_7[VAR_9]);
  VAR_15 = FUNC_17(&VAR_14, VAR_13, VAR_7[VAR_9]);
  if (VAR_15 == ((void*)0))
   goto out;
  VAR_15->next = VAR_14.interfaces;
  VAR_14.interfaces = VAR_15;
 }

 if (VAR_12 && FUNC_6(VAR_11) && FUNC_4())
  goto out;

 FUNC_2(VAR_5, ((void*)0));
 FUNC_3();

 VAR_10 = 0;

out:
 VAR_15 = VAR_14.interfaces;
 while (VAR_15) {
  struct wpa_priv_interface *VAR_16 = VAR_15;
  VAR_15 = VAR_15->next;
  FUNC_16(VAR_16);
 }

 FUNC_0();

out2:
 if (VAR_12)
  FUNC_7(VAR_11);
 FUNC_8(VAR_11);
 FUNC_10();

 return VAR_10;
}
