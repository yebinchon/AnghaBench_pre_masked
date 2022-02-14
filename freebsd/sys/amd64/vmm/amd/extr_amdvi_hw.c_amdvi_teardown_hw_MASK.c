
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdvi_softc {scalar_t__ event; scalar_t__ cmd; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;

int
FUNC_2(struct amdvi_softc *VAR_1)
{
 device_t VAR_2;

 VAR_2 = VAR_1->dev;




 FUNC_0(VAR_2);

 if (VAR_1->cmd)
  FUNC_1(VAR_1->cmd, VAR_0);

 if (VAR_1->event)
  FUNC_1(VAR_1->event, VAR_0);

 return (0);
}
