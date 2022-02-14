
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_capa {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_driver_capa*,int ,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, struct wpa_driver_capa *VAR_3)
{
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->flags = VAR_1 |
        VAR_0;
 return 0;
}
