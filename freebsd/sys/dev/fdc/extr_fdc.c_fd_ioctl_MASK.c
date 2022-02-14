
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int ;
struct thread {int dummy; } ;
struct g_provider {TYPE_1__* geom; } ;
struct fdc_status {int status; } ;
struct fdc_readid {int cyl; int head; } ;
struct fd_type {int sectrac; } ;
struct fd_formb {int format_version; } ;
struct fd_data {size_t type; int options; TYPE_2__* fdc; int flags; struct fd_type* ft; struct fd_type fts; } ;
typedef enum fd_drivetype { ____Placeholder_fd_drivetype } fd_drivetype ;
struct TYPE_4__ {int flags; int fdc_mtx; int status; int fdc_errs; } ;
struct TYPE_3__ {struct fd_data* softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;




 int VAR_7 ;





 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct fd_type** VAR_11 ;
 int FUNC_0 (struct fd_data*,int ,void*) ;
 int FUNC_1 (struct fd_type*) ;
 int FUNC_2 (struct fd_data*,struct fd_type*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct thread*,int ) ;

__attribute__((used)) static int
FUNC_8(struct g_provider *VAR_12, u_long VAR_13, void *VAR_14, int VAR_15, struct thread *VAR_16)
{
 struct fd_data *VAR_17;
 struct fdc_status *VAR_18;
 struct fdc_readid *VAR_19;
 int VAR_20;

 VAR_17 = VAR_12->geom->softc;

 switch (VAR_13) {
 case 133:
  *(struct fd_type *)VAR_14 = *VAR_17->ft;
  return (0);

 case 130:





  VAR_17->fts = *(struct fd_type *)VAR_14;
  if (VAR_17->fts.sectrac) {

   FUNC_2(VAR_17, &VAR_17->fts);
  } else {
   FUNC_2(VAR_17, VAR_11[VAR_17->type]);
  }
  if (VAR_10 & 0x40)
   FUNC_1(VAR_17->ft);
  return (0);

 case 135:
  *(int *)VAR_14 = VAR_17->options;
  return (0);

 case 131:
  VAR_17->options = *(int *)VAR_14;
  return (0);

 case 138:
  VAR_20 = FUNC_7(VAR_16, VAR_9);
  if (VAR_20)
   return (VAR_20);
  VAR_17->fdc->fdc_errs = 0;
  return (0);

 case 134:
  VAR_18 = (struct fdc_status *)VAR_14;
  if ((VAR_17->fdc->flags & VAR_5) == 0)
   return (VAR_2);
  FUNC_3(VAR_18->status, VAR_17->fdc->status, 7 * sizeof(u_int));
  return (0);

 case 136:
  *(enum fd_drivetype *)VAR_14 = VAR_17->type;
  return (0);

 case 137:
  if (!(VAR_15 & VAR_8))
   return (VAR_4);
  if (((struct fd_formb *)VAR_14)->format_version !=
      VAR_6)
   return (VAR_2);
  VAR_20 = FUNC_0(VAR_17, VAR_0, VAR_14);
  FUNC_4(&VAR_17->fdc->fdc_mtx);
  VAR_17->flags |= VAR_7;
  FUNC_5(&VAR_17->fdc->fdc_mtx);
  break;

 case 132:
  VAR_19 = (struct fdc_readid *)VAR_14;
  if (VAR_19->cyl > 85 || VAR_19->head > 1)
   return (VAR_2);
  VAR_20 = FUNC_0(VAR_17, VAR_1, VAR_14);
  break;

 case 128:
 case 129:

  VAR_20 = 0;
  break;

 default:
  if (VAR_10 & 0x80)
   FUNC_6("Unknown ioctl %lx\n", VAR_13);
  VAR_20 = VAR_3;
  break;
 }
 return (VAR_20);
}
