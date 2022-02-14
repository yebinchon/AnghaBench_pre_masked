
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct garp_application* data; int rcv; } ;
struct garp_application {TYPE_1__ proto; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(struct garp_application *VAR_1)
{
 VAR_1->proto.rcv = VAR_0;
 VAR_1->proto.data = VAR_1;
 return FUNC_0(&VAR_1->proto);
}
