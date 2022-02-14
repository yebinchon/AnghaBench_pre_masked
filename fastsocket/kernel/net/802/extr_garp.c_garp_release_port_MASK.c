
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct garp_port* garp_port; } ;
struct garp_port {scalar_t__* applicants; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct garp_port*) ;
 int FUNC_1 (struct garp_port*,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct garp_port *VAR_2 = VAR_1->garp_port;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 <= VAR_0; VAR_3++) {
  if (VAR_2->applicants[VAR_3])
   return;
 }
 FUNC_1(VAR_1->garp_port, ((void*)0));
 FUNC_2();
 FUNC_0(VAR_2);
}
