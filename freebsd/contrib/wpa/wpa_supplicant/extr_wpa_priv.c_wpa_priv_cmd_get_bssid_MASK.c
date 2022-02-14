
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
struct wpa_priv_interface {int fd; int * drv_priv; TYPE_1__* driver; } ;
struct sockaddr_un {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_2__ {scalar_t__ (* get_bssid ) (int *,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,struct sockaddr*,int ) ;
 scalar_t__ FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(struct wpa_priv_interface *VAR_1,
       struct sockaddr_un *VAR_2, socklen_t VAR_3)
{
 u8 VAR_4[VAR_0];

 if (VAR_1->drv_priv == ((void*)0))
  goto fail;

 if (VAR_1->driver->get_bssid == ((void*)0) ||
     VAR_1->driver->get_bssid(VAR_1->drv_priv, VAR_4) < 0)
  goto fail;

 FUNC_0(VAR_1->fd, VAR_4, VAR_0, 0, (struct sockaddr *) VAR_2,
        VAR_3);
 return;

fail:
 FUNC_0(VAR_1->fd, "", 0, 0, (struct sockaddr *) VAR_2, VAR_3);
}
