
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
typedef int WOLFSSL_SESSION ;
typedef int WOLFSSL_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int ,char*,struct wpabuf*,int *) ;
 int FUNC_3 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_4(WOLFSSL_CTX *VAR_2, WOLFSSL_SESSION *VAR_3)
{
 struct wpabuf *VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (!VAR_4)
  return;
 FUNC_2(VAR_0,
     "wolfSSL: Free application session data %p (sess %p)",
     VAR_4, VAR_3);
 FUNC_3(VAR_4);

 FUNC_1(VAR_3, VAR_1, ((void*)0));
}
