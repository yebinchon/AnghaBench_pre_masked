
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {int mfi_flags; int mfi_detaching; int mfi_eh; int mfi_config_lock; int mfi_dev; int mfi_io_lock; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int **,int*) ;
 struct mfi_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct mfi_softc*) ;
 int FUNC_6 (struct mfi_softc*) ;
 int FUNC_7 (struct mfi_softc*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_4)
{
 struct mfi_softc *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 device_t *VAR_9;

 VAR_5 = FUNC_3(VAR_4);

 FUNC_10(&VAR_5->mfi_config_lock);
 FUNC_8(&VAR_5->mfi_io_lock);
 if ((VAR_5->mfi_flags & VAR_1) != 0) {
  FUNC_9(&VAR_5->mfi_io_lock);
  FUNC_11(&VAR_5->mfi_config_lock);
  return (VAR_0);
 }
 VAR_5->mfi_detaching = 1;
 FUNC_9(&VAR_5->mfi_io_lock);

 if ((VAR_6 = FUNC_2(VAR_5->mfi_dev, &VAR_9, &VAR_7)) != 0) {
  FUNC_11(&VAR_5->mfi_config_lock);
  return VAR_6;
 }
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_1(VAR_5->mfi_dev, VAR_9[VAR_8]);
 FUNC_4(VAR_9, VAR_2);
 FUNC_11(&VAR_5->mfi_config_lock);

 FUNC_0(VAR_3, VAR_5->mfi_eh);

 FUNC_7(VAR_5);
 FUNC_5(VAR_5);
 FUNC_6(VAR_5);
 return (0);
}
