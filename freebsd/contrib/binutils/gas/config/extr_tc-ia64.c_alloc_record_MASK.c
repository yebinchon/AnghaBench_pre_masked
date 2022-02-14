
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int unw_record_type ;
struct TYPE_6__ {int type; } ;
struct TYPE_7__ {TYPE_1__ r; int slot_number; } ;
typedef TYPE_2__ unw_rec_list ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static unw_rec_list *
FUNC_2 (unw_record_type VAR_1)
{
  unw_rec_list *VAR_2;
  VAR_2 = FUNC_1 (sizeof (*VAR_2));
  FUNC_0 (VAR_2, 0, sizeof (*VAR_2));
  VAR_2->slot_number = VAR_0;
  VAR_2->r.type = VAR_1;
  return VAR_2;
}
