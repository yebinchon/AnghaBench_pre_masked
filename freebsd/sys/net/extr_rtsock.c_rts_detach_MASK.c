
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int dummy; } ;
struct TYPE_4__ {int sp_protocol; } ;
struct rawcb {TYPE_1__ rcb_proto; } ;
struct TYPE_6__ {int any_count; int ip6_count; int ip_count; } ;
struct TYPE_5__ {int (* pru_detach ) (struct socket*) ;} ;




 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 struct rawcb* FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*) ;

__attribute__((used)) static void
FUNC_5(struct socket *VAR_2)
{
 struct rawcb *VAR_3 = FUNC_3(VAR_2);

 FUNC_0(VAR_3 != ((void*)0), ("rts_detach: rp == NULL"));

 FUNC_1();
 switch(VAR_3->rcb_proto.sp_protocol) {
 case 129:
  VAR_0.ip_count--;
  break;
 case 128:
  VAR_0.ip6_count--;
  break;
 }
 VAR_0.any_count--;
 FUNC_2();
 VAR_1.pru_detach(VAR_2);
}
