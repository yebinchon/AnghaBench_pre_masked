
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* hx509_env ;
typedef int hx509_context ;
struct TYPE_4__ {char const* string; } ;
struct TYPE_5__ {char* name; scalar_t__ type; struct TYPE_5__* next; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*,size_t) ;

const char *
FUNC_1(hx509_context VAR_1, hx509_env VAR_2,
  const char *VAR_3, size_t VAR_4)
{
    while(VAR_2) {
 if (FUNC_0(VAR_3, VAR_2->name ,VAR_4) == 0
     && VAR_2->name[VAR_4] == '\0' && VAR_2->type == VAR_0)
     return VAR_2->u.string;
 VAR_2 = VAR_2->next;
    }
    return ((void*)0);
}
