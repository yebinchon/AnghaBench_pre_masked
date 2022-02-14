
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_host_cert_files; int host_cert_files; } ;
typedef TYPE_1__ ServerOptions ;


 int FUNC_0 (char const*,int const,char*,int *,int *,char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;

void
FUNC_3(const char *VAR_0, const int VAR_1,
    ServerOptions *VAR_2, const char *VAR_3)
{
 char *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_0, VAR_1, "HostCertificate",
     &VAR_2->host_cert_files, &VAR_2->num_host_cert_files, VAR_4);
 FUNC_2(VAR_4);
}
