
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {struct garp_port* garp_port; } ;
struct garp_port {struct garp_applicant** applicants; } ;
struct garp_attr {int dummy; } ;
struct garp_application {size_t type; } ;
struct garp_applicant {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct garp_applicant*,struct garp_attr*,int ) ;
 struct garp_attr* FUNC_1 (struct garp_applicant*,void const*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(const struct net_device *VAR_1,
   const struct garp_application *VAR_2,
   const void *VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct garp_port *VAR_6 = VAR_1->garp_port;
 struct garp_applicant *VAR_7 = VAR_6->applicants[VAR_2->type];
 struct garp_attr *VAR_8;

 FUNC_2(&VAR_7->lock);
 VAR_8 = FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5);
 if (!VAR_8) {
  FUNC_3(&VAR_7->lock);
  return;
 }
 FUNC_0(VAR_7, VAR_8, VAR_0);
 FUNC_3(&VAR_7->lock);
}
