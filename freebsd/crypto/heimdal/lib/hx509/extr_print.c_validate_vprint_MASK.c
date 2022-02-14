
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
typedef TYPE_1__* hx509_validate_ctx ;
struct TYPE_2__ {int ctx; int (* vprint_func ) (int ,char const*,int ) ;} ;


 int FUNC_0 (int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, const char *VAR_1, va_list VAR_2)
{
    hx509_validate_ctx VAR_3 = VAR_0;
    if (VAR_3->vprint_func == ((void*)0))
 return;
    (VAR_3->vprint_func)(VAR_3->ctx, VAR_1, VAR_2);
}
