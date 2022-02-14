
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
typedef int FILE ;


 unsigned char* FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *,char*,char const*,unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (struct wpabuf const*) ;
 int FUNC_4 (struct wpabuf const*) ;

__attribute__((used)) static void FUNC_5(FILE *VAR_0, const char *VAR_1,
      const struct wpabuf *VAR_2)
{
 unsigned char *VAR_3;

 VAR_3 = FUNC_0(FUNC_3(VAR_2), FUNC_4(VAR_2), ((void*)0));
 if (VAR_3 == ((void*)0))
  return;
 FUNC_1(VAR_0, "%s\n-----BEGIN CERTIFICATE-----\n%s"
  "-----END CERTIFICATE-----\n\n", VAR_1, VAR_3);
 FUNC_2(VAR_3);
}
