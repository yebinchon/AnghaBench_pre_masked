
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ was_active; } ;
struct tr_info {int playchns; TYPE_1__ recchinfo; TYPE_2__* chinfo; } ;
typedef int device_t ;
struct TYPE_4__ {scalar_t__ was_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct tr_info* FUNC_2 (int ) ;
 int FUNC_3 (struct tr_info*) ;
 int FUNC_4 (int *,TYPE_2__*,int ) ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 int VAR_3;
 struct tr_info *VAR_4;

 VAR_4 = FUNC_2(VAR_2);

 if (FUNC_3(VAR_4) == -1) {
  FUNC_0(VAR_2, "unable to initialize the card\n");
  return VAR_0;
 }

 if (FUNC_1(VAR_2) == -1) {
  FUNC_0(VAR_2, "unable to initialize the mixer\n");
  return VAR_0;
 }

 for (VAR_3 = 0; VAR_3 < VAR_4->playchns; VAR_3++) {
  if (VAR_4->chinfo[VAR_3].was_active) {
   FUNC_4(((void*)0), &VAR_4->chinfo[VAR_3], VAR_1);
  }
 }

 if (VAR_4->recchinfo.was_active) {
  FUNC_5(((void*)0), &VAR_4->recchinfo, VAR_1);
 }

 return 0;
}
