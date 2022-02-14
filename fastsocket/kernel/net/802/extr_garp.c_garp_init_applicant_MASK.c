
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {TYPE_2__* garp_port; } ;
struct TYPE_3__ {int group_address; } ;
struct garp_application {size_t type; TYPE_1__ proto; } ;
struct garp_applicant {int join_timer; int queue; int lock; int gid; struct garp_application* app; struct net_device* dev; } ;
struct TYPE_4__ {int * applicants; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*,int ,int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_3 (struct garp_applicant*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct garp_applicant*) ;
 struct garp_applicant* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,struct garp_applicant*) ;
 int FUNC_8 (int *,int ,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct net_device *VAR_5, struct garp_application *VAR_6)
{
 struct garp_applicant *VAR_7;
 int VAR_8;

 FUNC_0();

 if (!VAR_5->garp_port) {
  VAR_8 = FUNC_2(VAR_5);
  if (VAR_8 < 0)
   goto err1;
 }

 VAR_8 = -VAR_0;
 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  goto err2;

 VAR_8 = FUNC_1(VAR_5, VAR_6->proto.group_address, VAR_1, 0);
 if (VAR_8 < 0)
  goto err3;

 VAR_7->dev = VAR_5;
 VAR_7->app = VAR_6;
 VAR_7->gid = VAR_3;
 FUNC_10(&VAR_7->lock);
 FUNC_9(&VAR_7->queue);
 FUNC_7(VAR_5->garp_port->applicants[VAR_6->type], VAR_7);
 FUNC_8(&VAR_7->join_timer, VAR_4, (unsigned long)VAR_7);
 FUNC_3(VAR_7);
 return 0;

err3:
 FUNC_5(VAR_7);
err2:
 FUNC_4(VAR_5);
err1:
 return VAR_8;
}
