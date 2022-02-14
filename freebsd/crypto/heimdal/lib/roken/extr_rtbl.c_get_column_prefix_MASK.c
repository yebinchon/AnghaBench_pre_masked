
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct column_data {char const* prefix; } ;
typedef TYPE_1__* rtbl_t ;
struct TYPE_3__ {char const* column_prefix; } ;



__attribute__((used)) static const char *
FUNC_0 (rtbl_t VAR_0, struct column_data *VAR_1)
{
    if (VAR_1 == ((void*)0))
 return "";
    if (VAR_1->prefix)
 return VAR_1->prefix;
    if (VAR_0->column_prefix)
 return VAR_0->column_prefix;
    return "";
}
