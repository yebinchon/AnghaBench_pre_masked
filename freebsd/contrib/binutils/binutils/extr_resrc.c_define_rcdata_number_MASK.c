
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rc_uint_type ;
struct TYPE_4__ {int word; } ;
struct TYPE_5__ {TYPE_1__ u; int type; int * next; } ;
typedef TYPE_2__ rc_rcdata_item ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

rc_rcdata_item *
FUNC_1 (rc_uint_type VAR_2, int VAR_3)
{
  rc_rcdata_item *VAR_4;

  VAR_4 = (rc_rcdata_item *) FUNC_0 (sizeof (rc_rcdata_item));
  VAR_4->next = ((void*)0);
  VAR_4->type = VAR_3 ? VAR_0 : VAR_1;
  VAR_4->u.word = VAR_2;

  return VAR_4;
}
