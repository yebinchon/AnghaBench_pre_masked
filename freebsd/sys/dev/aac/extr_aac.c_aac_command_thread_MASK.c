
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct aac_softc {int aifflags; int flags; int aac_dev; int aac_io_lock; TYPE_1__* aac_common; int aifthread; } ;
struct TYPE_4__ {int Command; int XferState; scalar_t__ StructType; int Size; } ;
struct aac_fib {TYPE_2__ Header; scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__* ac_printf; } ;
typedef int AAC_FSAStatus ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct aac_softc*,struct aac_fib*) ;

 int VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct aac_softc*) ;
 scalar_t__ FUNC_2 (struct aac_softc*,int ,int *,struct aac_fib**) ;
 int FUNC_3 (struct aac_softc*,int ,struct aac_fib*) ;
 int FUNC_4 (struct aac_softc*,struct aac_fib*) ;
 int FUNC_5 (struct aac_softc*) ;
 int FUNC_6 (struct aac_softc*) ;
 int FUNC_7 (struct aac_softc*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct aac_softc*,char*,char*) ;
 int VAR_15 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *,int ,char*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15(struct aac_softc *VAR_16)
{
 struct aac_fib *VAR_17;
 u_int32_t VAR_18;
 int VAR_19, VAR_20;

 FUNC_9(VAR_16, VAR_12, "");

 FUNC_12(&VAR_16->aac_io_lock);
 VAR_16->aifflags = VAR_4;

 while ((VAR_16->aifflags & VAR_2) == 0) {

  VAR_20 = 0;
  if ((VAR_16->aifflags & VAR_3) == 0)
   VAR_20 = FUNC_11(VAR_16->aifthread, &VAR_16->aac_io_lock, VAR_13,
     "aifthd", VAR_10 * VAR_15);






  if ((VAR_16->aifflags & VAR_1) != 0) {
   FUNC_13(&VAR_16->aac_io_lock);
   FUNC_1(VAR_16);
   FUNC_12(&VAR_16->aac_io_lock);
   VAR_16->aifflags &= ~VAR_1;
   FUNC_6(VAR_16);
  }






  if (VAR_20 == VAR_11)
   FUNC_7(VAR_16);


  if (VAR_16->aac_common->ac_printf[0] != 0)
   FUNC_5(VAR_16);


  if (VAR_16->flags & VAR_8)
   continue;
  for (;;) {
   if (FUNC_2(VAR_16, VAR_9,
        &VAR_18, &VAR_17))
    break;

   FUNC_0(VAR_16, VAR_17);

   switch (VAR_17->Header.Command) {
   case 128:
    FUNC_4(VAR_16, VAR_17);
    break;
   default:
    FUNC_8(VAR_16->aac_dev, "unknown command "
           "from controller\n");
    break;
   }

   if ((VAR_17->Header.XferState == 0) ||
       (VAR_17->Header.StructType != VAR_7)) {
    break;
   }


   if (VAR_17->Header.XferState & VAR_6) {
    VAR_17->Header.XferState |= VAR_5;
    *(AAC_FSAStatus*)VAR_17->data = VAR_14;


    VAR_19 = VAR_17->Header.Size;
    if (VAR_19 > sizeof(struct aac_fib)) {
     VAR_19 = sizeof(struct aac_fib);
     VAR_17->Header.Size = VAR_19;
    }





    FUNC_3(VAR_16,
       VAR_0,
       VAR_17);
   }
  }
 }
 VAR_16->aifflags &= ~VAR_4;
 FUNC_13(&VAR_16->aac_io_lock);
 FUNC_14(VAR_16->aac_dev);

 FUNC_10(0);
}
