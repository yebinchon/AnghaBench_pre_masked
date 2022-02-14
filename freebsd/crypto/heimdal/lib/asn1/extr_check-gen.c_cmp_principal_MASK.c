
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * val; int len; } ;
struct TYPE_14__ {TYPE_1__ name_string; int name_type; } ;
struct TYPE_12__ {int len; } ;
struct TYPE_11__ {TYPE_3__ name_string; } ;
struct TYPE_13__ {TYPE_2__ name; } ;
typedef TYPE_4__ Principal ;


 int FUNC_0 (TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*,int ) ;
 TYPE_5__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2 (void *VAR_2, void *VAR_3)
{
    Principal *VAR_4 = VAR_2;
    Principal *VAR_5 = VAR_3;
    int VAR_6;

    FUNC_1(VAR_4,VAR_5,VAR_1);
    FUNC_0(VAR_4,VAR_5,VAR_0.name_type);
    FUNC_0(VAR_4,VAR_5,VAR_0.name_string.len);

    for (VAR_6 = 0; VAR_6 < VAR_4->name.name_string.len; VAR_6++)
 FUNC_1(VAR_4,VAR_5,VAR_0.name_string.val[VAR_6]);

    return 0;
}
