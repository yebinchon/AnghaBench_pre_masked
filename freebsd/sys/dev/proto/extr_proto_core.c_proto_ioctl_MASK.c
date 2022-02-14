
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct proto_softc {int dummy; } ;
struct TYPE_2__ {int busdma; int res; } ;
struct proto_res {TYPE_1__ r_d; int r_type; int r_size; } ;
struct proto_ioc_region {int address; int size; } ;
struct proto_ioc_busdma {int dummy; } ;
struct cdev {struct proto_res* si_drv2; struct proto_softc* si_drv1; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct proto_softc*,int ,struct proto_ioc_busdma*,struct thread*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_4, u_long VAR_5, caddr_t VAR_6, int VAR_7,
    struct thread *VAR_8)
{
 struct proto_ioc_region *VAR_9;
 struct proto_ioc_busdma *VAR_10;
 struct proto_res *VAR_11;
 struct proto_softc *VAR_12;
 int VAR_13;

 VAR_12 = VAR_4->si_drv1;
 VAR_11 = VAR_4->si_drv2;

 VAR_13 = 0;
 switch (VAR_5) {
 case 128:
  if (VAR_11->r_type == VAR_2) {
   VAR_13 = VAR_0;
   break;
  }
  VAR_9 = (struct proto_ioc_region *)VAR_6;
  VAR_9->size = VAR_11->r_size;
  if (VAR_11->r_type == VAR_3)
   VAR_9->address = 0;
  else
   VAR_9->address = FUNC_1(VAR_11->r_d.res);
  break;
 case 129:
  if (VAR_11->r_type != VAR_2) {
   VAR_13 = VAR_0;
   break;
  }
  VAR_10 = (struct proto_ioc_busdma *)VAR_6;
  VAR_13 = FUNC_0(VAR_12, VAR_11->r_d.busdma, VAR_10, VAR_8);
  break;
 default:
  VAR_13 = VAR_1;
  break;
 }
 return (VAR_13);
}
