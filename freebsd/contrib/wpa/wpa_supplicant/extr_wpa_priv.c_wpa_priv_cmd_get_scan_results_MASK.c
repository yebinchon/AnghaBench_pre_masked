
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_priv_interface {int fd; TYPE_1__* driver; int * drv_priv; } ;
struct sockaddr_un {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_2__ {scalar_t__ get_scan_results2; } ;


 int FUNC_0 (int ,char*,int ,int ,struct sockaddr*,int ) ;
 int FUNC_1 (struct wpa_priv_interface*,struct sockaddr_un*,int ) ;

__attribute__((used)) static void FUNC_2(struct wpa_priv_interface *VAR_0,
       struct sockaddr_un *VAR_1,
       socklen_t VAR_2)
{
 if (VAR_0->drv_priv == ((void*)0))
  return;

 if (VAR_0->driver->get_scan_results2)
  FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  FUNC_0(VAR_0->fd, "", 0, 0, (struct sockaddr *) VAR_1, VAR_2);
}
