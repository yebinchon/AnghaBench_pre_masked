
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection_params {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static void FUNC_1(struct tls_connection_params *VAR_13,
     const char *VAR_14)
{
 if (VAR_14 == ((void*)0))
  return;
 if (FUNC_0(VAR_14, "tls_allow_md5=1"))
  VAR_13->flags |= VAR_0;
 if (FUNC_0(VAR_14, "tls_disable_time_checks=1"))
  VAR_13->flags |= VAR_2;
 if (FUNC_0(VAR_14, "tls_disable_session_ticket=1"))
  VAR_13->flags |= VAR_1;
 if (FUNC_0(VAR_14, "tls_disable_session_ticket=0"))
  VAR_13->flags &= ~VAR_1;
 if (FUNC_0(VAR_14, "tls_disable_tlsv1_0=1"))
  VAR_13->flags |= VAR_3;
 if (FUNC_0(VAR_14, "tls_disable_tlsv1_0=0")) {
  VAR_13->flags &= ~VAR_3;
  VAR_13->flags |= VAR_7;
 }
 if (FUNC_0(VAR_14, "tls_disable_tlsv1_1=1"))
  VAR_13->flags |= VAR_4;
 if (FUNC_0(VAR_14, "tls_disable_tlsv1_1=0")) {
  VAR_13->flags &= ~VAR_4;
  VAR_13->flags |= VAR_8;
 }
 if (FUNC_0(VAR_14, "tls_disable_tlsv1_2=1"))
  VAR_13->flags |= VAR_5;
 if (FUNC_0(VAR_14, "tls_disable_tlsv1_2=0")) {
  VAR_13->flags &= ~VAR_5;
  VAR_13->flags |= VAR_9;
 }
 if (FUNC_0(VAR_14, "tls_disable_tlsv1_3=1"))
  VAR_13->flags |= VAR_6;
 if (FUNC_0(VAR_14, "tls_disable_tlsv1_3=0"))
  VAR_13->flags &= ~VAR_6;
 if (FUNC_0(VAR_14, "tls_ext_cert_check=1"))
  VAR_13->flags |= VAR_10;
 if (FUNC_0(VAR_14, "tls_ext_cert_check=0"))
  VAR_13->flags &= ~VAR_10;
 if (FUNC_0(VAR_14, "tls_suiteb=1"))
  VAR_13->flags |= VAR_11;
 if (FUNC_0(VAR_14, "tls_suiteb=0"))
  VAR_13->flags &= ~VAR_11;
 if (FUNC_0(VAR_14, "tls_suiteb_no_ecdh=1"))
  VAR_13->flags |= VAR_12;
 if (FUNC_0(VAR_14, "tls_suiteb_no_ecdh=0"))
  VAR_13->flags &= ~VAR_12;
}
