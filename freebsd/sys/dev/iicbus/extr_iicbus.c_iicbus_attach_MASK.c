
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct iicbus_softc {int strict; int lock; int dev; } ;
typedef int device_t ;


 struct iicbus_softc* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (int *,char*,int *,int ) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (int ,int,char*,int*) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_2)
{



 struct iicbus_softc *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 VAR_3->dev = VAR_2;
 FUNC_9(&VAR_3->lock, "iicbus", ((void*)0), VAR_1);
 FUNC_7(VAR_2, 0);
 FUNC_8(VAR_2, VAR_0, 0, ((void*)0));
 if (FUNC_11(FUNC_4(VAR_2),
  FUNC_5(VAR_2), "strict", &VAR_4) == 0)
  VAR_3->strict = VAR_4;
 else
  VAR_3->strict = 1;
 FUNC_3(VAR_2);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
        return (0);
}
