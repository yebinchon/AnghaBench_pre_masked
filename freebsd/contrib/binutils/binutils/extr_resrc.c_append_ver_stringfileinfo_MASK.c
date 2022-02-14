
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int rc_ver_stringinfo ;
struct TYPE_6__ {int * strings; int language; } ;
struct TYPE_7__ {TYPE_1__ string; } ;
struct TYPE_8__ {struct TYPE_8__* next; TYPE_2__ u; int type; } ;
typedef TYPE_3__ rc_ver_info ;
typedef int rc_uint_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,char const*) ;

rc_ver_info *
FUNC_2 (rc_ver_info *VAR_1, const char *VAR_2,
      rc_ver_stringinfo *VAR_3)
{
  rc_ver_info *VAR_4, **VAR_5;

  VAR_4 = (rc_ver_info *) FUNC_0 (sizeof (rc_ver_info));
  VAR_4->next = ((void*)0);
  VAR_4->type = VAR_0;
  FUNC_1 ((rc_uint_type *) ((void*)0), &VAR_4->u.string.language, VAR_2);
  VAR_4->u.string.strings = VAR_3;

  for (VAR_5 = &VAR_1; *VAR_5 != ((void*)0); VAR_5 = &(*VAR_5)->next)
    ;
  *VAR_5 = VAR_4;

  return VAR_1;
}
