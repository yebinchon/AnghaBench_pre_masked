
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct targ_softc {int state; int path; } ;
typedef scalar_t__ cam_status ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct targ_softc*) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static cam_status
FUNC_4(struct targ_softc *VAR_3)
{
 cam_status VAR_4;

 if ((VAR_3->state & VAR_2) == 0)
  return (VAR_1);

 FUNC_0(VAR_3->path, VAR_0, ("targdisable\n"));


 FUNC_1(VAR_3);


 VAR_4 = FUNC_3(VAR_3->path, 0,
                     0, 0);
 if (VAR_4 == VAR_1)
  VAR_3->state &= ~VAR_2;
 else
  FUNC_2("Disable lun failed, status %#x\n", VAR_4);

 return (VAR_4);
}
