
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mask; } ;
struct TYPE_8__ {TYPE_1__ r; } ;
struct TYPE_9__ {TYPE_2__ record; } ;
struct TYPE_10__ {TYPE_3__ r; } ;
typedef TYPE_4__ unw_rec_list ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static unw_rec_list *
FUNC_2 ()
{
  unw_rec_list *VAR_1 = FUNC_0 (VAR_0);
  FUNC_1 (&VAR_1->r.record.r.mask, 0, sizeof (VAR_1->r.record.r.mask));
  return VAR_1;
}
