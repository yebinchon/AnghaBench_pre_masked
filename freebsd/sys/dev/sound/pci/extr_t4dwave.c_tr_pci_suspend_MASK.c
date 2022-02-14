
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ active; scalar_t__ was_active; } ;
struct tr_info {int playchns; TYPE_1__ recchinfo; TYPE_2__* chinfo; } ;
typedef int device_t ;
struct TYPE_4__ {scalar_t__ active; scalar_t__ was_active; } ;


 int VAR_0 ;
 struct tr_info* FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 int VAR_2;
 struct tr_info *VAR_3;

 VAR_3 = FUNC_0(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_3->playchns; VAR_2++) {
  VAR_3->chinfo[VAR_2].was_active = VAR_3->chinfo[VAR_2].active;
  if (VAR_3->chinfo[VAR_2].active) {
   FUNC_1(((void*)0), &VAR_3->chinfo[VAR_2], VAR_0);
  }
 }

 VAR_3->recchinfo.was_active = VAR_3->recchinfo.active;
 if (VAR_3->recchinfo.active) {
  FUNC_2(((void*)0), &VAR_3->recchinfo, VAR_0);
 }

 return 0;
}
