
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl_dst {struct wpa_ctrl_dst* next; int debug_level; int addrlen; int addr; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int sin_port; int sin_addr; int sin6_port; int sin6_addr; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct sockaddr_in*,int) ;
 struct wpa_ctrl_dst* FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct wpa_ctrl_dst **VAR_4,



         struct sockaddr_in *VAR_5,

         socklen_t VAR_6)
{
 struct wpa_ctrl_dst *VAR_7;




 VAR_7 = FUNC_4(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return -1;
 FUNC_3(&VAR_7->addr, VAR_5, sizeof(*VAR_5));
 VAR_7->addrlen = VAR_6;
 VAR_7->debug_level = VAR_3;
 VAR_7->next = *VAR_4;
 *VAR_4 = VAR_7;





 FUNC_5(VAR_2, "CTRL_IFACE monitor attached %s:%d",
     FUNC_0(VAR_5->sin_addr), FUNC_2(VAR_5->sin_port));

 return 0;
}
