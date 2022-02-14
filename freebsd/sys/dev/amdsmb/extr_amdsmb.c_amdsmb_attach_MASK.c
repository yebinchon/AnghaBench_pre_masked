
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdsmb_softc {int smbus; int lock; int * res; int rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 struct amdsmb_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5)
{
 struct amdsmb_softc *VAR_6 = FUNC_6(VAR_5);


 VAR_6->rid = FUNC_0(0);

 VAR_6->res = FUNC_2(VAR_5, VAR_4,
  &VAR_6->rid, VAR_3);

 if (VAR_6->res == ((void*)0)) {
  FUNC_7(VAR_5, "could not map i/o space\n");
  return (VAR_1);
 }

 FUNC_8(&VAR_6->lock, FUNC_5(VAR_5), "amdsmb", VAR_2);


 VAR_6->smbus = FUNC_4(VAR_5, "smbus", -1);
 if (!VAR_6->smbus) {
  FUNC_1(VAR_5);
  return (VAR_0);
 }

 FUNC_3(VAR_5);

 return (0);
}
