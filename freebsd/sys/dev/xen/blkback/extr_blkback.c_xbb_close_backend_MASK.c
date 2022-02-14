
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * cred; } ;
struct TYPE_4__ {int * cdev; int * csw; int dev_ref; } ;
struct TYPE_6__ {TYPE_2__ file; TYPE_1__ dev; } ;
struct xbb_softc {int flags; int device_type; TYPE_3__ backend; int * vn; int dev_name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;



 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct xbb_softc *VAR_5)
{
 FUNC_1();
 FUNC_0("closing dev=%s\n", VAR_5->dev_name);
 if (VAR_5->vn) {
  int VAR_6 = VAR_0;

  if ((VAR_5->flags & VAR_3) == 0)
   VAR_6 |= VAR_1;

  switch (VAR_5->device_type) {
  case 130:
   if (VAR_5->backend.dev.csw) {
    FUNC_4(VAR_5->backend.dev.cdev,
           VAR_5->backend.dev.dev_ref);
    VAR_5->backend.dev.csw = ((void*)0);
    VAR_5->backend.dev.cdev = ((void*)0);
   }
   break;
  case 129:
   break;
  case 128:
  default:
   FUNC_5("Unexpected backend type.");
   break;
  }

  (void)FUNC_6(VAR_5->vn, VAR_6, VAR_2, VAR_4);
  VAR_5->vn = ((void*)0);

  switch (VAR_5->device_type) {
  case 130:
   break;
  case 129:
   if (VAR_5->backend.file.cred != ((void*)0)) {
    FUNC_3(VAR_5->backend.file.cred);
    VAR_5->backend.file.cred = ((void*)0);
   }
   break;
  case 128:
  default:
   FUNC_5("Unexpected backend type.");
   break;
  }
 }
 FUNC_2();
}
