
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpa_priv_interface {int ** l2; int * l2_addr; int * l2_addr_len; } ;
struct sockaddr_un {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,void*,size_t) ;
 scalar_t__ FUNC_1 (int *,struct sockaddr_un*,int ) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct wpa_priv_interface *VAR_3,
     struct sockaddr_un *VAR_4, socklen_t VAR_5,
     void *VAR_6, size_t VAR_7)
{
 u8 *VAR_8;
 u16 VAR_9;
 int VAR_10;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (VAR_3->l2_addr_len[VAR_11] == VAR_5 &&
      FUNC_1(&VAR_3->l2_addr[VAR_11], VAR_4, VAR_5) == 0)
   break;
 }
 if (VAR_11 == VAR_2) {
  FUNC_3(VAR_1,
      "No registered l2_packet socket found for send request");
  return;
 }

 if (VAR_3->l2[VAR_11] == ((void*)0))
  return;

 if (VAR_7 < VAR_0 + 2) {
  FUNC_3(VAR_1, "Too short L2 send packet (len=%lu)",
      (unsigned long) VAR_7);
  return;
 }

 VAR_8 = VAR_6;
 FUNC_2(&VAR_9, VAR_6 + VAR_0, 2);

 if (!FUNC_4(VAR_9)) {
  FUNC_3(VAR_1, "Refused l2_packet send for ethertype "
      "0x%x", VAR_9);
  return;
 }

 VAR_10 = FUNC_0(VAR_3->l2[VAR_11], VAR_8, VAR_9,
        VAR_6 + VAR_0 + 2, VAR_7 - VAR_0 - 2);
 FUNC_3(VAR_1, "L2 send[idx=%d]: res=%d", VAR_11, VAR_10);
}
