
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int section; } ;
typedef TYPE_1__ CONF_VALUE ;


 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(const CONF_VALUE *VAR_0)
{
    return (FUNC_0(VAR_0->section) << 2) ^ FUNC_0(VAR_0->name);
}
