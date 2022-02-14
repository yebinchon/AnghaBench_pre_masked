
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* q_qinfo; struct TYPE_11__* q_next; } ;
typedef TYPE_3__ queue_t ;
struct TYPE_10__ {char* mi_idname; } ;
struct TYPE_9__ {TYPE_2__* qi_minfo; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(
      queue_t *VAR_1
      )
{
 register queue_t *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 while (VAR_2->q_next)
 {
  VAR_2 = VAR_2->q_next;
 }




 if (VAR_2->q_qinfo && VAR_2->q_qinfo->qi_minfo)
 {
  register char *VAR_3 = VAR_2->q_qinfo->qi_minfo->mi_idname;

  FUNC_2(VAR_0, "init_linemon: driver is \"%s\"\n", VAR_3);
  {
   FUNC_2(VAR_0, "init_linemon: driver \"%s\" not suitable for CD monitoring\n", VAR_3);
   return 0;
  }
 }
 FUNC_2(VAR_0, "init_linemon: cannot find driver\n");
 return 0;
}
