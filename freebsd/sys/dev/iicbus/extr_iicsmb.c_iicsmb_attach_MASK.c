
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicsmb_softc {int smbus; int lock; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct iicsmb_softc *VAR_2 = (struct iicsmb_softc *)FUNC_2(VAR_1);

 FUNC_3(&VAR_2->lock, "iicsmb", ((void*)0), VAR_0);

 VAR_2->smbus = FUNC_1(VAR_1, "smbus", -1);


 FUNC_0(VAR_1);

 return (0);
}
