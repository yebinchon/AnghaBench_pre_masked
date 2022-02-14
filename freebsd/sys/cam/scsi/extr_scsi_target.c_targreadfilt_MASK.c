
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct targ_softc {int periph; int abort_queue; int user_ccb_queue; } ;
struct knote {scalar_t__ kn_hook; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_0, long VAR_1)
{
 struct targ_softc *VAR_2;
 int VAR_3;

 VAR_2 = (struct targ_softc *)VAR_0->kn_hook;
 FUNC_1(VAR_2->periph);
 VAR_3 = !FUNC_0(&VAR_2->user_ccb_queue) ||
   !FUNC_0(&VAR_2->abort_queue);
 FUNC_2(VAR_2->periph);
 return (VAR_3);
}
