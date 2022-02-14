
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct p2p_data*,struct wpabuf*,struct wpabuf*,int*,unsigned int) ;
 struct wpabuf* FUNC_1 (struct p2p_data*,int *,int ) ;
 int FUNC_2 (int ,char*) ;
 struct wpabuf* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct wpabuf*) ;
 scalar_t__ FUNC_5 (struct wpabuf*) ;

struct wpabuf * FUNC_6(struct p2p_data *VAR_1,
           unsigned int VAR_2)
{
 struct wpabuf *VAR_3, *VAR_4;
 u8 VAR_5[] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };
 int VAR_6;

 VAR_3 = FUNC_1(VAR_1, ((void*)0), 0);
 if (!VAR_3) {
  FUNC_2(VAR_0,
      "CTRL: Failed to build Probe Response IEs");
  return ((void*)0);
 }

 VAR_4 = FUNC_3(200 + FUNC_5(VAR_3));
 if (!VAR_4) {
  FUNC_4(VAR_3);
  return ((void*)0);
 }

 VAR_6 = FUNC_0(VAR_1, VAR_4, VAR_3, VAR_5, VAR_2);
 FUNC_4(VAR_3);
 if (VAR_6) {
  FUNC_4(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
