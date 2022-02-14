
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct dh_group {size_t prime_len; int prime; int * generator; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,size_t,int ,int ) ;
 int FUNC_1 (int ,char*,struct wpabuf*) ;
 int FUNC_2 (int ,char*,struct wpabuf*) ;
 int FUNC_3 (int ,char*) ;
 struct wpabuf* FUNC_4 (size_t) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*,size_t) ;

struct wpabuf * FUNC_8(const struct dh_group *VAR_2, struct wpabuf **VAR_3)
{
 struct wpabuf *VAR_4;
 size_t VAR_5;

 if (VAR_2 == ((void*)0))
  return ((void*)0);

 FUNC_5(*VAR_3);
 *VAR_3 = FUNC_4(VAR_2->prime_len);
 if (*VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_5 = VAR_2->prime_len;
 VAR_4 = FUNC_4(VAR_5);
 if (VAR_4 == ((void*)0)) {
  FUNC_5(*VAR_3);
  *VAR_3 = ((void*)0);
  return ((void*)0);
 }
 if (FUNC_0(*VAR_2->generator, VAR_2->prime, VAR_2->prime_len,
      FUNC_6(*VAR_3), FUNC_6(VAR_4)) < 0) {
  FUNC_5(VAR_4);
  FUNC_3(VAR_1, "DH: crypto_dh_init failed");
  FUNC_5(*VAR_3);
  *VAR_3 = ((void*)0);
  return ((void*)0);
 }
 FUNC_7(*VAR_3, VAR_2->prime_len);
 FUNC_7(VAR_4, VAR_2->prime_len);
 FUNC_2(VAR_0, "DH: private value", *VAR_3);
 FUNC_1(VAR_0, "DH: public value", VAR_4);

 return VAR_4;
}
