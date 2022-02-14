
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct dh_group {size_t prime_len; int order_len; int order; int prime; int * generator; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,size_t,int ,int ,int ,int ,int ,int ,int ,size_t*) ;
 int FUNC_1 (int ,char*,struct wpabuf*) ;
 int FUNC_2 (int ,char*) ;
 struct wpabuf* FUNC_3 (size_t) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf const*) ;
 int FUNC_6 (struct wpabuf const*) ;
 int FUNC_7 (struct wpabuf*) ;
 int FUNC_8 (struct wpabuf*,size_t) ;

struct wpabuf * FUNC_9(const struct wpabuf *VAR_2,
     const struct wpabuf *VAR_3,
     const struct dh_group *VAR_4)
{
 struct wpabuf *VAR_5;
 size_t VAR_6;

 if (VAR_4 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_6 = VAR_4->prime_len;
 VAR_5 = FUNC_3(VAR_6);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 if (FUNC_0(*VAR_4->generator, VAR_4->prime, VAR_4->prime_len,
        VAR_4->order, VAR_4->order_len,
        FUNC_5(VAR_3),
        FUNC_6(VAR_3),
        FUNC_5(VAR_2),
        FUNC_6(VAR_2),
        FUNC_7(VAR_5), &VAR_6) < 0) {
  FUNC_4(VAR_5);
  FUNC_2(VAR_1, "DH: crypto_dh_derive_secret failed");
  return ((void*)0);
 }
 FUNC_8(VAR_5, VAR_6);
 FUNC_1(VAR_0, "DH: shared key", VAR_5);

 return VAR_5;
}
