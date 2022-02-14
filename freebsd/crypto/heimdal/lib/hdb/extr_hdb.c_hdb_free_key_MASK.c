
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int length; int data; } ;
struct TYPE_8__ {TYPE_1__ keyvalue; } ;
struct TYPE_9__ {TYPE_2__ key; } ;
typedef TYPE_3__ Key ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,int ) ;

void
FUNC_3(Key *VAR_0)
{
    FUNC_2(VAR_0->key.keyvalue.data,
    0,
    VAR_0->key.keyvalue.length);
    FUNC_1(VAR_0);
    FUNC_0(VAR_0);
}
