
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tag_type; int tag_num; int task_action; } ;
struct TYPE_6__ {int tag_type; int tag_num; } ;
struct TYPE_4__ {int io_type; } ;
union ctl_io {TYPE_2__ taskio; TYPE_3__ scsiio; TYPE_1__ io_hdr; } ;
struct sbuf {int dummy; } ;
typedef int path_str ;





 int FUNC_0 (TYPE_3__*,int *,struct sbuf*) ;
 int FUNC_1 (union ctl_io*,char*,int) ;
 char* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct sbuf*,char*) ;
 int FUNC_4 (struct sbuf*,char*,...) ;

void
FUNC_5(union ctl_io *VAR_0, struct sbuf *VAR_1)
{
 const char *VAR_2;
 char VAR_3[64];

 FUNC_1(VAR_0, VAR_3, sizeof(VAR_3));

 switch (VAR_0->io_hdr.io_type) {
 case 130:
  FUNC_3(VAR_1, VAR_3);
  FUNC_0(&VAR_0->scsiio, ((void*)0), VAR_1);
  FUNC_4(VAR_1, " Tag: %#x/%d\n",
       VAR_0->scsiio.tag_num, VAR_0->scsiio.tag_type);
  break;
 case 129:
  FUNC_3(VAR_1, VAR_3);
  VAR_2 = FUNC_2(&VAR_0->taskio);
  if (VAR_2 == ((void*)0))
   FUNC_4(VAR_1, "Unknown Task Action %d (%#x)",
       VAR_0->taskio.task_action, VAR_0->taskio.task_action);
  else
   FUNC_4(VAR_1, "Task Action: %s", VAR_2);
  switch (VAR_0->taskio.task_action) {
  case 128:
   FUNC_4(VAR_1, " Tag: %#x/%d\n",
       VAR_0->taskio.tag_num, VAR_0->taskio.tag_type);
   break;
  default:
   FUNC_4(VAR_1, "\n");
   break;
  }
  break;
 default:
  break;
 }
}
