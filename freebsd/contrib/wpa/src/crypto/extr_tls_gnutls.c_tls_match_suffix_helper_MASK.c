
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gnutls_x509_crt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (int ,char*,char*,char const*,int) ;

__attribute__((used)) static int FUNC_3(gnutls_x509_crt_t VAR_2, const char *VAR_3,
       int VAR_4)
{
 int VAR_5 = -1;







 if (VAR_5 == -1)
  VAR_5 = FUNC_0(VAR_2, VAR_3);

 FUNC_2(VAR_1, "TLS: Match domain against %s%s --> res=%d",
     VAR_4 ? "": "suffix ", VAR_3, VAR_5);
 return VAR_5;
}
