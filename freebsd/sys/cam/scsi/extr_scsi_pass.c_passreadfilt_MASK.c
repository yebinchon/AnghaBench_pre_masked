
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pass_softc {int done_queue; } ;
struct knote {scalar_t__ kn_hook; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct cam_periph*,int ) ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_1, long VAR_2)
{
 struct cam_periph *VAR_3;
 struct pass_softc *VAR_4;
 int VAR_5;

 VAR_3 = (struct cam_periph *)VAR_1->kn_hook;
 VAR_4 = (struct pass_softc *)VAR_3->softc;

 FUNC_1(VAR_3, VAR_0);

 if (FUNC_0(&VAR_4->done_queue))
  VAR_5 = 0;
 else
  VAR_5 = 1;

 return (VAR_5);
}
