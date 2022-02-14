
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int * val; int len; } ;
struct TYPE_14__ {TYPE_3__ name_string; int name_type; } ;
struct TYPE_10__ {int len; } ;
struct TYPE_11__ {TYPE_1__ name_string; } ;
struct TYPE_13__ {TYPE_2__ cname; } ;
typedef TYPE_4__ Authenticator ;


 int FUNC_0 (TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*,int ) ;
 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2 (void *VAR_3, void *VAR_4)
{
    Authenticator *VAR_5 = VAR_3;
    Authenticator *VAR_6 = VAR_4;
    int VAR_7;

    FUNC_0(VAR_5,VAR_6,VAR_0);
    FUNC_1(VAR_5,VAR_6,VAR_2);

    FUNC_0(VAR_5,VAR_6,VAR_1.name_type);
    FUNC_0(VAR_5,VAR_6,VAR_1.name_string.len);

    for (VAR_7 = 0; VAR_7 < VAR_5->cname.name_string.len; VAR_7++)
 FUNC_1(VAR_5,VAR_6,VAR_1.name_string.val[VAR_7]);

    return 0;
}
