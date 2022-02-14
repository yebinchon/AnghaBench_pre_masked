
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int dummy; } ;
struct TYPE_2__ {int sin_port; int sin_addr; int sin6_port; int sin6_addr; } ;
struct wpa_ctrl_dst {int debug_level; int errors; int addrlen; TYPE_1__ addr; struct wpa_ctrl_dst* next; } ;
struct sockaddr {int dummy; } ;
typedef int levelstr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char*,int,char*,...) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int ,...) ;
 int FUNC_11 (struct wpa_ctrl_dst**,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_12(struct wpa_supplicant *VAR_5,
        const char *VAR_6, int VAR_7,
        struct wpa_ctrl_dst **VAR_8,
        int VAR_9, const char *VAR_10,
        size_t VAR_11)
{
 struct wpa_ctrl_dst *VAR_12, *VAR_13;
 char VAR_14[64];
 int VAR_15;
 char *VAR_16;
 int VAR_17;




 VAR_12 = *VAR_8;
 if (VAR_7 < 0 || VAR_12 == ((void*)0))
  return;

 if (VAR_6)
  FUNC_6(VAR_14, sizeof(VAR_14), "IFACE=%s <%d>",
       VAR_6, VAR_9);
 else
  FUNC_6(VAR_14, sizeof(VAR_14), "<%d>", VAR_9);

 VAR_17 = FUNC_7(VAR_14);
 VAR_16 = FUNC_4(VAR_17 + VAR_11);
 if (VAR_16 == ((void*)0))
  return;

 FUNC_5(VAR_16, VAR_14, VAR_17);
 FUNC_5(VAR_16 + VAR_17, VAR_10, VAR_11);

 VAR_15 = 0;
 while (VAR_12) {
  VAR_13 = VAR_12->next;
  if (VAR_9 >= VAR_12->debug_level) {






   FUNC_10(VAR_2, "CTRL_IFACE monitor send %s:%d",
       FUNC_0(VAR_12->addr.sin_addr),
       FUNC_2(VAR_12->addr.sin_port));

   if (FUNC_8(VAR_7, VAR_16, VAR_17 + VAR_11, 0,
       (struct sockaddr *) &VAR_12->addr,
       sizeof(VAR_12->addr)) < 0) {
    FUNC_10(VAR_3,
        "sendto(CTRL_IFACE monitor): %s",
        FUNC_9(VAR_4));
    VAR_12->errors++;
    if (VAR_12->errors > 10) {
     FUNC_11(
      VAR_8, &VAR_12->addr,
      VAR_12->addrlen);
    }
   } else
    VAR_12->errors = 0;
  }
  VAR_15++;
  VAR_12 = VAR_13;
 }
 FUNC_3(VAR_16);
}
