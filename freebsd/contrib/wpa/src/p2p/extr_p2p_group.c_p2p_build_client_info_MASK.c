
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct p2p_message {int p2p_device_info_len; scalar_t__* capability; scalar_t__* p2p_device_info; int p2p_device_addr; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int ,int) ;
 int FUNC_1 (struct p2p_message*,int ,int) ;
 scalar_t__ FUNC_2 (struct wpabuf*,struct p2p_message*) ;
 struct wpabuf* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct wpabuf*) ;
 scalar_t__* FUNC_5 (struct wpabuf*,int) ;
 int FUNC_6 (struct wpabuf*,scalar_t__ const*,int) ;
 int FUNC_7 (struct wpabuf*,scalar_t__) ;

__attribute__((used)) static struct wpabuf * FUNC_8(const u8 *VAR_1,
          struct wpabuf *VAR_2,
          u8 *VAR_3, u8 *VAR_4)
{
 const u8 *VAR_5;
 struct p2p_message VAR_6;
 u8 *VAR_7;
 struct wpabuf *VAR_8;

 if (VAR_2 == ((void*)0))
  return ((void*)0);

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 if (FUNC_2(VAR_2, &VAR_6) ||
     VAR_6.capability == ((void*)0) || VAR_6.p2p_device_info == ((void*)0))
  return ((void*)0);

 VAR_8 = FUNC_3(VAR_0 + 1 + 1 + VAR_6.p2p_device_info_len);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 *VAR_3 = VAR_6.capability[0];
 FUNC_0(VAR_4, VAR_6.p2p_device_addr, VAR_0);

 VAR_5 = VAR_6.p2p_device_info;



 VAR_7 = FUNC_5(VAR_8, 1);

 FUNC_6(VAR_8, VAR_5, VAR_0);

 FUNC_6(VAR_8, VAR_1, VAR_0);

 FUNC_7(VAR_8, VAR_6.capability[0]);





 FUNC_6(VAR_8, VAR_5 + VAR_0,
   VAR_6.p2p_device_info_len - VAR_0);

 *VAR_7 = FUNC_4(VAR_8) - 1;


 return VAR_8;
}
