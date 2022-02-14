
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ contender; scalar_t__ link_active; } ;
union fw_self_id {TYPE_1__ p0; } ;
typedef int uint32_t ;
struct fw_device {int dst; int maxrec; int status; scalar_t__ speed; struct firewire_comm* fc; } ;
struct firewire_comm {int max_node; int nodeid; size_t max_hop; int bdev; } ;
typedef int fwdev ;


 int VAR_0 ;
 int FUNC_0 (struct firewire_comm*,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct fw_device*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_4 ;
 union fw_self_id* FUNC_3 (struct firewire_comm*,int) ;
 int FUNC_4 (struct firewire_comm*,int,int ) ;
 int FUNC_5 (struct fw_device*,int *,int ,int,int,int *,int ) ;
 int * VAR_5 ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct firewire_comm *VAR_6)
{
 struct fw_device VAR_7;
 union fw_self_id *VAR_8;
 int VAR_9;
 uint32_t VAR_10;


 VAR_8 = FUNC_3(VAR_6, VAR_6->max_node);
 if (VAR_6->max_node > 0) {

  if (VAR_8->p0.link_active && VAR_8->p0.contender)
   VAR_9 = VAR_6->max_node;
  else {
   FUNC_2(VAR_6->bdev,
       "root node is not cycle master capable\n");

   VAR_9 = VAR_6->nodeid;

  }
 } else
  VAR_9 = -1;

 FUNC_2(VAR_6->bdev, "bus manager %d %s\n",
  FUNC_0(VAR_6, VAR_0),
  (FUNC_0(VAR_6, VAR_0) != VAR_6->nodeid) ? "(me)" : "");
 if (FUNC_0(VAR_6, VAR_0) != VAR_6->nodeid) {

  return (0);
 }


 if (VAR_6->max_hop <= VAR_2)
  FUNC_4(VAR_6, VAR_9, VAR_5[VAR_6->max_hop]);

 if (VAR_9 == VAR_6->nodeid || VAR_9 == -1)
  return 0;

 FUNC_1(&VAR_7, sizeof(VAR_7));
 VAR_7.fc = VAR_6;
 VAR_7.dst = VAR_9;
 VAR_7.speed = 0;
 VAR_7.maxrec = 8;
 VAR_7.status = VAR_1;

 VAR_10 = FUNC_6(1 << 8);
 FUNC_5(&VAR_7, ((void*)0), 0 ,
     0xffff, 0xf0000000 | VAR_3, &VAR_10, VAR_4);

 return 0;
}
