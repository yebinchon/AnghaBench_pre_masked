
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbb_softc {int scl_low_timeout; int udelay; int iicbus; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5)
{
 struct iicbb_softc *VAR_6 = (struct iicbb_softc *)FUNC_4(VAR_5);

 VAR_6->iicbus = FUNC_3(VAR_5, "iicbus", -1);
 if (!VAR_6->iicbus)
  return (VAR_3);

 VAR_6->scl_low_timeout = VAR_2;

 FUNC_0(FUNC_5(VAR_5),
     FUNC_1(FUNC_6(VAR_5)), VAR_4,
     "delay", VAR_0, &VAR_6->udelay,
     0, "Signal change delay controlled by bus frequency, microseconds");

 FUNC_0(FUNC_5(VAR_5),
     FUNC_1(FUNC_6(VAR_5)), VAR_4,
     "scl_low_timeout", VAR_1, &VAR_6->scl_low_timeout,
     0, "SCL low timeout, microseconds");
 FUNC_2(VAR_5);
 return (0);
}
