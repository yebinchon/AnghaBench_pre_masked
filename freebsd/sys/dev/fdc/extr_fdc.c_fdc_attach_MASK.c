
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_data {int flags; int head; scalar_t__ fdout; int fdc_mtx; int fdcu; int dmachan; int fdc_intr; int res_irq; int fdc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int,int *,int *,struct fdc_data*,int *) ;
 struct fdc_data* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,struct fdc_data*) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int FUNC_6 (struct fdc_data*,scalar_t__) ;
 int VAR_11 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,char*,int *,int ) ;
 int VAR_12 ;

int
FUNC_11(device_t VAR_13)
{
 struct fdc_data *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_2(VAR_13);
 VAR_14->fdc_dev = VAR_13;
 VAR_15 = FUNC_5(VAR_13, VAR_14);
 if (VAR_15) {
  FUNC_4(VAR_13, "does not respond\n");
  return (VAR_15);
 }
 VAR_15 = FUNC_1(VAR_13, VAR_14->res_irq,
     VAR_5 | VAR_3 |
     ((VAR_14->flags & VAR_2) ? VAR_4 : 0),
            ((VAR_14->flags & VAR_2) ? ((void*)0) : VAR_10),
     ((VAR_14->flags & VAR_2) ? VAR_9 : ((void*)0)),
          VAR_14, &VAR_14->fdc_intr);
 if (VAR_15) {
  FUNC_4(VAR_13, "cannot setup interrupt\n");
  return (VAR_15);
 }
 if (!(VAR_14->flags & VAR_1)) {
  VAR_15 = FUNC_7(VAR_14->dmachan);
  if (!VAR_15) {
   VAR_15 = FUNC_8(VAR_14->dmachan,
       VAR_6, VAR_8);
   if (VAR_15)
    FUNC_9(VAR_14->dmachan);
  }
  if (VAR_15)
   return (VAR_15);
 }
 VAR_14->fdcu = FUNC_3(VAR_13);
 VAR_14->flags |= VAR_0;

 FUNC_10(&VAR_14->fdc_mtx, "fdc lock", ((void*)0), VAR_7);


 FUNC_6(VAR_14, VAR_14->fdout = 0);
 FUNC_0(&VAR_14->head);

 VAR_12 = VAR_11 / 8;

 return (0);
}
