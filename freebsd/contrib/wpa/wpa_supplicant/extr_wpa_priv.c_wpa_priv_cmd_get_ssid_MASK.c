
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
struct wpa_priv_interface {int fd; int * drv_priv; TYPE_1__* driver; } ;
struct sockaddr_un {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int ssid ;
typedef int socklen_t ;
struct TYPE_2__ {int (* get_ssid ) (int *,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,char*,int,int ,struct sockaddr*,int ) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(struct wpa_priv_interface *VAR_1,
      struct sockaddr_un *VAR_2, socklen_t VAR_3)
{
 u8 VAR_4[sizeof(int) + VAR_0];
 int VAR_5;

 if (VAR_1->drv_priv == ((void*)0))
  goto fail;

 if (VAR_1->driver->get_ssid == ((void*)0))
  goto fail;

 FUNC_1(VAR_4, 0, sizeof(VAR_4));
 VAR_5 = VAR_1->driver->get_ssid(VAR_1->drv_priv, &VAR_4[sizeof(int)]);
 if (VAR_5 < 0 || VAR_5 > VAR_0)
  goto fail;
 FUNC_0(VAR_4, &VAR_5, sizeof(int));

 FUNC_2(VAR_1->fd, VAR_4, sizeof(VAR_4), 0, (struct sockaddr *) VAR_2,
        VAR_3);
 return;

fail:
 FUNC_2(VAR_1->fd, "", 0, 0, (struct sockaddr *) VAR_2, VAR_3);
}
