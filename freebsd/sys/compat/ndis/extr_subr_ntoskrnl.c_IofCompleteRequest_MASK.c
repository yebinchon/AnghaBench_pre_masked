
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_17__ {struct TYPE_17__* mdl_next; } ;
typedef TYPE_3__ mdl ;
struct TYPE_16__ {int irp_irpcnt; TYPE_4__* irp_master; } ;
struct TYPE_15__ {scalar_t__ isb_status; } ;
struct TYPE_18__ {scalar_t__ irp_currentstackloc; scalar_t__ irp_stackcnt; scalar_t__ irp_pendingreturned; scalar_t__ irp_cancel; int irp_flags; TYPE_3__* irp_mdl; TYPE_2__ irp_assoc; int * irp_usrevent; TYPE_1__ irp_iostat; TYPE_1__* irp_usriostat; } ;
typedef TYPE_4__ irp ;
struct TYPE_19__ {int isl_ctl; int isl_completionctx; int * isl_completionfunc; int * isl_devobj; } ;
typedef TYPE_5__ io_stack_location ;
typedef int device_object ;
typedef int * completion_func ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_5__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int *,int ,int ) ;
 scalar_t__ FUNC_9 (int *,int *,TYPE_4__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

void
FUNC_10(irp *VAR_12, uint8_t VAR_13)
{
 uint32_t VAR_14;
 device_object *VAR_15;
 io_stack_location *VAR_16;
 completion_func VAR_17;

 FUNC_7(VAR_12->irp_iostat.isb_status != VAR_9,
     ("incorrect IRP(%p) status (STATUS_PENDING)", VAR_12));

 VAR_16 = FUNC_4(VAR_12);
 FUNC_6(VAR_12);

 do {
  if (VAR_16->isl_ctl & VAR_7)
   VAR_12->irp_pendingreturned = VAR_11;

  if (VAR_12->irp_currentstackloc != (VAR_12->irp_stackcnt + 1))
   VAR_15 = FUNC_4(VAR_12)->isl_devobj;
  else
   VAR_15 = ((void*)0);

  if (VAR_16->isl_completionfunc != ((void*)0) &&
      ((VAR_12->irp_iostat.isb_status == VAR_10 &&
      VAR_16->isl_ctl & VAR_6) ||
      (VAR_12->irp_iostat.isb_status != VAR_10 &&
      VAR_16->isl_ctl & VAR_5) ||
      (VAR_12->irp_cancel == VAR_11 &&
      VAR_16->isl_ctl & VAR_4))) {
   VAR_17 = VAR_16->isl_completionfunc;
   VAR_14 = FUNC_9(VAR_17, VAR_15, VAR_12, VAR_16->isl_completionctx);
   if (VAR_14 == VAR_8)
    return;
  } else {
   if ((VAR_12->irp_currentstackloc <= VAR_12->irp_stackcnt) &&
       (VAR_12->irp_pendingreturned == VAR_11))
    FUNC_5(VAR_12);
  }


  FUNC_6(VAR_12);
  VAR_16++;
 } while (VAR_12->irp_currentstackloc <= (VAR_12->irp_stackcnt + 1));

 if (VAR_12->irp_usriostat != ((void*)0))
  *VAR_12->irp_usriostat = VAR_12->irp_iostat;
 if (VAR_12->irp_usrevent != ((void*)0))
  FUNC_8(VAR_12->irp_usrevent, VAR_13, VAR_0);



 if (VAR_12->irp_flags & VAR_2) {
  uint32_t VAR_18;
  irp *VAR_19;
  mdl *VAR_20;

  VAR_19 = VAR_12->irp_assoc.irp_master;
  VAR_18 =
      FUNC_0(&VAR_19->irp_assoc.irp_irpcnt);

  while ((VAR_20 = VAR_12->irp_mdl) != ((void*)0)) {
   VAR_12->irp_mdl = VAR_20->mdl_next;
   FUNC_3(VAR_20);
  }
  FUNC_2(VAR_12);
  if (VAR_18 == 0)
   FUNC_1(VAR_19, VAR_1);
  return;
 }



 if (VAR_12->irp_flags & VAR_3) {
  if (VAR_12->irp_mdl != ((void*)0))
   FUNC_3(VAR_12->irp_mdl);
  FUNC_2(VAR_12);
 }
}
