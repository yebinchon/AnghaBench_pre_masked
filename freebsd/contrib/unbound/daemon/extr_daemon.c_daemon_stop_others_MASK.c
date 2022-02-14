
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct daemon {int num; TYPE_1__** workers; } ;
struct TYPE_2__ {int thr_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct daemon*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4(struct daemon* VAR_2)
{
 int VAR_3;
 FUNC_0(VAR_2);
 FUNC_2(VAR_0, "stop threads");


 for(VAR_3=1; VAR_3<VAR_2->num; VAR_3++) {
  FUNC_3(VAR_2->workers[VAR_3], VAR_1);
 }

 for(VAR_3=1; VAR_3<VAR_2->num; VAR_3++) {

  FUNC_2(VAR_0, "join %d", VAR_3);
  FUNC_1(VAR_2->workers[VAR_3]->thr_id);
  FUNC_2(VAR_0, "join success %d", VAR_3);
 }
}
