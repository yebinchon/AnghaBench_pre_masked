
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ p2p_group_interface; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,struct wpa_supplicant*,int *) ;
 int VAR_1 ;
 int FUNC_1 (struct wpa_supplicant*) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_2,
          struct wpa_supplicant *VAR_3)
{
 if (VAR_3 == VAR_2 && VAR_2 &&
     VAR_2->p2p_group_interface != VAR_0) {






  if (FUNC_0(0, 0, VAR_1,
        VAR_2, ((void*)0)) < 0)
   return -1;
  return 0;
 }

 return FUNC_1(VAR_2);
}
