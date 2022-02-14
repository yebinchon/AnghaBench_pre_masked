
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct facility {int dummy; } ;
struct TYPE_3__ {int len; struct facility* val; } ;
typedef TYPE_1__ krb5_log_facility ;


 struct facility* FUNC_0 (struct facility*,int) ;

__attribute__((used)) static struct facility*
FUNC_1(krb5_log_facility *VAR_0)
{
    struct facility *VAR_1;
    VAR_1 = FUNC_0(VAR_0->val, (VAR_0->len + 1) * sizeof(*VAR_0->val));
    if(VAR_1 == ((void*)0))
 return ((void*)0);
    VAR_0->len++;
    VAR_0->val = VAR_1;
    VAR_1 += VAR_0->len - 1;
    return VAR_1;
}
