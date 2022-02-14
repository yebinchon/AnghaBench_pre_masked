
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uio {int uio_resid; TYPE_2__* uio_td; } ;
struct cdev {struct acpi_hp_softc* si_drv1; } ;
struct acpi_hp_softc {scalar_t__ hpcmi_open_pid; int hpcmi_bufptr; int cmi_order_size; scalar_t__ has_cmi; int cmi_detail; int hpcmi_sbuf; TYPE_3__* cmi_order; int wmi_dev; } ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_6__ {scalar_t__ sequence; scalar_t__ instance; } ;
struct TYPE_5__ {TYPE_1__* td_proc; } ;
struct TYPE_4__ {scalar_t__ p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,char*,int,scalar_t__*,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,char*) ;
 int FUNC_10 (scalar_t__,int,struct uio*) ;

__attribute__((used)) static int
FUNC_11(struct cdev *VAR_5, struct uio *VAR_6, int VAR_7)
{
 struct acpi_hp_softc *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 UINT8 VAR_13;
 UINT8 VAR_14;
 UINT32 VAR_15;
 int VAR_16 = 1025;
 char VAR_17[VAR_16];

 if (VAR_5 == ((void*)0) || VAR_5->si_drv1 == ((void*)0))
  return (VAR_2);
 VAR_8 = VAR_5->si_drv1;

 FUNC_0(VAR_4);
 if (VAR_8->hpcmi_open_pid != VAR_6->uio_td->td_proc->p_pid
     || VAR_8->hpcmi_bufptr == -1) {
  VAR_12 = VAR_2;
 }
 else {
  if (!FUNC_6(&VAR_8->hpcmi_sbuf)) {
   if (VAR_8->cmi_order_size < 0) {
    VAR_14 = VAR_8->has_cmi;
    if (!(VAR_8->cmi_detail &
        VAR_0) &&
        VAR_14 > 0) {
     VAR_14--;
    }
    VAR_8->cmi_order_size = 0;
    for (VAR_13 = 0; VAR_13 < VAR_14;
        ++VAR_13) {
     if (FUNC_2(VAR_8->wmi_dev,
      VAR_1, VAR_13,
      VAR_17, VAR_16, &VAR_15,
      VAR_8->cmi_detail)) {
      VAR_13 = VAR_14;
     }
     else {
      VAR_9 = VAR_8->cmi_order_size;
      for (VAR_10=0;
        VAR_10<VAR_8->cmi_order_size && VAR_10<127;
           ++VAR_10) {
    if (VAR_8->cmi_order[VAR_10].sequence > VAR_15) {
        VAR_9 = VAR_10;
        break;
       }
      }
      for (VAR_10=VAR_8->cmi_order_size;
          VAR_10>VAR_9;
          --VAR_10) {
      VAR_8->cmi_order[VAR_10].sequence =
          VAR_8->cmi_order[VAR_10-1].sequence;
      VAR_8->cmi_order[VAR_10].instance =
          VAR_8->cmi_order[VAR_10-1].instance;
      }
      VAR_8->cmi_order[VAR_9].sequence =
          VAR_15;
      VAR_8->cmi_order[VAR_9].instance =
          VAR_13;
      VAR_8->cmi_order_size++;
     }
    }
   }
   for (VAR_10=0; VAR_10<VAR_8->cmi_order_size; ++VAR_10) {
    if (!FUNC_2(VAR_8->wmi_dev,
        VAR_1,
        VAR_8->cmi_order[VAR_10].instance, VAR_17, VAR_16,
        &VAR_15, VAR_8->cmi_detail)) {
     FUNC_9(&VAR_8->hpcmi_sbuf, "%s\n", VAR_17);
    }
   }
   FUNC_7(&VAR_8->hpcmi_sbuf);
  }
  if (FUNC_8(&VAR_8->hpcmi_sbuf) <= 0) {
   FUNC_5(&VAR_8->hpcmi_sbuf);
   VAR_8->hpcmi_bufptr = -1;
   VAR_8->hpcmi_open_pid = 0;
   VAR_12 = VAR_3;
  } else {
   VAR_11 = FUNC_3(VAR_6->uio_resid, FUNC_8(&VAR_8->hpcmi_sbuf) -
       VAR_8->hpcmi_bufptr);
   VAR_12 = (VAR_11 > 0)?FUNC_10(FUNC_4(&VAR_8->hpcmi_sbuf) +
       VAR_8->hpcmi_bufptr, VAR_11, VAR_6) : 0;
   VAR_8->hpcmi_bufptr += VAR_11;
  }
 }
 FUNC_1(VAR_4);

 return (VAR_12);
}
