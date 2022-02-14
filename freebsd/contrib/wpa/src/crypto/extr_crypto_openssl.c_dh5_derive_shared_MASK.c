
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
typedef int DH ;
typedef int BIGNUM ;


 int * FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int *) ;
 size_t FUNC_3 (int *) ;
 struct wpabuf* FUNC_4 (size_t) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf const*) ;
 int FUNC_7 (struct wpabuf const*) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*,int) ;

struct wpabuf * FUNC_10(void *VAR_0, const struct wpabuf *VAR_1,
      const struct wpabuf *VAR_2)
{
 BIGNUM *VAR_3;
 struct wpabuf *VAR_4 = ((void*)0);
 size_t VAR_5;
 DH *VAR_6 = VAR_0;
 int VAR_7;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_3 = FUNC_0(FUNC_6(VAR_1), FUNC_7(VAR_1),
       ((void*)0));
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_5 = FUNC_3(VAR_6);
 VAR_4 = FUNC_4(VAR_5);
 if (VAR_4 == ((void*)0))
  goto err;

 VAR_7 = FUNC_2(FUNC_8(VAR_4), VAR_3, VAR_6);
 if (VAR_7 < 0)
  goto err;
 FUNC_9(VAR_4, VAR_7);
 FUNC_1(VAR_3);

 return VAR_4;

err:
 FUNC_1(VAR_3);
 FUNC_5(VAR_4);
 return ((void*)0);
}
