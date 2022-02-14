
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
typedef int WOLFSSL_X509 ;


 int * FUNC_0 (int *,int*) ;
 struct wpabuf* FUNC_1 (int const*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_2(WOLFSSL_X509 *VAR_0)
{
 struct wpabuf *VAR_1 = ((void*)0);
 const u8 *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_0, &VAR_3);
 if (!VAR_2)
  VAR_1 = FUNC_1(VAR_2, VAR_3);

 return VAR_1;
}
