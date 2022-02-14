
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct amdpm_softc {int smbus; int lock; int * res; int rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 struct amdpm_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,int ,char*,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_10)
{
 struct amdpm_softc *VAR_11 = FUNC_5(VAR_10);
 u_char VAR_12;


 VAR_12 = FUNC_9(VAR_10, VAR_0, 1);
 FUNC_10(VAR_10, VAR_0, VAR_12 | VAR_2, 1);


 if (FUNC_8(VAR_10) == VAR_3)
  VAR_11->rid = VAR_1;
 else
  VAR_11->rid = VAR_7;
 VAR_11->res = FUNC_1(VAR_10, VAR_9,
  &VAR_11->rid, VAR_8);

 if (VAR_11->res == ((void*)0)) {
  FUNC_6(VAR_10, "could not map i/o space\n");
  return (VAR_5);
 }

 FUNC_7(&VAR_11->lock, FUNC_4(VAR_10), "amdpm", VAR_6);


 VAR_11->smbus = FUNC_3(VAR_10, "smbus", -1);
 if (!VAR_11->smbus) {
  FUNC_0(VAR_10);
  return (VAR_4);
 }

 FUNC_2(VAR_10);

 return (0);
}
