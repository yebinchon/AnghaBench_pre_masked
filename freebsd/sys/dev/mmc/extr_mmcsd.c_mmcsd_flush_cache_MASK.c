
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmcsd_softc {int flags; int rca; int mmcbus; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_3(struct mmcsd_softc *VAR_6)
{
 device_t VAR_7, VAR_8;
 int VAR_9;

 if ((VAR_6->flags & VAR_4) == 0)
  return (VAR_5);

 VAR_7 = VAR_6->dev;
 VAR_8 = VAR_6->mmcbus;
 FUNC_0(VAR_8, VAR_7);
 if ((VAR_6->flags & VAR_3) == 0) {
  FUNC_1(VAR_8, VAR_7);
  return (VAR_5);
 }
 VAR_9 = FUNC_2(VAR_8, VAR_7, VAR_6->rca, VAR_0,
     VAR_1, VAR_2, 60 * 1000, 1);
 if (VAR_9 == VAR_5)
  VAR_6->flags &= ~VAR_3;
 FUNC_1(VAR_8, VAR_7);
 return (VAR_9);
}
