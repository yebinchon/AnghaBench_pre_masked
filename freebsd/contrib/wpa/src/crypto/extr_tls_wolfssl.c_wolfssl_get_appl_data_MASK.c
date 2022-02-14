
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct tls_connection {int ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,struct wpabuf*) ;
 int FUNC_4 (int ,char*,...) ;
 struct wpabuf* FUNC_5 (size_t) ;
 int FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*) ;
 int FUNC_8 (struct wpabuf*,int) ;
 int FUNC_9 (struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_10(struct tls_connection *VAR_4,
          size_t VAR_5)
{
 int VAR_6;
 struct wpabuf *VAR_7 = FUNC_5(VAR_5 + 100);

 if (!VAR_7)
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_4->ssl, FUNC_7(VAR_7),
      FUNC_9(VAR_7));
 if (VAR_6 < 0) {
  int VAR_8 = FUNC_1(VAR_4->ssl, VAR_6);

  if (VAR_8 == VAR_2 || VAR_8 == VAR_3) {
   FUNC_4(VAR_0,
       "SSL: No Application Data included");
  } else {
   char VAR_9[80];

   FUNC_4(VAR_0,
       "Failed to read possible Application Data %s",
       FUNC_0(VAR_8, VAR_9));
  }

  FUNC_6(VAR_7);
  return ((void*)0);
 }

 FUNC_8(VAR_7, VAR_6);
 FUNC_3(VAR_1,
       "SSL: Application Data in Finished message",
       VAR_7);
 return VAR_7;
}
