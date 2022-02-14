
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_data {int fdc_mtx; } ;
struct fd_data {int options; int fdsu; int flags; struct fdc_data* fdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct fdc_data*,int,int ,int,int,...) ;
 scalar_t__ FUNC_1 (struct fdc_data*,int*) ;
 scalar_t__ FUNC_2 (struct fdc_data*,int*,int*) ;
 int FUNC_3 (struct fdc_data*) ;
 int VAR_12 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct fdc_data*,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_8(struct fd_data *VAR_13, int *VAR_14)
{
 struct fdc_data *VAR_15;
 int VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;

 VAR_15 = VAR_13->fdc;
 VAR_19 = VAR_13->options;
 VAR_13->options |= VAR_1 | VAR_2;
 VAR_20 = 1;





 if (VAR_11 & 0x40)
  FUNC_6("New disk in probe\n");
 FUNC_4(&VAR_15->fdc_mtx);
 VAR_13->flags |= VAR_4;
 FUNC_5(&VAR_15->fdc_mtx);
 if (FUNC_0(VAR_15, 2, VAR_7, VAR_13->fdsu, 0))
  goto done;
 FUNC_7(VAR_15, VAR_10, "fdrecal", VAR_12);
 if (FUNC_2(VAR_15, &VAR_16, &VAR_18) == VAR_5)
  goto done;
 if ((VAR_16 & 0xc0) || VAR_18 != 0)
  goto done;


 if (FUNC_0(VAR_15, 3, VAR_8, VAR_13->fdsu, 1, 0))
  goto done;
 FUNC_7(VAR_15, VAR_10, "fdseek", VAR_12);
 if (FUNC_2(VAR_15, &VAR_16, &VAR_18) == VAR_5)
  goto done;
 *VAR_14 |= (1 << VAR_13->fdsu);
 if (FUNC_3(VAR_15) & VAR_0) {
  if (VAR_11 & 0x40)
   FUNC_6("Empty in probe\n");
  FUNC_4(&VAR_15->fdc_mtx);
  VAR_13->flags |= VAR_3;
  FUNC_5(&VAR_15->fdc_mtx);
 } else {
  if (FUNC_1(VAR_15, &VAR_17) != 0)
   goto done;
  if (VAR_11 & 0x40)
   FUNC_6("Got disk in probe\n");
  FUNC_4(&VAR_15->fdc_mtx);
  VAR_13->flags &= ~VAR_3;
  if (VAR_17 & VAR_9)
   VAR_13->flags |= VAR_6;
  else
   VAR_13->flags &= ~VAR_6;
  FUNC_5(&VAR_15->fdc_mtx);
 }
 VAR_20 = 0;

done:
 VAR_13->options = VAR_19;
 return (VAR_20);
}
