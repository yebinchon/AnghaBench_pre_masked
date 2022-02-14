
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {int session; } ;
typedef int gnutls_mac_algorithm_t ;
typedef scalar_t__ gnutls_kx_algorithm_t ;
typedef int gnutls_cipher_algorithm_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*,size_t,char*,char const*,char const*,...) ;
 scalar_t__ FUNC_7 (size_t,int) ;

int FUNC_8(void *VAR_1, struct tls_connection *VAR_2,
     char *VAR_3, size_t VAR_4)
{
 gnutls_cipher_algorithm_t VAR_5;
 gnutls_kx_algorithm_t VAR_6;
 gnutls_mac_algorithm_t VAR_7;
 const char *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;

 VAR_5 = FUNC_0(VAR_2->session);
 VAR_9 = FUNC_1(VAR_5);
 if (!VAR_9)
  VAR_9 = "";

 VAR_6 = FUNC_2(VAR_2->session);
 VAR_8 = FUNC_3(VAR_6);
 if (!VAR_8)
  VAR_8 = "";

 VAR_7 = FUNC_4(VAR_2->session);
 VAR_10 = FUNC_5(VAR_7);
 if (!VAR_10)
  VAR_10 = "";

 if (VAR_6 == VAR_0)
  VAR_11 = FUNC_6(VAR_3, VAR_4, "%s-%s", VAR_9, VAR_10);
 else
  VAR_11 = FUNC_6(VAR_3, VAR_4, "%s-%s-%s",
      VAR_8, VAR_9, VAR_10);
 if (FUNC_7(VAR_4, VAR_11))
  return -1;

 return 0;
}
