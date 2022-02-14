
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; void* charset; void* language; } ;
typedef TYPE_1__ rc_ver_varinfo ;
typedef void* rc_uint_type ;


 scalar_t__ FUNC_0 (int) ;

rc_ver_varinfo *
FUNC_1 (rc_ver_varinfo *VAR_0, rc_uint_type VAR_1,
   rc_uint_type VAR_2)
{
  rc_ver_varinfo *VAR_3, **VAR_4;

  VAR_3 = (rc_ver_varinfo *) FUNC_0 (sizeof (rc_ver_varinfo));
  VAR_3->next = ((void*)0);
  VAR_3->language = VAR_1;
  VAR_3->charset = VAR_2;

  for (VAR_4 = &VAR_0; *VAR_4 != ((void*)0); VAR_4 = &(*VAR_4)->next)
    ;
  *VAR_4 = VAR_3;

  return VAR_0;
}
