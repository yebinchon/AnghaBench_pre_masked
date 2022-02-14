
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {int session; } ;
typedef scalar_t__ gnutls_protocol_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,size_t) ;

int FUNC_2(void *VAR_3, struct tls_connection *VAR_4,
      char *VAR_5, size_t VAR_6)
{
 gnutls_protocol_t VAR_7;

 VAR_7 = FUNC_0(VAR_4->session);
 if (VAR_7 == VAR_0)
  FUNC_1(VAR_5, "TLSv1", VAR_6);
 else if (VAR_7 == VAR_1)
  FUNC_1(VAR_5, "TLSv1.1", VAR_6);
 else if (VAR_7 == VAR_2)
  FUNC_1(VAR_5, "TLSv1.2", VAR_6);
 else
  return -1;
 return 0;
}
