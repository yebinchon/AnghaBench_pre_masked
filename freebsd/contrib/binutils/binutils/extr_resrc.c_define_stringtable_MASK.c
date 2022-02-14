
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int unichar ;
typedef int rc_uint_type ;
struct TYPE_14__ {TYPE_2__* strings; } ;
typedef TYPE_4__ rc_stringtable ;
struct TYPE_13__ {TYPE_4__* stringtable; } ;
struct TYPE_16__ {int language; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_3__ u; TYPE_6__ res_info; } ;
typedef TYPE_5__ rc_res_resource ;
typedef TYPE_6__ rc_res_res_info ;
struct TYPE_11__ {int id; } ;
struct TYPE_17__ {TYPE_1__ u; scalar_t__ named; } ;
typedef TYPE_7__ rc_res_id ;
struct TYPE_12__ {int * string; scalar_t__ length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (int *,int ,TYPE_7__,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int * FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;

void
FUNC_4 (const rc_res_res_info *VAR_4,
      rc_uint_type VAR_5, const unichar *VAR_6)
{
  rc_res_id VAR_7;
  rc_res_resource *VAR_8;

  VAR_7.named = 0;
  VAR_7.u.id = (VAR_5 >> 4) + 1;
  VAR_8 = FUNC_0 (&VAR_3, VAR_2, VAR_7,
    VAR_4->language, 1);

  if (VAR_8->type == VAR_1)
    {
      int VAR_9;

      VAR_8->type = VAR_0;
      VAR_8->u.stringtable = ((rc_stringtable *)
     FUNC_1 (sizeof (rc_stringtable)));
      for (VAR_9 = 0; VAR_9 < 16; VAR_9++)
 {
   VAR_8->u.stringtable->strings[VAR_9].length = 0;
   VAR_8->u.stringtable->strings[VAR_9].string = ((void*)0);
 }

      VAR_8->res_info = *VAR_4;
    }

  VAR_8->u.stringtable->strings[VAR_5 & 0xf].length = FUNC_3 (VAR_6);
  VAR_8->u.stringtable->strings[VAR_5 & 0xf].string = FUNC_2 (VAR_6);
}
