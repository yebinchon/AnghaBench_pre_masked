
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int section; int value; scalar_t__ name; } ;
typedef TYPE_1__ CONF_VALUE ;
typedef int BIO ;


 int FUNC_0 (int *,char*,int ,...) ;

__attribute__((used)) static void FUNC_1(const CONF_VALUE *VAR_0, BIO *VAR_1)
{
    if (VAR_0->name)
        FUNC_0(VAR_1, "[%s] %s=%s\n", VAR_0->section, VAR_0->name, VAR_0->value);
    else
        FUNC_0(VAR_1, "[[%s]]\n", VAR_0->section);
}
