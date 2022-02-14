
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsmb_softc {int rid; int * subdev; void* smbus; int lock; int * res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 struct nfsmb_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int ,char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_6)
{
 struct nfsmb_softc *VAR_7 = FUNC_4(VAR_6);


 VAR_7->rid = VAR_3;

 VAR_7->res = FUNC_0(VAR_6, VAR_5,
  &VAR_7->rid, VAR_4);

 if (VAR_7->res == ((void*)0)) {

  VAR_7->rid = 0x50;
  VAR_7->res = FUNC_0(VAR_6,
      VAR_5, &VAR_7->rid, VAR_4);
  if (VAR_7->res == ((void*)0)) {
   FUNC_5(VAR_6, "could not map i/o space\n");
   return (VAR_1);
  }
 }

 FUNC_6(&VAR_7->lock, FUNC_3(VAR_6), "nfsmb", VAR_2);


 VAR_7->smbus = FUNC_2(VAR_6, "smbus", -1);
 if (!VAR_7->smbus) {
  FUNC_7(VAR_6);
  return (VAR_0);
 }

 VAR_7->subdev = ((void*)0);
 switch (FUNC_8(VAR_6)) {
 case 141:
 case 140:
 case 138:
 case 139:
 case 128:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:

  VAR_7->subdev = FUNC_2(VAR_6, "nfsmb", -1);
  if (!VAR_7->subdev) {
   FUNC_7(VAR_6);
   return (VAR_0);
  }
  break;
 default:
  break;
 }

 FUNC_1(VAR_6);

 return (0);
}
