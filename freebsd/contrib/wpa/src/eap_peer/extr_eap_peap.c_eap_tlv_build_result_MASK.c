
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_peap_data {scalar_t__ crypto_binding; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct wpabuf* FUNC_0 (int ,int ,size_t,int ,int) ;
 scalar_t__ FUNC_1 (struct eap_sm*,struct eap_peap_data*,struct wpabuf*) ;
 int FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*,int) ;
 int FUNC_4 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_5(struct eap_sm *VAR_5,
         struct eap_peap_data *VAR_6,
         int VAR_7,
         int VAR_8, u16 VAR_9)
{
 struct wpabuf *VAR_10;
 size_t VAR_11;

 if (VAR_6->crypto_binding == VAR_4)
  VAR_7 = 0;

 VAR_11 = 6;
 if (VAR_7)
  VAR_11 += 60;
 VAR_10 = FUNC_0(VAR_3, VAR_2, VAR_11,
       VAR_0, VAR_8);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_10, 0x80);
 FUNC_4(VAR_10, VAR_1);
 FUNC_3(VAR_10, 2);
 FUNC_3(VAR_10, VAR_9);

 if (VAR_7 && FUNC_1(VAR_5, VAR_6, VAR_10)) {
  FUNC_2(VAR_10);
  return ((void*)0);
 }

 return VAR_10;
}
