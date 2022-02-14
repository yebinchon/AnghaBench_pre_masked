
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_context ;
struct TYPE_4__ {int type; int port; int family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,char*) ;
 size_t VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static void
FUNC_3(krb5_context VAR_5,
  int VAR_6, int VAR_7, const char *VAR_8)
{
    int VAR_9;
    size_t VAR_10;

    if(FUNC_2(VAR_8, "udp") == 0)
 VAR_9 = VAR_0;
    else if(FUNC_2(VAR_8, "tcp") == 0)
 VAR_9 = VAR_1;
    else
 return;
    for(VAR_10 = 0; VAR_10 < VAR_3; VAR_10++){
 if(VAR_4[VAR_10].type == VAR_9
    && VAR_4[VAR_10].port == VAR_7
    && VAR_4[VAR_10].family == VAR_6)
     return;
    }
    VAR_4 = FUNC_1(VAR_4, (VAR_3 + 1) * sizeof(*VAR_4));
    if (VAR_4 == ((void*)0))
 FUNC_0 (VAR_5, 1, VAR_2, "realloc");
    VAR_4[VAR_3].family = VAR_6;
    VAR_4[VAR_3].type = VAR_9;
    VAR_4[VAR_3].port = VAR_7;
    VAR_3++;
}
