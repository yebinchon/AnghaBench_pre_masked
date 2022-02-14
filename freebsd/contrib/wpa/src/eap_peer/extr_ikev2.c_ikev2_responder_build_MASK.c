
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct ikev2_responder_data {int state; } ;
 struct wpabuf* FUNC_0 (struct ikev2_responder_data*) ;
 struct wpabuf* FUNC_1 (struct ikev2_responder_data*) ;
 struct wpabuf* FUNC_2 (struct ikev2_responder_data*) ;

struct wpabuf * FUNC_3(struct ikev2_responder_data *VAR_0)
{
 switch (VAR_0->state) {
 case 128:
  return FUNC_2(VAR_0);
 case 129:
  return FUNC_1(VAR_0);
 case 133:
  return ((void*)0);
 case 130:
  return FUNC_0(VAR_0);
 case 132:
 case 131:
  return ((void*)0);
 }
 return ((void*)0);
}
