
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_priv_interface {scalar_t__* l2; } ;
struct sockaddr_un {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct wpa_priv_interface *VAR_1,
           struct sockaddr_un *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->l2[VAR_3])
   FUNC_0(VAR_1->l2[VAR_3]);
 }
}
