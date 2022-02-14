
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct my_softc {int my_dev; } ;
struct my_chain_onefrag {TYPE_1__* my_ptr; struct mbuf* my_mbuf; } ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {int my_ctl; int my_status; int my_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*,int ) ;
 int FUNC_1 (struct mbuf*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct my_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct mbuf*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct my_softc * VAR_7, struct my_chain_onefrag * VAR_8)
{
 struct mbuf *VAR_9 = ((void*)0);

 FUNC_2(VAR_7);
 FUNC_1(VAR_9, VAR_5, VAR_2);
 if (VAR_9 == ((void*)0)) {
  FUNC_3(VAR_7->my_dev,
      "no memory for rx list -- packet dropped!\n");
  return (VAR_0);
 }
 if (!(FUNC_0(VAR_9, VAR_5))) {
  FUNC_3(VAR_7->my_dev,
      "no memory for rx list -- packet dropped!\n");
  FUNC_4(VAR_9);
  return (VAR_0);
 }
 VAR_8->my_mbuf = VAR_9;
 VAR_8->my_ptr->my_data = FUNC_6(FUNC_5(VAR_9, VAR_6));
 VAR_8->my_ptr->my_ctl = (VAR_1 - 1) << VAR_4;
 VAR_8->my_ptr->my_status = VAR_3;
 return (0);
}
