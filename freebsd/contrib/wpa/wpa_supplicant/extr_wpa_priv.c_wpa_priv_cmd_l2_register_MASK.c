
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpa_priv_interface {int fd; int ** l2; TYPE_1__* l2_ctx; int ifname; int * l2_addr_len; int * l2_addr; } ;
struct sockaddr_un {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_2__ {int idx; struct wpa_priv_interface* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ,int *,int,int ,TYPE_1__*,int) ;
 int FUNC_3 (int *,struct sockaddr_un*,int ) ;
 int FUNC_4 (int ,int *,int,int ,struct sockaddr*,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct wpa_priv_interface *VAR_4,
         struct sockaddr_un *VAR_5,
         socklen_t VAR_6,
         void *VAR_7, size_t VAR_8)
{
 int *VAR_9 = VAR_7;
 u8 VAR_10[VAR_0];
 int VAR_11;
 u16 VAR_12;
 int VAR_13;

 if (VAR_8 != 2 * sizeof(int)) {
  FUNC_5(VAR_1, "Invalid l2_register length %lu",
      (unsigned long) VAR_8);
  return;
 }

 VAR_12 = VAR_9[0];
 if (!FUNC_6(VAR_12)) {
  FUNC_5(VAR_1, "Refused l2_packet connection for "
      "ethertype 0x%x", VAR_12);
  return;
 }

 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  if (!VAR_4->l2[VAR_13])
   break;
 }
 if (VAR_13 == VAR_2) {
  FUNC_5(VAR_1, "No free l2_packet connection found");
  return;
 }

 FUNC_3(&VAR_4->l2_addr[VAR_13], VAR_5, VAR_6);
 VAR_4->l2_addr_len[VAR_13] = VAR_6;

 VAR_4->l2_ctx[VAR_13].idx = VAR_13;
 VAR_4->l2_ctx[VAR_13].parent = VAR_4;
 VAR_4->l2[VAR_13] = FUNC_2(VAR_4->ifname, ((void*)0), VAR_12,
     VAR_3, &VAR_4->l2_ctx[VAR_13],
     VAR_9[1]);
 if (!VAR_4->l2[VAR_13]) {
  FUNC_5(VAR_1, "Failed to initialize l2_packet "
      "instance for protocol %d", VAR_12);
  return;
 }

 if (FUNC_1(VAR_4->l2[VAR_13], VAR_10) < 0) {
  FUNC_5(VAR_1, "Failed to get own address from "
      "l2_packet");
  FUNC_0(VAR_4->l2[VAR_13]);
  VAR_4->l2[VAR_13] = ((void*)0);
  return;
 }

 VAR_11 = FUNC_4(VAR_4->fd, VAR_10, VAR_0, 0,
       (struct sockaddr *) VAR_5, VAR_6);
 FUNC_5(VAR_1, "L2 registration[idx=%d]: res=%d", VAR_13, VAR_11);
}
