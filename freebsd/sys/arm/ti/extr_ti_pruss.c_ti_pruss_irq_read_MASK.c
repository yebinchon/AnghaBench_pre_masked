
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct uio {size_t const uio_resid; } ;
struct TYPE_3__ {size_t cnt; size_t idx; } ;
struct TYPE_4__ {int * ts; TYPE_1__ ctl; } ;
struct ti_pruss_irqsc {TYPE_2__ tstamps; int sc_mtx; } ;
struct ctl {size_t cnt; size_t idx; } ;
struct cdev {struct ti_pruss_irqsc* si_drv1; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (size_t*,int) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (struct ti_pruss_irqsc*,int *,int,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,size_t const,struct uio*) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_7, struct uio *VAR_8, int VAR_9)
{
 const size_t VAR_10 = sizeof(uint64_t);
 struct ti_pruss_irqsc* VAR_11;
 struct ctl* VAR_12;
 int VAR_13 = 0;
 size_t VAR_14;
 ssize_t VAR_15;

 VAR_11 = VAR_7->si_drv1;

 if (VAR_8->uio_resid < VAR_10)
  return (VAR_0);

 VAR_13 = FUNC_1((void**)&VAR_12);
 if (VAR_13)
     return (VAR_13);

 FUNC_3(&VAR_11->sc_mtx);

 if (VAR_11->tstamps.ctl.cnt - VAR_12->cnt > VAR_6)
 {
  VAR_12->cnt = VAR_11->tstamps.ctl.cnt;
  VAR_12->idx = VAR_11->tstamps.ctl.idx;
  FUNC_4(&VAR_11->sc_mtx);
  return (VAR_1);
 }

 do {
  VAR_14 = VAR_12->idx;
  VAR_15 = VAR_11->tstamps.ctl.idx - VAR_14;
  if (VAR_15 < 0)
   VAR_15 += VAR_6;

  if (VAR_15 == 0) {
   if (VAR_9 & VAR_3) {
    FUNC_4(&VAR_11->sc_mtx);
    return (VAR_2);
   }

   VAR_13 = FUNC_2(VAR_11, &VAR_11->sc_mtx, VAR_4 | VAR_5,
    "pruirq", 0);
   if (VAR_13)
    return VAR_13;

   FUNC_3(&VAR_11->sc_mtx);
  }
 }while(VAR_15 == 0);

 FUNC_4(&VAR_11->sc_mtx);

 VAR_13 = FUNC_5(&VAR_11->tstamps.ts[VAR_14], VAR_10, VAR_8);

 if (++VAR_14 == VAR_6)
  VAR_14 = 0;
 VAR_12->idx = VAR_14;

 FUNC_0(&VAR_12->cnt, 1);

 return (VAR_13);
}
