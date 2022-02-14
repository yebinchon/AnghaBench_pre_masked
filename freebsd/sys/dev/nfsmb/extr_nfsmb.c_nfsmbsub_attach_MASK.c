
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsmb_softc {int rid; int * smbus; int lock; int * res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct nfsmb_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,int ,char*,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_6)
{
 device_t VAR_7;
 struct nfsmb_softc *VAR_8 = FUNC_5(VAR_6);

 VAR_7 = FUNC_4(VAR_6);

 VAR_8->rid = VAR_3;

 VAR_8->res = FUNC_0(VAR_7, VAR_5,
     &VAR_8->rid, VAR_4);
 if (VAR_8->res == ((void*)0)) {

  VAR_8->rid = 0x54;
  VAR_8->res = FUNC_0(VAR_7,
      VAR_5, &VAR_8->rid, VAR_4);
  if (VAR_8->res == ((void*)0)) {
   FUNC_6(VAR_6, "could not map i/o space\n");
   return (VAR_1);
  }
 }
 FUNC_7(&VAR_8->lock, FUNC_3(VAR_6), "nfsmb",
     VAR_2);

 VAR_8->smbus = FUNC_2(VAR_6, "smbus", -1);
 if (VAR_8->smbus == ((void*)0)) {
  FUNC_8(VAR_6);
  return (VAR_0);
 }

 FUNC_1(VAR_6);

 return (0);
}
