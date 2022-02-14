
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fdc_data {int fdc_mtx; struct fd_data* fd; } ;
struct fd_data {int fdsu; int type; struct fdc_data* fdc; int toffhandle; scalar_t__ options; int track; int flags; int dev; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
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
 int VAR_11 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct fd_data*,int) ;
 int * VAR_12 ;
 int FUNC_8 (struct fd_data*) ;
 scalar_t__ FUNC_9 (struct fdc_data*,int,int ,int,int,...) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct fdc_data*) ;
 scalar_t__ FUNC_13 (struct fdc_data*,int*) ;
 scalar_t__ FUNC_14 (struct fdc_data*,int*,int *) ;
 int FUNC_15 (struct fd_data*,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_13)
{
 int VAR_14;
 int VAR_15;
 u_int VAR_16, VAR_17;
 struct fd_data *VAR_18;
 struct fdc_data *VAR_19;
 int VAR_20;
 int VAR_21, VAR_22;

 VAR_20 = FUNC_11(VAR_13);
 VAR_18 = FUNC_4(VAR_13);
 VAR_19 = FUNC_4(FUNC_3(VAR_13));
 VAR_21 = FUNC_2(VAR_13);

 VAR_18->dev = VAR_13;
 VAR_18->fdc = VAR_19;
 VAR_18->fdsu = VAR_20;
 VAR_14 = FUNC_5(VAR_13);


 VAR_22 = VAR_21 & VAR_6;
 if (VAR_22 == VAR_2 && (VAR_22 = FUNC_10(VAR_13)) != VAR_2) {
  VAR_18->type = VAR_22;
  goto done;
 } else {

  VAR_18->flags = VAR_3;
  VAR_18->type = VAR_22;
 }


 if (VAR_18->type == VAR_2 && (VAR_14 == 0 || VAR_14 == 1)) {

  if (VAR_14 == 0)
   VAR_18->type = (FUNC_18(VAR_11) & 0xf0) >> 4;
  else
   VAR_18->type = FUNC_18(VAR_11) & 0x0f;
  if (VAR_18->type == VAR_1)
   VAR_18->type = 130;
 }


 if (VAR_18->type == VAR_2)
  return (VAR_0);

 FUNC_16(&VAR_19->fdc_mtx);


 FUNC_8(VAR_18);
 FUNC_7(VAR_18, 1);
 VAR_19->fd = VAR_18;
 FUNC_12(VAR_19);
 FUNC_0(1000000);

 if ((VAR_21 & VAR_4) == 0) {

  if ((FUNC_13(VAR_19, &VAR_17) == 0) &&
      (VAR_17 & VAR_10)) {

   if (FUNC_9(VAR_19, 3, VAR_8, VAR_20, 10, 0) == 0) {

    FUNC_0(300000);

    FUNC_14(VAR_19, ((void*)0), ((void*)0));
   }
  }

  for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {







   if (FUNC_9(VAR_19, 2, VAR_7, VAR_20, 0) == 0) {

    FUNC_0(VAR_15 == 0 ? 1000000 : 300000);


    if (FUNC_14(VAR_19, &VAR_16, ((void*)0)) == 0 &&
        (VAR_16 & VAR_9) == 0)
     break;
   }
  }
 }

 FUNC_7(VAR_18, 0);
 VAR_19->fd = ((void*)0);
 FUNC_17(&VAR_19->fdc_mtx);

 if ((VAR_21 & VAR_4) == 0 &&
     (VAR_16 & VAR_9) != 0)
  return (VAR_0);

done:

 switch (VAR_18->type) {
 case 132:
  FUNC_6(VAR_13, "1200-KB 5.25\" drive");
  break;
 case 131:
  FUNC_6(VAR_13, "1440-KB 3.5\" drive");
  break;
 case 130:
  FUNC_6(VAR_13, "2880-KB 3.5\" drive (in 1440-KB mode)");
  break;
 case 129:
  FUNC_6(VAR_13, "360-KB 5.25\" drive");
  break;
 case 128:
  FUNC_6(VAR_13, "720-KB 3.5\" drive");
  break;
 default:
  return (VAR_0);
 }
 VAR_18->track = VAR_5;
 VAR_18->fdc = VAR_19;
 VAR_18->fdsu = VAR_20;
 VAR_18->options = 0;
 FUNC_1(&VAR_18->toffhandle, &VAR_18->fdc->fdc_mtx, 0);


 FUNC_15(VAR_18, VAR_12[VAR_18->type]);
 return (0);
}
