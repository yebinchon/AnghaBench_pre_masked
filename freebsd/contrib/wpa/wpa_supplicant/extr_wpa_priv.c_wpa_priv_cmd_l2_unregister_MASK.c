
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_priv_interface {int ** l2; int * l2_addr; int * l2_addr_len; } ;
struct sockaddr_un {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,struct sockaddr_un*,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct wpa_priv_interface *VAR_2,
           struct sockaddr_un *VAR_3,
           socklen_t VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2->l2_addr_len[VAR_5] == VAR_4 &&
      FUNC_1(&VAR_2->l2_addr[VAR_5], VAR_3, VAR_4) == 0)
   break;
 }
 if (VAR_5 == VAR_1) {
  FUNC_2(VAR_0,
      "No registered l2_packet socket found for unregister request");
  return;
 }

 if (VAR_2->l2[VAR_5]) {
  FUNC_0(VAR_2->l2[VAR_5]);
  VAR_2->l2[VAR_5] = ((void*)0);
 }
}
