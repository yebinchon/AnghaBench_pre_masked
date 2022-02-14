
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdsmn_softc {int smn_lock; int smn_pciid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 struct amdsmn_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,char*,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct amdsmn_softc *VAR_3 = FUNC_2(VAR_2);

 if (!FUNC_0(FUNC_1(VAR_2), &VAR_3->smn_pciid))
  return (VAR_0);

 FUNC_3(&VAR_3->smn_lock, "SMN mtx", "SMN", VAR_1);
 return (0);
}
