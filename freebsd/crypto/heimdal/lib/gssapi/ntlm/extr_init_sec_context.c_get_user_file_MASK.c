
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ntlm_buf {int dummy; } ;
typedef TYPE_1__* ntlm_name ;
struct TYPE_3__ {int domain; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,char**,struct ntlm_buf*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(const ntlm_name VAR_1,
       char **VAR_2, struct ntlm_buf *VAR_3)
{
    const char *VAR_4;

    if (FUNC_2())
 return VAR_0;

    VAR_4 = FUNC_1("NTLM_USER_FILE");
    if (VAR_4 == ((void*)0))
 return VAR_0;
    if (FUNC_0(VAR_4, VAR_1->domain, VAR_2, VAR_3) == 0)
 return 0;

    return VAR_0;
}
