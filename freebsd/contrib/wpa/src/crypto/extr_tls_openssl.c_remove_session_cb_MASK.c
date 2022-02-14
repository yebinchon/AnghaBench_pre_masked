
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
typedef int SSL_SESSION ;
typedef int SSL_CTX ;


 int VAR_0 ;
 struct wpabuf* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,struct wpabuf*,int *) ;
 int FUNC_3 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_4(SSL_CTX *VAR_2, SSL_SESSION *VAR_3)
{
 struct wpabuf *VAR_4;

 if (VAR_1 < 0)
  return;
 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (!VAR_4)
  return;
 FUNC_2(VAR_0,
     "OpenSSL: Free application session data %p (sess %p)",
     VAR_4, VAR_3);
 FUNC_3(VAR_4);

 FUNC_1(VAR_3, VAR_1, ((void*)0));
}
