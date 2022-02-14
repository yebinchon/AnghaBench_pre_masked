
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int unichar ;
struct TYPE_4__ {struct TYPE_4__* next; void* value; void* key; } ;
typedef TYPE_1__ rc_ver_stringinfo ;


 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (int const*) ;

rc_ver_stringinfo *
FUNC_2 (rc_ver_stringinfo *VAR_0, const unichar *VAR_1,
        const unichar *VAR_2)
{
  rc_ver_stringinfo *VAR_3, **VAR_4;

  VAR_3 = (rc_ver_stringinfo *) FUNC_0 (sizeof (rc_ver_stringinfo));
  VAR_3->next = ((void*)0);
  VAR_3->key = FUNC_1 (VAR_1);
  VAR_3->value = FUNC_1 (VAR_2);

  for (VAR_4 = &VAR_0; *VAR_4 != ((void*)0); VAR_4 = &(*VAR_4)->next)
    ;
  *VAR_4 = VAR_3;

  return VAR_0;
}
