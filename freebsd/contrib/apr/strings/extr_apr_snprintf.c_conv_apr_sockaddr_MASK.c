
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sin6_addr; } ;
struct TYPE_7__ {TYPE_1__ sin6; } ;
struct TYPE_8__ {scalar_t__ family; TYPE_2__ sa; int addr_str_len; int port; } ;
typedef TYPE_3__ apr_sockaddr_t ;
typedef int apr_size_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,int ,TYPE_3__*) ;
 char* FUNC_2 (int ,int ,int*,char*,int*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static char *FUNC_5(apr_sockaddr_t *VAR_3, char *VAR_4, apr_size_t *VAR_5)
{
    char *VAR_6 = VAR_4;
    int VAR_7;
    apr_size_t VAR_8;
    char *VAR_9;

    VAR_6 = FUNC_2(VAR_3->port, VAR_2, &VAR_7, VAR_6, &VAR_8);
    *--VAR_6 = ':';
    VAR_9 = VAR_4 - VAR_1;
    if (FUNC_1(VAR_9, VAR_3->addr_str_len, VAR_3)) {


        *--VAR_6 = '?';
        *VAR_5 = VAR_4 - VAR_6;
        return VAR_6;
    }
    VAR_8 = FUNC_4(VAR_9);
    {
        VAR_6 -= VAR_8;
        FUNC_3(VAR_6, VAR_9, VAR_8);
    }

    *VAR_5 = VAR_4 - VAR_6;
    return (VAR_6);
}
