
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct smbus_softc {int lock; scalar_t__ owner; } ;
typedef int device_t ;


 int FUNC_0 (scalar_t__,int ,char,char,int) ;
 struct smbus_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(device_t VAR_0, u_char VAR_1, char VAR_2, char VAR_3, int VAR_4)
{
 struct smbus_softc *VAR_5 = FUNC_1(VAR_0);


 FUNC_2(&VAR_5->lock);
 if (VAR_5->owner)
  FUNC_0(VAR_5->owner, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_3(&VAR_5->lock);
}
