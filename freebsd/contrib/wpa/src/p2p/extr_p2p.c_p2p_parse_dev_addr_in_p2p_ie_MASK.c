
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_message {scalar_t__ device_id; scalar_t__ p2p_device_addr; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (struct p2p_message*,int ,int) ;
 scalar_t__ FUNC_2 (struct wpabuf*,struct p2p_message*) ;

int FUNC_3(struct wpabuf *VAR_1, u8 *VAR_2)
{
 struct p2p_message VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 if (FUNC_2(VAR_1, &VAR_3))
  return -1;

 if (VAR_3.p2p_device_addr) {
  FUNC_0(VAR_2, VAR_3.p2p_device_addr, VAR_0);
  return 0;
 } else if (VAR_3.device_id) {
  FUNC_0(VAR_2, VAR_3.device_id, VAR_0);
  return 0;
 }
 return -1;
}
