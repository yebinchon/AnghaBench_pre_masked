
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* q_qinfo; } ;
typedef TYPE_3__ queue_t ;
struct TYPE_9__ {TYPE_1__* qi_minfo; } ;
struct TYPE_8__ {char* mi_idname; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(
       queue_t *VAR_1,
       queue_t *VAR_2
       )
{



 if (VAR_1->q_qinfo && VAR_1->q_qinfo->qi_minfo)
 {
  register char *VAR_3 = VAR_1->q_qinfo->qi_minfo->mi_idname;
 }
 FUNC_1(VAR_0, "close_linemon: cannot find driver name\n");
}
