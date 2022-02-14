
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_3__ {scalar_t__ negative; int length; int data; } ;
typedef TYPE_1__ heim_integer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,char**) ;

int
FUNC_3 (const heim_integer *VAR_1, char **VAR_2)
{
    ssize_t VAR_3;
    char *VAR_4;

    VAR_3 = FUNC_2(VAR_1->data, VAR_1->length, VAR_2);
    if (VAR_3 < 0)
 return VAR_0;

    if (VAR_1->negative) {
 VAR_3 = FUNC_0(&VAR_4, "-%s", *VAR_2);
 FUNC_1(*VAR_2);
 if (VAR_3 < 0)
     return VAR_0;
 *VAR_2 = VAR_4;
    }
    return 0;
}
