
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_provider {int flags; int acr; int acw; int ace; int sectorsize; int stripesize; int mediasize; TYPE_1__* geom; } ;
struct fdc_data {int fdc_mtx; } ;
struct fd_data {int options; int flags; int sectorsize; TYPE_2__* ft; int dev; struct fdc_data* fdc; } ;
struct TYPE_4__ {int heads; int sectrac; int tracks; } ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct fd_data*) ;
 scalar_t__ FUNC_4 (struct fd_data*,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct g_provider *VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
 struct fd_data *VAR_15;
 struct fdc_data *VAR_16;
 int VAR_17, VAR_18, VAR_19;
 int VAR_20;

 VAR_15 = VAR_11->geom->softc;
 VAR_16 = VAR_15->fdc;





 if (VAR_11->flags & VAR_10)
  return (0);

 VAR_17 = VAR_12 + VAR_11->acr;
 VAR_18 = VAR_13 + VAR_11->acw;
 VAR_19 = VAR_14 + VAR_11->ace;

 if (VAR_17 == 0 && VAR_18 == 0 && VAR_19 == 0) {
  VAR_15->options &= ~(VAR_5 | VAR_3 | VAR_4);
  FUNC_2(VAR_15->dev);
  return (0);
 }

 VAR_20 = 0;
 if (VAR_11->acr == 0 && VAR_11->acw == 0 && VAR_11->ace == 0) {
  if (FUNC_4(VAR_15, VAR_0, ((void*)0)))
   return (VAR_1);
  if (VAR_15->flags & VAR_6)
   return (VAR_1);
  if (VAR_15->flags & VAR_7) {
   if (FUNC_3(VAR_15) != 0 &&
       (FUNC_1(VAR_15->dev) & VAR_8)) {
    FUNC_5(&VAR_16->fdc_mtx);
    VAR_15->flags |= VAR_6;
    FUNC_6(&VAR_16->fdc_mtx);
    return (VAR_1);
   }
   FUNC_5(&VAR_16->fdc_mtx);
   VAR_15->flags &= ~VAR_7;
   FUNC_6(&VAR_16->fdc_mtx);
  }
  FUNC_0(VAR_15->dev);
  VAR_20 = 1;
 }

 if (VAR_13 > 0 && (VAR_15->flags & VAR_9)) {
  if (VAR_20)
   FUNC_2(VAR_15->dev);
  return (VAR_2);
 }

 VAR_11->sectorsize = VAR_15->sectorsize;
 VAR_11->stripesize = VAR_15->ft->heads * VAR_15->ft->sectrac * VAR_15->sectorsize;
 VAR_11->mediasize = VAR_11->stripesize * VAR_15->ft->tracks;
 return (0);
}
