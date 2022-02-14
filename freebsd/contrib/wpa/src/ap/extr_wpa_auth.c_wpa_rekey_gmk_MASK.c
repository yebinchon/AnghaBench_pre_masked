
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ wpa_gmk_rekey; } ;
struct wpa_authenticator {TYPE_2__ conf; TYPE_1__* group; } ;
struct TYPE_3__ {int GMK; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ,void (*) (void*,void*),struct wpa_authenticator*,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct wpa_authenticator*,int *,int ,char*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(void *VAR_4, void *VAR_5)
{
 struct wpa_authenticator *VAR_6 = VAR_4;

 if (FUNC_1(VAR_6->group->GMK, VAR_3)) {
  FUNC_4(VAR_2, "Failed to get random data for WPA "
      "initialization.");
 } else {
  FUNC_2(VAR_6, ((void*)0), VAR_0, "GMK rekeyd");
  FUNC_3(VAR_1, "GMK",
    VAR_6->group->GMK, VAR_3);
 }

 if (VAR_6->conf.wpa_gmk_rekey) {
  FUNC_0(VAR_6->conf.wpa_gmk_rekey, 0,
           FUNC_5, VAR_6, ((void*)0));
 }
}
