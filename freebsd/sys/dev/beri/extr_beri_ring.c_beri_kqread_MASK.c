
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct knote {int kn_data; struct beri_softc* kn_hook; } ;
struct beri_softc {int dummy; } ;
struct TYPE_5__ {int interrupt_level; int cdes; } ;
typedef TYPE_1__ control_reg_t ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (struct beri_softc*,int ) ;
 int FUNC_1 (struct beri_softc*,int ,TYPE_1__*) ;
 int FUNC_2 (struct beri_softc*,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_1, long VAR_2)
{
 struct beri_softc *VAR_3;
 control_reg_t VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->kn_hook;

 VAR_4 = FUNC_0(VAR_3, 0);
 VAR_5 = FUNC_1(VAR_3, 0, &VAR_4);
 if (VAR_5) {
  VAR_1->kn_data = VAR_5;
  return (1);
 }

 VAR_1->kn_data = 0;


 VAR_4.interrupt_level = 1;


 VAR_4.cdes |= (VAR_0);
 FUNC_2(VAR_3, 0, &VAR_4);

 return (0);
}
