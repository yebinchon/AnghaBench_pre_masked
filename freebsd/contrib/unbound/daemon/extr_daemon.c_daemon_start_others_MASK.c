
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct daemon {int num; TYPE_1__** workers; } ;
struct TYPE_2__ {int cmd; int thr_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct daemon*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct daemon* VAR_2)
{
 int VAR_3;
 FUNC_0(VAR_2);
 FUNC_3(VAR_0, "start threads");

 for(VAR_3=1; VAR_3<VAR_2->num; VAR_3++) {
  FUNC_2(&VAR_2->workers[VAR_3]->thr_id,
   VAR_1, VAR_2->workers[VAR_3]);




 }
}
