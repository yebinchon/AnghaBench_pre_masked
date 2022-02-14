
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_message {int const* device_id; int const* p2p_device_addr; } ;
typedef int msg ;


 int FUNC_0 (struct p2p_message*,int ,int) ;
 scalar_t__ FUNC_1 (struct wpabuf const*,struct p2p_message*) ;

const u8 * FUNC_2(const struct wpabuf *VAR_0)
{
 struct p2p_message VAR_1;

 FUNC_0(&VAR_1, 0, sizeof(VAR_1));
 if (FUNC_1(VAR_0, &VAR_1))
  return ((void*)0);

 if (VAR_1.p2p_device_addr)
  return VAR_1.p2p_device_addr;
 if (VAR_1.device_id)
  return VAR_1.device_id;

 return ((void*)0);
}
