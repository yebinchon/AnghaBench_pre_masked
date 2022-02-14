
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_host_key_files; int host_key_files; } ;
typedef TYPE_1__ ServerOptions ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*,int const,char*,int *,int *,char*) ;
 char const* VAR_1 ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;

void
FUNC_4(const char *VAR_2, const int VAR_3,
    ServerOptions *VAR_4, const char *VAR_5)
{
 char *VAR_6 = FUNC_2(VAR_5);

 if (VAR_2 == VAR_1 && FUNC_0(VAR_5, VAR_0) != 0)
  return;
 FUNC_1(VAR_2, VAR_3, "HostKey",
     &VAR_4->host_key_files, &VAR_4->num_host_key_files, VAR_6);
 FUNC_3(VAR_6);
}
