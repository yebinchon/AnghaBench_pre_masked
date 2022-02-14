
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int unichar ;
typedef int rc_uint_type ;
struct TYPE_6__ {int length; int * w; } ;
struct TYPE_5__ {TYPE_2__ wstring; } ;
struct TYPE_7__ {TYPE_1__ u; int type; int * next; } ;
typedef TYPE_3__ rc_rcdata_item ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int) ;
 scalar_t__ FUNC_1 (int) ;

rc_rcdata_item *
FUNC_2 (const unichar *VAR_1, rc_uint_type VAR_2)
{
  rc_rcdata_item *VAR_3;
  unichar *VAR_4;

  VAR_3 = (rc_rcdata_item *) FUNC_1 (sizeof (rc_rcdata_item));
  VAR_3->next = ((void*)0);
  VAR_3->type = VAR_0;
  VAR_3->u.wstring.length = VAR_2;
  VAR_4 = (unichar *) FUNC_1 (VAR_2 * sizeof (unichar));
  FUNC_0 (VAR_4, VAR_1, VAR_2 * sizeof (unichar));
  VAR_3->u.wstring.w = VAR_4;

  return VAR_3;
}
