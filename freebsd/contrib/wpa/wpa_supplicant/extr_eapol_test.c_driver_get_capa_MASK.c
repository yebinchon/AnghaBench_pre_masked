
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_capa {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_driver_capa*,int ,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, struct wpa_driver_capa *VAR_2)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->flags = VAR_0;
 return 0;
}
