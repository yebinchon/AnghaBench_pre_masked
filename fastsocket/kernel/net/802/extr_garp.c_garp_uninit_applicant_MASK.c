
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {struct garp_port* garp_port; } ;
struct garp_port {struct garp_applicant** applicants; } ;
struct TYPE_2__ {int group_address; } ;
struct garp_application {size_t type; TYPE_1__ proto; } ;
struct garp_applicant {int join_timer; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,int ,int ,int ) ;
 int FUNC_3 (struct garp_applicant*,int ) ;
 int FUNC_4 (struct garp_applicant*) ;
 int FUNC_5 (struct garp_applicant*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct garp_applicant*) ;
 int FUNC_8 (struct garp_applicant*,int *) ;
 int FUNC_9 () ;

void FUNC_10(struct net_device *VAR_2, struct garp_application *VAR_3)
{
 struct garp_port *VAR_4 = VAR_2->garp_port;
 struct garp_applicant *VAR_5 = VAR_4->applicants[VAR_3->type];

 FUNC_0();

 FUNC_8(VAR_4->applicants[VAR_3->type], ((void*)0));
 FUNC_9();



 FUNC_1(&VAR_5->join_timer);
 FUNC_3(VAR_5, VAR_1);
 FUNC_4(VAR_5);
 FUNC_5(VAR_5);

 FUNC_2(VAR_2, VAR_3->proto.group_address, VAR_0, 0);
 FUNC_7(VAR_5);
 FUNC_6(VAR_2);
}
