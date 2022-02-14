
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_interface_info {char* desc; int ifname; int drv_name; struct wpa_interface_info* next; } ;
struct wpa_global {int * drv_priv; } ;
struct wpa_driver_ops {struct wpa_interface_info* (* get_interfaces ) (int ) ;} ;


 int FUNC_0 (char*,int,char*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 struct wpa_interface_info* FUNC_2 (int ) ;
 struct wpa_driver_ops** VAR_0 ;
 int FUNC_3 (struct wpa_interface_info*) ;

__attribute__((used)) static int FUNC_4(struct wpa_global *VAR_1,
         char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 struct wpa_interface_info *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8;
 char *VAR_9, *VAR_10;

 for (VAR_4 = 0; VAR_0[VAR_4]; VAR_4++) {
  const struct wpa_driver_ops *VAR_11 = VAR_0[VAR_4];
  if (VAR_11->get_interfaces == ((void*)0))
   continue;
  VAR_8 = VAR_11->get_interfaces(VAR_1->drv_priv[VAR_4]);
  if (VAR_8 == ((void*)0))
   continue;

  if (VAR_7 == ((void*)0))
   VAR_6 = VAR_7 = VAR_8;
  else
   VAR_7->next = VAR_8;
  while (VAR_7->next)
   VAR_7 = VAR_7->next;
 }

 VAR_9 = VAR_2;
 VAR_10 = VAR_2 + VAR_3;
 for (VAR_8 = VAR_6; VAR_8; VAR_8 = VAR_8->next) {
  VAR_5 = FUNC_0(VAR_9, VAR_10 - VAR_9, "%s\t%s\t%s\n",
      VAR_8->drv_name, VAR_8->ifname,
      VAR_8->desc ? VAR_8->desc : "");
  if (FUNC_1(VAR_10 - VAR_9, VAR_5)) {
   *VAR_9 = '\0';
   break;
  }
  VAR_9 += VAR_5;
 }

 FUNC_3(VAR_6);

 return VAR_9 - VAR_2;
}
