
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned long label; } ;
struct TYPE_8__ {TYPE_1__ b; } ;
struct TYPE_9__ {TYPE_2__ record; } ;
struct TYPE_10__ {TYPE_3__ r; } ;
typedef TYPE_4__ unw_rec_list ;


 TYPE_4__* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static unw_rec_list *
FUNC_1 (unsigned long VAR_1)
{
  unw_rec_list *VAR_2 = FUNC_0 (VAR_0);
  VAR_2->r.record.b.label = VAR_1;
  return VAR_2;
}
